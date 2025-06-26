from pyfiberamp.steady_state import SteadyStateSimulation
from pyfiberamp.fibers import YbDopedFiber
from typing import Union
import matplotlib.pyplot as plt
import datetime
import pandas as pd

yb_number_density = 2e25  # m^-3
core_radius = 5.5e-6  # m
length = 2.5  # m
core_na = 0.12
# Example usage
class MyClass:
    def __init__(self, length: Union[int, float]):
        self.length = length

fiber = YbDopedFiber(length=float(length),
                     core_radius=float(core_radius),
                     ion_number_density=float(yb_number_density),  # m^-3
                     background_loss=float(0),
                     core_na=float(core_na))
simulation = SteadyStateSimulation(fiber=fiber)

simulation.add_forward_signal(wl=1064e-9, input_power=2e-3)
simulation.add_forward_pump(wl=940e-9, input_power=300e-3)
simulation.add_ase(wl_start=1000e-9, wl_end=1650e-9, n_bins=80)

result = simulation.run(tol=1e-5)
result.plot()
#save the plotted figure in test-data folder with date and time in the filename

plt.savefig(f'test-data/steady_state_simulation_{datetime.datetime.now().strftime("%Y%m%d_%H%M%S")}.png')
# Save the simulation result as csv to test-data folder with date and time in the filename


# If SimulationResult has a to_dataframe() method, use it:
df = result.to_dataframe() # type: ignore
df.to_csv(f'test-data/steady_state_simulation_{datetime.datetime.now().strftime("%Y%m%d_%H%M%S")}.csv', index=False)
