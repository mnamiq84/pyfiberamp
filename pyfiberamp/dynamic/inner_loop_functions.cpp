#include <pythonic/core.hpp>
#include <pythonic/python/core.hpp>
#include <pythonic/types/bool.hpp>
#include <pythonic/types/int.hpp>
#ifdef _OPENMP
#include <omp.h>
#endif
#include <pythonic\include\types\bool.hpp>
#include <pythonic\include\types\float.hpp>
#include <pythonic\include\types\int.hpp>
#include <pythonic\include\types\ndarray.hpp>
#include <pythonic\include\types\numpy_texpr.hpp>
#include <pythonic\types\bool.hpp>
#include <pythonic\types\float.hpp>
#include <pythonic\types\int.hpp>
#include <pythonic\types\ndarray.hpp>
#include <pythonic\types\numpy_texpr.hpp>
#include <pythonic/include/builtins/None.hpp>
#include <pythonic/include/builtins/getattr.hpp>
#include <pythonic/include/builtins/range.hpp>
#include <pythonic/include/builtins/tuple.hpp>
#include <pythonic/include/builtins/zip.hpp>
#include <pythonic/include/numpy/copyto.hpp>
#include <pythonic/include/numpy/empty_like.hpp>
#include <pythonic/include/numpy/zeros.hpp>
#include <pythonic/include/numpy/zeros_like.hpp>
#include <pythonic/include/operator_/add.hpp>
#include <pythonic/include/operator_/iadd.hpp>
#include <pythonic/include/operator_/lt.hpp>
#include <pythonic/include/operator_/mul.hpp>
#include <pythonic/include/operator_/sub.hpp>
#include <pythonic/include/types/slice.hpp>
#include <pythonic/include/types/str.hpp>
#include <pythonic/builtins/None.hpp>
#include <pythonic/builtins/getattr.hpp>
#include <pythonic/builtins/range.hpp>
#include <pythonic/builtins/tuple.hpp>
#include <pythonic/builtins/zip.hpp>
#include <pythonic/numpy/copyto.hpp>
#include <pythonic/numpy/empty_like.hpp>
#include <pythonic/numpy/zeros.hpp>
#include <pythonic/numpy/zeros_like.hpp>
#include <pythonic/operator_/add.hpp>
#include <pythonic/operator_/iadd.hpp>
#include <pythonic/operator_/lt.hpp>
#include <pythonic/operator_/mul.hpp>
#include <pythonic/operator_/sub.hpp>
#include <pythonic/types/slice.hpp>
#include <pythonic/types/str.hpp>
namespace 
{
  namespace __pythran_fiber_simulation_pythran_bindings
  {
    struct new_P
    {
      typedef void callable;
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
      struct type
      {
        typedef pythonic::types::none_type __type0;
        typedef typename pythonic::returnable<__type0>::type __type1;
        typedef __type1 result_type;
      }  
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
      inline
      typename type<argument_type0, argument_type1, argument_type2>::result_type operator()(argument_type0 P, argument_type1 P_hat_forward, argument_type2 P_hat_backward) const
      ;
    }  ;
    struct apply_reflection
    {
      typedef void callable;
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 >
      struct type
      {
        typedef pythonic::types::none_type __type0;
        typedef typename pythonic::returnable<__type0>::type __type1;
        typedef __type1 result_type;
      }  
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 >
      inline
      typename type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4>::result_type operator()(argument_type0 P, argument_type1 source_idx, argument_type2 target_idx, argument_type3 R, argument_type4 n_forward) const
      ;
    }  ;
    struct apply_output
    {
      typedef void callable;
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 >
      struct type
      {
        typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type0;
        typedef decltype(pythonic::types::as_const(std::declval<__type0>())) __type1;
        typedef pythonic::types::contiguous_slice __type2;
        typedef long __type3;
        typedef decltype(std::declval<__type1>()(std::declval<__type2>(), std::declval<__type3>())) __type4;
        typedef __type4 __type5;
        typedef pythonic::types::none_type __type6;
        typedef typename pythonic::returnable<__type6>::type __type7;
        typedef __type5 __ptype0;
        typedef __type5 __ptype1;
        typedef __type7 result_type;
      }  
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 >
      inline
      typename type<argument_type0, argument_type1, argument_type2, argument_type3>::result_type operator()(argument_type0 P_in_out, argument_type1 P_hat_forward, argument_type2 idx_iteration, argument_type3 n_forward) const
      ;
    }  ;
    struct apply_input
    {
      typedef void callable;
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 >
      struct type
      {
        typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type0;
        typedef decltype(pythonic::types::as_const(std::declval<__type0>())) __type1;
        typedef pythonic::types::contiguous_slice __type2;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type3;
        typedef decltype(std::declval<__type1>()(std::declval<__type2>(), std::declval<__type3>())) __type4;
        typedef __type4 __type5;
        typedef pythonic::types::none_type __type6;
        typedef typename pythonic::returnable<__type6>::type __type7;
        typedef __type5 __ptype4;
        typedef __type5 __ptype5;
        typedef __type7 result_type;
      }  
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 >
      inline
      typename type<argument_type0, argument_type1, argument_type2, argument_type3>::result_type operator()(argument_type0 P, argument_type1 P_in_out, argument_type2 idx_iteration, argument_type3 n_forward) const
      ;
    }  ;
    struct min_clamp
    {
      typedef void callable;
      ;
      template <typename argument_type0 , typename argument_type1 >
      struct type
      {
        typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type0;
        typedef __type0 __type1;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::range{})>::type>::type __type2;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type3;
        typedef container<typename std::remove_reference<__type0>::type> __type4;
        typedef typename __combined<__type3,__type4>::type __type5;
        typedef decltype(pythonic::builtins::getattr(pythonic::types::attr::SHAPE{}, std::declval<__type5>())) __type6;
        typedef decltype(pythonic::types::as_const(std::declval<__type6>())) __type7;
        typedef typename std::tuple_element<0,typename std::remove_reference<__type7>::type>::type __type8;
        typedef decltype(std::declval<__type2>()(std::declval<__type8>())) __type9;
        typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type9>::type::iterator>::value_type>::type __type10;
        typedef typename std::tuple_element<1,typename std::remove_reference<__type7>::type>::type __type11;
        typedef decltype(std::declval<__type2>()(std::declval<__type11>())) __type12;
        typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type12>::type::iterator>::value_type>::type __type13;
        typedef decltype(pythonic::types::make_tuple(std::declval<__type10>(), std::declval<__type13>())) __type14;
        typedef __type14 __type15;
        typedef pythonic::types::none_type __type16;
        typedef typename pythonic::returnable<__type16>::type __type17;
        typedef __type1 __ptype8;
        typedef __type1 __ptype9;
        typedef __type1 __ptype10;
        typedef __type15 __ptype13;
        typedef __type17 result_type;
      }  
      ;
      template <typename argument_type0 , typename argument_type1 >
      inline
      typename type<argument_type0, argument_type1>::result_type operator()(argument_type0 arr, argument_type1 min_value) const
      ;
    }  ;
    struct shift_to_propagation_direction_to_from
    {
      typedef void callable;
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
      struct type
      {
        typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type0;
        typedef decltype(pythonic::types::as_const(std::declval<__type0>())) __type1;
        typedef pythonic::types::contiguous_slice __type2;
        typedef decltype(std::declval<__type1>()(std::declval<__type2>(), std::declval<__type2>())) __type3;
        typedef __type3 __type4;
        typedef pythonic::types::none_type __type5;
        typedef typename pythonic::returnable<__type5>::type __type6;
        typedef __type4 __ptype17;
        typedef __type4 __ptype18;
        typedef __type6 result_type;
      }  
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
      inline
      typename type<argument_type0, argument_type1, argument_type2>::result_type operator()(argument_type0 P_hat_forward, argument_type1 P, argument_type2 n_forward) const
      ;
    }  ;
    struct shift_against_propagation_direction_to_from
    {
      typedef void callable;
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
      struct type
      {
        typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type0;
        typedef decltype(pythonic::types::as_const(std::declval<__type0>())) __type1;
        typedef pythonic::types::contiguous_slice __type2;
        typedef decltype(std::declval<__type1>()(std::declval<__type2>(), std::declval<__type2>())) __type3;
        typedef __type3 __type4;
        typedef pythonic::types::none_type __type5;
        typedef typename pythonic::returnable<__type5>::type __type6;
        typedef __type4 __ptype21;
        typedef __type4 __ptype22;
        typedef __type6 result_type;
      }  
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
      inline
      typename type<argument_type0, argument_type1, argument_type2>::result_type operator()(argument_type0 P_hat_backward, argument_type1 P_hat_forward, argument_type2 n_forward) const
      ;
    }  ;
    struct dNdT
    {
      typedef void callable;
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 >
      struct type
      {
        typedef pythonic::types::none_type __type0;
        typedef typename pythonic::returnable<__type0>::type __type1;
        typedef __type1 result_type;
      }  
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 >
      inline
      typename type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5, argument_type6, argument_type7>::result_type operator()(argument_type0 N2, argument_type1 P, argument_type2 a_per_h_v_pi_r2, argument_type3 a_g_per_h_v_pi_r2_Nt, argument_type4 A, argument_type5 dt, argument_type6 num_ion_populations, argument_type7 n_channels) const
      ;
    }  ;
    struct dPdZ
    {
      typedef void callable;
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 , typename argument_type8 >
      struct type
      {
        typedef pythonic::types::none_type __type0;
        typedef typename pythonic::returnable<__type0>::type __type1;
        typedef __type1 result_type;
      }  
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 , typename argument_type8 >
      inline
      typename type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5, argument_type6, argument_type7, argument_type8>::result_type operator()(argument_type0 P_hat, argument_type1 N2, argument_type2 a_g_per_Nt, argument_type3 a_l, argument_type4 g_m_h_v_dv_per_Nt, argument_type5 dz, argument_type6 num_ion_populations, argument_type7 n_channels, argument_type8 add) const
      ;
    }  ;
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
    inline
    typename new_P::type<argument_type0, argument_type1, argument_type2>::result_type new_P::operator()(argument_type0 P, argument_type1 P_hat_forward, argument_type2 P_hat_backward) const
    {
      pythonic::numpy::functor::copyto{}(P, pythonic::operator_::add(P_hat_forward, pythonic::operator_::mul(0.5, pythonic::operator_::sub(P, P_hat_backward))));
      return pythonic::builtins::None;
    }
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 >
    inline
    typename apply_reflection::type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4>::result_type apply_reflection::operator()(argument_type0 P, argument_type1 source_idx, argument_type2 target_idx, argument_type3 R, argument_type4 n_forward) const
    {
      {
        for (auto&& __tuple0: pythonic::builtins::functor::zip{}(source_idx, target_idx, R))
        {
          typename pythonic::lazy<decltype(std::get<1>(pythonic::types::as_const(__tuple0)))>::type _target_idx = std::get<1>(pythonic::types::as_const(__tuple0));
          typename pythonic::assignable_noescape<decltype(std::get<0>(pythonic::types::as_const(__tuple0)))>::type _source_idx = std::get<0>(pythonic::types::as_const(__tuple0));
          if (pythonic::operator_::lt(_source_idx, n_forward))
          {
            pythonic::types::as_const(P)[pythonic::types::make_tuple(_target_idx, -1L)] += pythonic::operator_::mul(std::get<2>(pythonic::types::as_const(__tuple0)), pythonic::types::as_const(P)[pythonic::types::make_tuple(_source_idx, -2L)]);
          }
          else
          {
            pythonic::types::as_const(P)[pythonic::types::make_tuple(_target_idx, 0L)] += pythonic::operator_::mul(std::get<2>(pythonic::types::as_const(__tuple0)), pythonic::types::as_const(P)[pythonic::types::make_tuple(_source_idx, 1L)]);
          }
        }
      }
      return pythonic::builtins::None;
    }
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 >
    inline
    typename apply_output::type<argument_type0, argument_type1, argument_type2, argument_type3>::result_type apply_output::operator()(argument_type0 P_in_out, argument_type1 P_hat_forward, argument_type2 idx_iteration, argument_type3 n_forward) const
    {
      P_in_out(pythonic::types::contiguous_slice(pythonic::builtins::None,n_forward),idx_iteration) = pythonic::types::as_const(P_hat_forward)(pythonic::types::contiguous_slice(pythonic::builtins::None,n_forward),-1L);
      P_in_out(pythonic::types::contiguous_slice(n_forward,pythonic::builtins::None),idx_iteration) = pythonic::types::as_const(P_hat_forward)(pythonic::types::contiguous_slice(n_forward,pythonic::builtins::None),0L);
      return pythonic::builtins::None;
    }
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 >
    inline
    typename apply_input::type<argument_type0, argument_type1, argument_type2, argument_type3>::result_type apply_input::operator()(argument_type0 P, argument_type1 P_in_out, argument_type2 idx_iteration, argument_type3 n_forward) const
    {
      P(pythonic::types::contiguous_slice(pythonic::builtins::None,n_forward),0L) = pythonic::types::as_const(P_in_out)(pythonic::types::contiguous_slice(pythonic::builtins::None,n_forward),idx_iteration);
      P(pythonic::types::contiguous_slice(n_forward,pythonic::builtins::None),-1L) = pythonic::types::as_const(P_in_out)(pythonic::types::contiguous_slice(n_forward,pythonic::builtins::None),idx_iteration);
      return pythonic::builtins::None;
    }
    template <typename argument_type0 , typename argument_type1 >
    inline
    typename min_clamp::type<argument_type0, argument_type1>::result_type min_clamp::operator()(argument_type0 arr, argument_type1 min_value) const
    {
      {
        long  __target2 = std::get<0>(pythonic::types::as_const(pythonic::builtins::getattr(pythonic::types::attr::SHAPE{}, arr)));
        for (long  i=0L; i < __target2; i += 1L)
        {
          {
            long  __target1 = std::get<1>(pythonic::types::as_const(pythonic::builtins::getattr(pythonic::types::attr::SHAPE{}, arr)));
            for (long  j=0L; j < __target1; j += 1L)
            {
              if (pythonic::operator_::lt(pythonic::types::as_const(arr)[pythonic::types::make_tuple(i, j)], min_value))
              {
                arr[pythonic::types::make_tuple(i, j)] = min_value;
              }
            }
          }
        }
      }
      return pythonic::builtins::None;
    }
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
    inline
    typename shift_to_propagation_direction_to_from::type<argument_type0, argument_type1, argument_type2>::result_type shift_to_propagation_direction_to_from::operator()(argument_type0 P_hat_forward, argument_type1 P, argument_type2 n_forward) const
    {
      P_hat_forward(pythonic::types::contiguous_slice(pythonic::builtins::None,n_forward),pythonic::types::contiguous_slice(1L,pythonic::builtins::None)) = pythonic::types::as_const(P)(pythonic::types::contiguous_slice(pythonic::builtins::None,n_forward),pythonic::types::contiguous_slice(pythonic::builtins::None,-1L));
      P_hat_forward(pythonic::types::contiguous_slice(n_forward,pythonic::builtins::None),pythonic::types::contiguous_slice(pythonic::builtins::None,-1L)) = pythonic::types::as_const(P)(pythonic::types::contiguous_slice(n_forward,pythonic::builtins::None),pythonic::types::contiguous_slice(1L,pythonic::builtins::None));
      return pythonic::builtins::None;
    }
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
    inline
    typename shift_against_propagation_direction_to_from::type<argument_type0, argument_type1, argument_type2>::result_type shift_against_propagation_direction_to_from::operator()(argument_type0 P_hat_backward, argument_type1 P_hat_forward, argument_type2 n_forward) const
    {
      P_hat_backward(pythonic::types::contiguous_slice(pythonic::builtins::None,n_forward),pythonic::types::contiguous_slice(pythonic::builtins::None,-1L)) = pythonic::types::as_const(P_hat_forward)(pythonic::types::contiguous_slice(pythonic::builtins::None,n_forward),pythonic::types::contiguous_slice(1L,pythonic::builtins::None));
      P_hat_backward(pythonic::types::contiguous_slice(n_forward,pythonic::builtins::None),pythonic::types::contiguous_slice(1L,pythonic::builtins::None)) = pythonic::types::as_const(P_hat_forward)(pythonic::types::contiguous_slice(n_forward,pythonic::builtins::None),pythonic::types::contiguous_slice(pythonic::builtins::None,-1L));
      return pythonic::builtins::None;
    }
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 >
    inline
    typename dNdT::type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5, argument_type6, argument_type7>::result_type dNdT::operator()(argument_type0 N2, argument_type1 P, argument_type2 a_per_h_v_pi_r2, argument_type3 a_g_per_h_v_pi_r2_Nt, argument_type4 A, argument_type5 dt, argument_type6 num_ion_populations, argument_type7 n_channels) const
    {
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::empty_like{})>::type>::type __type0;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type1;
      typedef decltype(std::declval<__type0>()(std::declval<__type1>())) __type2;
      typedef typename pythonic::assignable<__type2>::type __type3;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::zeros{})>::type>::type __type4;
      typedef decltype(pythonic::builtins::getattr(pythonic::types::attr::SHAPE{}, std::declval<__type3>())) __type5;
      typedef decltype(pythonic::types::as_const(std::declval<__type5>())) __type6;
      typedef typename std::tuple_element<1,typename std::remove_reference<__type6>::type>::type __type7;
      typedef decltype(pythonic::builtins::getattr(pythonic::types::attr::DTYPE{}, std::declval<__type3>())) __type8;
      typedef decltype(std::declval<__type4>()(std::declval<__type7>(), std::declval<__type8>())) __type9;
      typedef typename pythonic::assignable<__type9>::type __type10;
      typedef decltype(pythonic::types::as_const(std::declval<__type10>())) __type11;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::range{})>::type>::type __type12;
      typedef decltype(std::declval<__type12>()(std::declval<__type7>())) __type13;
      typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type13>::type::iterator>::value_type>::type __type14;
      typedef decltype(std::declval<__type11>()[std::declval<__type14>()]) __type15;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type4>::type>::type __type16;
      typedef decltype(pythonic::types::as_const(std::declval<__type1>())) __type17;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type6>::type>::type __type18;
      typedef decltype(std::declval<__type12>()(std::declval<__type18>())) __type19;
      typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type19>::type::iterator>::value_type>::type __type20;
      typedef decltype(pythonic::types::make_tuple(std::declval<__type20>(), std::declval<__type14>())) __type21;
      typedef decltype(std::declval<__type17>()[std::declval<__type21>()]) __type22;
      typedef decltype(pythonic::operator_::mul(std::declval<__type16>(), std::declval<__type22>())) __type23;
      typedef decltype(pythonic::operator_::sub(std::declval<__type15>(), std::declval<__type23>())) __type24;
      typedef container<typename std::remove_reference<__type24>::type> __type25;
      typedef indexable<__type21> __type26;
      typedef typename __combined<__type3,__type25,__type26>::type __type27;
      typedef typename pythonic::assignable<__type27>::type __type28;
      __type28 out = pythonic::numpy::functor::empty_like{}(N2);
      {
        long  __target3 = num_ion_populations;
        for (long  i=0L; i < __target3; i += 1L)
        {
          typename pythonic::assignable_noescape<decltype(pythonic::operator_::mul(i, n_channels))>::type start = pythonic::operator_::mul(i, n_channels);
          typename pythonic::assignable_noescape<decltype(pythonic::numpy::functor::zeros{}(std::get<1>(pythonic::types::as_const(pythonic::builtins::getattr(pythonic::types::attr::SHAPE{}, out))), pythonic::builtins::getattr(pythonic::types::attr::DTYPE{}, out)))>::type tmp = pythonic::numpy::functor::zeros{}(std::get<1>(pythonic::types::as_const(pythonic::builtins::getattr(pythonic::types::attr::SHAPE{}, out))), pythonic::builtins::getattr(pythonic::types::attr::DTYPE{}, out));
          {
            long  __target2 = std::get<1>(pythonic::types::as_const(pythonic::builtins::getattr(pythonic::types::attr::SHAPE{}, out)));
            for (long  k=0L; k < __target2; k += 1L)
            {
              {
                long  __target1 = n_channels;
                for (long  j=0L; j < __target1; j += 1L)
                {
                  pythonic::types::as_const(tmp).fast(k) += pythonic::operator_::mul(pythonic::types::as_const(P).fast(pythonic::types::make_tuple(j, k)), pythonic::operator_::sub(pythonic::types::as_const(a_per_h_v_pi_r2)[pythonic::types::make_tuple(pythonic::operator_::add(start, j), k)], pythonic::operator_::mul(pythonic::types::as_const(a_g_per_h_v_pi_r2_Nt)[pythonic::types::make_tuple(pythonic::operator_::add(start, j), k)], pythonic::types::as_const(N2).fast(pythonic::types::make_tuple(i, k)))));
                }
              }
              out.fast(pythonic::types::make_tuple(i, k)) = pythonic::operator_::sub(pythonic::types::as_const(tmp).fast(k), pythonic::operator_::mul(A, pythonic::types::as_const(N2).fast(pythonic::types::make_tuple(i, k))));
            }
          }
        }
      }
      pythonic::numpy::functor::copyto{}(N2, pythonic::operator_::add(N2, pythonic::operator_::mul(dt, out)));
      return pythonic::builtins::None;
    }
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 , typename argument_type8 >
    inline
    typename dPdZ::type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5, argument_type6, argument_type7, argument_type8>::result_type dPdZ::operator()(argument_type0 P_hat, argument_type1 N2, argument_type2 a_g_per_Nt, argument_type3 a_l, argument_type4 g_m_h_v_dv_per_Nt, argument_type5 dz, argument_type6 num_ion_populations, argument_type7 n_channels, argument_type8 add) const
    {
      typename pythonic::assignable_noescape<decltype(pythonic::numpy::functor::zeros_like{}(P_hat))>::type out = pythonic::numpy::functor::zeros_like{}(P_hat);
      {
        long  __target3 = num_ion_populations;
        for (long  i=0L; i < __target3; i += 1L)
        {
          typename pythonic::assignable_noescape<decltype(pythonic::operator_::mul(i, n_channels))>::type start = pythonic::operator_::mul(i, n_channels);
          {
            long  __target2 = std::get<0>(pythonic::types::as_const(pythonic::builtins::getattr(pythonic::types::attr::SHAPE{}, out)));
            for (long  j=0L; j < __target2; j += 1L)
            {
              {
                long  __target1 = std::get<1>(pythonic::types::as_const(pythonic::builtins::getattr(pythonic::types::attr::SHAPE{}, out)));
                for (long  k=0L; k < __target1; k += 1L)
                {
                  pythonic::types::as_const(out).fast(pythonic::types::make_tuple(j, k)) += pythonic::operator_::add(pythonic::operator_::mul(pythonic::types::as_const(P_hat).fast(pythonic::types::make_tuple(j, k)), pythonic::operator_::sub(pythonic::operator_::mul(pythonic::types::as_const(a_g_per_Nt)[pythonic::types::make_tuple(pythonic::operator_::add(start, j), k)], pythonic::types::as_const(N2).fast(pythonic::types::make_tuple(i, k))), pythonic::types::as_const(a_l)[pythonic::types::make_tuple(pythonic::operator_::add(start, j), k)])), pythonic::operator_::mul(pythonic::types::as_const(g_m_h_v_dv_per_Nt)[pythonic::types::make_tuple(pythonic::operator_::add(start, j), k)], pythonic::types::as_const(N2).fast(pythonic::types::make_tuple(i, k))));
                }
              }
            }
          }
        }
      }
      if (add)
      {
        pythonic::numpy::functor::copyto{}(P_hat, pythonic::operator_::add(P_hat, pythonic::operator_::mul(dz, out)));
      }
      else
      {
        pythonic::numpy::functor::copyto{}(P_hat, pythonic::operator_::sub(P_hat, pythonic::operator_::mul(dz, out)));
      }
      return pythonic::builtins::None;
    }
  }
}
#include <pythonic/python/exception_handler.hpp>
#ifdef ENABLE_PYTHON_MODULE
inline
typename __pythran_fiber_simulation_pythran_bindings::new_P::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>::result_type new_P0(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat_forward, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat_backward) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::new_P()(P, P_hat_forward, P_hat_backward);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::new_P::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>::result_type new_P1(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat_forward, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat_backward) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::new_P()(P, P_hat_forward, P_hat_backward);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::new_P::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>::result_type new_P2(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat_forward, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat_backward) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::new_P()(P, P_hat_forward, P_hat_backward);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::new_P::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>::result_type new_P3(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat_forward, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat_backward) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::new_P()(P, P_hat_forward, P_hat_backward);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::new_P::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>::result_type new_P4(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat_forward, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat_backward) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::new_P()(P, P_hat_forward, P_hat_backward);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::new_P::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>::result_type new_P5(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat_forward, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat_backward) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::new_P()(P, P_hat_forward, P_hat_backward);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::new_P::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>::result_type new_P6(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat_forward, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat_backward) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::new_P()(P, P_hat_forward, P_hat_backward);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::new_P::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>::result_type new_P7(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat_forward, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat_backward) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::new_P()(P, P_hat_forward, P_hat_backward);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::apply_reflection::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<long,pythonic::types::pshape<long>>, pythonic::types::ndarray<long,pythonic::types::pshape<long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long>>, long>::result_type apply_reflection0(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P, pythonic::types::ndarray<long,pythonic::types::pshape<long>>&& source_idx, pythonic::types::ndarray<long,pythonic::types::pshape<long>>&& target_idx, pythonic::types::ndarray<double,pythonic::types::pshape<long>>&& R, long&& n_forward) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::apply_reflection()(P, source_idx, target_idx, R, n_forward);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::apply_reflection::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<long,pythonic::types::pshape<long>>, pythonic::types::ndarray<long,pythonic::types::pshape<long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long>>, long>::result_type apply_reflection1(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P, pythonic::types::ndarray<long,pythonic::types::pshape<long>>&& source_idx, pythonic::types::ndarray<long,pythonic::types::pshape<long>>&& target_idx, pythonic::types::ndarray<double,pythonic::types::pshape<long>>&& R, long&& n_forward) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::apply_reflection()(P, source_idx, target_idx, R, n_forward);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::apply_output::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, long, long>::result_type apply_output0(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_in_out, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat_forward, long&& idx_iteration, long&& n_forward) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::apply_output()(P_in_out, P_hat_forward, idx_iteration, n_forward);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::apply_output::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, long, long>::result_type apply_output1(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_in_out, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat_forward, long&& idx_iteration, long&& n_forward) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::apply_output()(P_in_out, P_hat_forward, idx_iteration, n_forward);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::apply_output::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, long, long>::result_type apply_output2(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_in_out, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat_forward, long&& idx_iteration, long&& n_forward) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::apply_output()(P_in_out, P_hat_forward, idx_iteration, n_forward);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::apply_output::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, long, long>::result_type apply_output3(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_in_out, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat_forward, long&& idx_iteration, long&& n_forward) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::apply_output()(P_in_out, P_hat_forward, idx_iteration, n_forward);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::apply_input::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, long, long>::result_type apply_input0(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_in_out, long&& idx_iteration, long&& n_forward) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::apply_input()(P, P_in_out, idx_iteration, n_forward);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::apply_input::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, long, long>::result_type apply_input1(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_in_out, long&& idx_iteration, long&& n_forward) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::apply_input()(P, P_in_out, idx_iteration, n_forward);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::apply_input::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, long, long>::result_type apply_input2(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_in_out, long&& idx_iteration, long&& n_forward) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::apply_input()(P, P_in_out, idx_iteration, n_forward);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::apply_input::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, long, long>::result_type apply_input3(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_in_out, long&& idx_iteration, long&& n_forward) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::apply_input()(P, P_in_out, idx_iteration, n_forward);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::min_clamp::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, double>::result_type min_clamp0(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& arr, double&& min_value) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::min_clamp()(arr, min_value);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::min_clamp::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, double>::result_type min_clamp1(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& arr, double&& min_value) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::min_clamp()(arr, min_value);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::shift_to_propagation_direction_to_from::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, long>::result_type shift_to_propagation_direction_to_from0(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat_forward, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P, long&& n_forward) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::shift_to_propagation_direction_to_from()(P_hat_forward, P, n_forward);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::shift_to_propagation_direction_to_from::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, long>::result_type shift_to_propagation_direction_to_from1(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat_forward, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P, long&& n_forward) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::shift_to_propagation_direction_to_from()(P_hat_forward, P, n_forward);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::shift_to_propagation_direction_to_from::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, long>::result_type shift_to_propagation_direction_to_from2(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat_forward, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P, long&& n_forward) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::shift_to_propagation_direction_to_from()(P_hat_forward, P, n_forward);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::shift_to_propagation_direction_to_from::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, long>::result_type shift_to_propagation_direction_to_from3(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat_forward, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P, long&& n_forward) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::shift_to_propagation_direction_to_from()(P_hat_forward, P, n_forward);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::shift_against_propagation_direction_to_from::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, long>::result_type shift_against_propagation_direction_to_from0(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat_backward, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat_forward, long&& n_forward) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::shift_against_propagation_direction_to_from()(P_hat_backward, P_hat_forward, n_forward);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::shift_against_propagation_direction_to_from::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, long>::result_type shift_against_propagation_direction_to_from1(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat_backward, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat_forward, long&& n_forward) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::shift_against_propagation_direction_to_from()(P_hat_backward, P_hat_forward, n_forward);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::shift_against_propagation_direction_to_from::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, long>::result_type shift_against_propagation_direction_to_from2(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat_backward, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat_forward, long&& n_forward) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::shift_against_propagation_direction_to_from()(P_hat_backward, P_hat_forward, n_forward);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::shift_against_propagation_direction_to_from::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, long>::result_type shift_against_propagation_direction_to_from3(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat_backward, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat_forward, long&& n_forward) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::shift_against_propagation_direction_to_from()(P_hat_backward, P_hat_forward, n_forward);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dNdT::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, double, double, long, long>::result_type dNdT0(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& N2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_per_h_v_pi_r2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_g_per_h_v_pi_r2_Nt, double&& A, double&& dt, long&& num_ion_populations, long&& n_channels) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dNdT()(N2, P, a_per_h_v_pi_r2, a_g_per_h_v_pi_r2_Nt, A, dt, num_ion_populations, n_channels);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dNdT::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, double, double, long, long>::result_type dNdT1(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& N2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_per_h_v_pi_r2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_g_per_h_v_pi_r2_Nt, double&& A, double&& dt, long&& num_ion_populations, long&& n_channels) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dNdT()(N2, P, a_per_h_v_pi_r2, a_g_per_h_v_pi_r2_Nt, A, dt, num_ion_populations, n_channels);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dNdT::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, double, double, long, long>::result_type dNdT2(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& N2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_per_h_v_pi_r2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_g_per_h_v_pi_r2_Nt, double&& A, double&& dt, long&& num_ion_populations, long&& n_channels) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dNdT()(N2, P, a_per_h_v_pi_r2, a_g_per_h_v_pi_r2_Nt, A, dt, num_ion_populations, n_channels);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dNdT::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, double, double, long, long>::result_type dNdT3(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& N2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_per_h_v_pi_r2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_g_per_h_v_pi_r2_Nt, double&& A, double&& dt, long&& num_ion_populations, long&& n_channels) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dNdT()(N2, P, a_per_h_v_pi_r2, a_g_per_h_v_pi_r2_Nt, A, dt, num_ion_populations, n_channels);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dNdT::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, double, double, long, long>::result_type dNdT4(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& N2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_per_h_v_pi_r2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_g_per_h_v_pi_r2_Nt, double&& A, double&& dt, long&& num_ion_populations, long&& n_channels) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dNdT()(N2, P, a_per_h_v_pi_r2, a_g_per_h_v_pi_r2_Nt, A, dt, num_ion_populations, n_channels);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dNdT::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, double, double, long, long>::result_type dNdT5(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& N2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_per_h_v_pi_r2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_g_per_h_v_pi_r2_Nt, double&& A, double&& dt, long&& num_ion_populations, long&& n_channels) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dNdT()(N2, P, a_per_h_v_pi_r2, a_g_per_h_v_pi_r2_Nt, A, dt, num_ion_populations, n_channels);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dNdT::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, double, double, long, long>::result_type dNdT6(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& N2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_per_h_v_pi_r2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_g_per_h_v_pi_r2_Nt, double&& A, double&& dt, long&& num_ion_populations, long&& n_channels) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dNdT()(N2, P, a_per_h_v_pi_r2, a_g_per_h_v_pi_r2_Nt, A, dt, num_ion_populations, n_channels);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dNdT::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, double, double, long, long>::result_type dNdT7(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& N2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_per_h_v_pi_r2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_g_per_h_v_pi_r2_Nt, double&& A, double&& dt, long&& num_ion_populations, long&& n_channels) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dNdT()(N2, P, a_per_h_v_pi_r2, a_g_per_h_v_pi_r2_Nt, A, dt, num_ion_populations, n_channels);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dNdT::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, double, double, long, long>::result_type dNdT8(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& N2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_per_h_v_pi_r2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_g_per_h_v_pi_r2_Nt, double&& A, double&& dt, long&& num_ion_populations, long&& n_channels) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dNdT()(N2, P, a_per_h_v_pi_r2, a_g_per_h_v_pi_r2_Nt, A, dt, num_ion_populations, n_channels);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dNdT::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, double, double, long, long>::result_type dNdT9(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& N2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_per_h_v_pi_r2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_g_per_h_v_pi_r2_Nt, double&& A, double&& dt, long&& num_ion_populations, long&& n_channels) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dNdT()(N2, P, a_per_h_v_pi_r2, a_g_per_h_v_pi_r2_Nt, A, dt, num_ion_populations, n_channels);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dNdT::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, double, double, long, long>::result_type dNdT10(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& N2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_per_h_v_pi_r2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_g_per_h_v_pi_r2_Nt, double&& A, double&& dt, long&& num_ion_populations, long&& n_channels) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dNdT()(N2, P, a_per_h_v_pi_r2, a_g_per_h_v_pi_r2_Nt, A, dt, num_ion_populations, n_channels);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dNdT::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, double, double, long, long>::result_type dNdT11(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& N2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_per_h_v_pi_r2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_g_per_h_v_pi_r2_Nt, double&& A, double&& dt, long&& num_ion_populations, long&& n_channels) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dNdT()(N2, P, a_per_h_v_pi_r2, a_g_per_h_v_pi_r2_Nt, A, dt, num_ion_populations, n_channels);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dNdT::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, double, double, long, long>::result_type dNdT12(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& N2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_per_h_v_pi_r2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_g_per_h_v_pi_r2_Nt, double&& A, double&& dt, long&& num_ion_populations, long&& n_channels) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dNdT()(N2, P, a_per_h_v_pi_r2, a_g_per_h_v_pi_r2_Nt, A, dt, num_ion_populations, n_channels);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dNdT::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, double, double, long, long>::result_type dNdT13(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& N2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_per_h_v_pi_r2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_g_per_h_v_pi_r2_Nt, double&& A, double&& dt, long&& num_ion_populations, long&& n_channels) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dNdT()(N2, P, a_per_h_v_pi_r2, a_g_per_h_v_pi_r2_Nt, A, dt, num_ion_populations, n_channels);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dNdT::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, double, double, long, long>::result_type dNdT14(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& N2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_per_h_v_pi_r2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_g_per_h_v_pi_r2_Nt, double&& A, double&& dt, long&& num_ion_populations, long&& n_channels) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dNdT()(N2, P, a_per_h_v_pi_r2, a_g_per_h_v_pi_r2_Nt, A, dt, num_ion_populations, n_channels);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dNdT::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, double, double, long, long>::result_type dNdT15(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& N2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_per_h_v_pi_r2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_g_per_h_v_pi_r2_Nt, double&& A, double&& dt, long&& num_ion_populations, long&& n_channels) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dNdT()(N2, P, a_per_h_v_pi_r2, a_g_per_h_v_pi_r2_Nt, A, dt, num_ion_populations, n_channels);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, double, long, long, bool>::result_type dPdZ0(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& N2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_g_per_Nt, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_l, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, double, long, long, bool>::result_type dPdZ1(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& N2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_g_per_Nt, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_l, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, double, long, long, bool>::result_type dPdZ2(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& N2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_g_per_Nt, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_l, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, double, long, long, bool>::result_type dPdZ3(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& N2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_g_per_Nt, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_l, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, double, long, long, bool>::result_type dPdZ4(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& N2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_g_per_Nt, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_l, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, double, long, long, bool>::result_type dPdZ5(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& N2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_g_per_Nt, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_l, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, double, long, long, bool>::result_type dPdZ6(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& N2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_g_per_Nt, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_l, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, double, long, long, bool>::result_type dPdZ7(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& N2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_g_per_Nt, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_l, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, double, long, long, bool>::result_type dPdZ8(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& N2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_g_per_Nt, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_l, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, double, long, long, bool>::result_type dPdZ9(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& N2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_g_per_Nt, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_l, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, double, long, long, bool>::result_type dPdZ10(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& N2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_g_per_Nt, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_l, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, double, long, long, bool>::result_type dPdZ11(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& N2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_g_per_Nt, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_l, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, double, long, long, bool>::result_type dPdZ12(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& N2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_g_per_Nt, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_l, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, double, long, long, bool>::result_type dPdZ13(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& N2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_g_per_Nt, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_l, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, double, long, long, bool>::result_type dPdZ14(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& N2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_g_per_Nt, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_l, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, double, long, long, bool>::result_type dPdZ15(pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& P_hat, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& N2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_g_per_Nt, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_l, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, double, long, long, bool>::result_type dPdZ16(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& N2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_g_per_Nt, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_l, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, double, long, long, bool>::result_type dPdZ17(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& N2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_g_per_Nt, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_l, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, double, long, long, bool>::result_type dPdZ18(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& N2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_g_per_Nt, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_l, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, double, long, long, bool>::result_type dPdZ19(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& N2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_g_per_Nt, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_l, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, double, long, long, bool>::result_type dPdZ20(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& N2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_g_per_Nt, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_l, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, double, long, long, bool>::result_type dPdZ21(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& N2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_g_per_Nt, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_l, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, double, long, long, bool>::result_type dPdZ22(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& N2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_g_per_Nt, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_l, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, double, long, long, bool>::result_type dPdZ23(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& N2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_g_per_Nt, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_l, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, double, long, long, bool>::result_type dPdZ24(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& N2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_g_per_Nt, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_l, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, double, long, long, bool>::result_type dPdZ25(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& N2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_g_per_Nt, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_l, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, double, long, long, bool>::result_type dPdZ26(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& N2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_g_per_Nt, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_l, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, double, long, long, bool>::result_type dPdZ27(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& N2, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_g_per_Nt, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_l, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, double, long, long, bool>::result_type dPdZ28(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& N2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_g_per_Nt, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_l, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, double, long, long, bool>::result_type dPdZ29(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& N2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_g_per_Nt, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& a_l, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>, double, long, long, bool>::result_type dPdZ30(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& N2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_g_per_Nt, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_l, pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_fiber_simulation_pythran_bindings::dPdZ::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>, double, long, long, bool>::result_type dPdZ31(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& P_hat, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& N2, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_g_per_Nt, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& a_l, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>&& g_m_h_v_dv_per_Nt, double&& dz, long&& num_ion_populations, long&& n_channels, bool&& add) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_fiber_simulation_pythran_bindings::dPdZ()(P_hat, N2, a_g_per_Nt, a_l, g_m_h_v_dv_per_Nt, dz, num_ion_populations, n_channels, add);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}

static PyObject *
__pythran_wrap_new_P0(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[3+1];
    
    char const* keywords[] = {"P", "P_hat_forward", "P_hat_backward",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]))
        return to_python(new_P0(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_new_P1(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[3+1];
    
    char const* keywords[] = {"P", "P_hat_forward", "P_hat_backward",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]))
        return to_python(new_P1(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_new_P2(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[3+1];
    
    char const* keywords[] = {"P", "P_hat_forward", "P_hat_backward",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]))
        return to_python(new_P2(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_new_P3(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[3+1];
    
    char const* keywords[] = {"P", "P_hat_forward", "P_hat_backward",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]))
        return to_python(new_P3(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_new_P4(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[3+1];
    
    char const* keywords[] = {"P", "P_hat_forward", "P_hat_backward",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]))
        return to_python(new_P4(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_new_P5(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[3+1];
    
    char const* keywords[] = {"P", "P_hat_forward", "P_hat_backward",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]))
        return to_python(new_P5(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_new_P6(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[3+1];
    
    char const* keywords[] = {"P", "P_hat_forward", "P_hat_backward",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]))
        return to_python(new_P6(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_new_P7(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[3+1];
    
    char const* keywords[] = {"P", "P_hat_forward", "P_hat_backward",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]))
        return to_python(new_P7(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_apply_reflection0(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[5+1];
    
    char const* keywords[] = {"P", "source_idx", "target_idx", "R", "n_forward",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<long,pythonic::types::pshape<long>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<long,pythonic::types::pshape<long>>>(args_obj[2]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[3]) && is_convertible<long>(args_obj[4]))
        return to_python(apply_reflection0(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::ndarray<long,pythonic::types::pshape<long>>>(args_obj[1]), from_python<pythonic::types::ndarray<long,pythonic::types::pshape<long>>>(args_obj[2]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[3]), from_python<long>(args_obj[4])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_apply_reflection1(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[5+1];
    
    char const* keywords[] = {"P", "source_idx", "target_idx", "R", "n_forward",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<long,pythonic::types::pshape<long>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<long,pythonic::types::pshape<long>>>(args_obj[2]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[3]) && is_convertible<long>(args_obj[4]))
        return to_python(apply_reflection1(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::ndarray<long,pythonic::types::pshape<long>>>(args_obj[1]), from_python<pythonic::types::ndarray<long,pythonic::types::pshape<long>>>(args_obj[2]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[3]), from_python<long>(args_obj[4])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_apply_output0(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[4+1];
    
    char const* keywords[] = {"P_in_out", "P_hat_forward", "idx_iteration", "n_forward",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<long>(args_obj[2]) && is_convertible<long>(args_obj[3]))
        return to_python(apply_output0(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<long>(args_obj[2]), from_python<long>(args_obj[3])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_apply_output1(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[4+1];
    
    char const* keywords[] = {"P_in_out", "P_hat_forward", "idx_iteration", "n_forward",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<long>(args_obj[2]) && is_convertible<long>(args_obj[3]))
        return to_python(apply_output1(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<long>(args_obj[2]), from_python<long>(args_obj[3])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_apply_output2(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[4+1];
    
    char const* keywords[] = {"P_in_out", "P_hat_forward", "idx_iteration", "n_forward",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<long>(args_obj[2]) && is_convertible<long>(args_obj[3]))
        return to_python(apply_output2(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<long>(args_obj[2]), from_python<long>(args_obj[3])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_apply_output3(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[4+1];
    
    char const* keywords[] = {"P_in_out", "P_hat_forward", "idx_iteration", "n_forward",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<long>(args_obj[2]) && is_convertible<long>(args_obj[3]))
        return to_python(apply_output3(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<long>(args_obj[2]), from_python<long>(args_obj[3])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_apply_input0(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[4+1];
    
    char const* keywords[] = {"P", "P_in_out", "idx_iteration", "n_forward",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<long>(args_obj[2]) && is_convertible<long>(args_obj[3]))
        return to_python(apply_input0(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<long>(args_obj[2]), from_python<long>(args_obj[3])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_apply_input1(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[4+1];
    
    char const* keywords[] = {"P", "P_in_out", "idx_iteration", "n_forward",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<long>(args_obj[2]) && is_convertible<long>(args_obj[3]))
        return to_python(apply_input1(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<long>(args_obj[2]), from_python<long>(args_obj[3])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_apply_input2(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[4+1];
    
    char const* keywords[] = {"P", "P_in_out", "idx_iteration", "n_forward",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<long>(args_obj[2]) && is_convertible<long>(args_obj[3]))
        return to_python(apply_input2(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<long>(args_obj[2]), from_python<long>(args_obj[3])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_apply_input3(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[4+1];
    
    char const* keywords[] = {"P", "P_in_out", "idx_iteration", "n_forward",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<long>(args_obj[2]) && is_convertible<long>(args_obj[3]))
        return to_python(apply_input3(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<long>(args_obj[2]), from_python<long>(args_obj[3])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_min_clamp0(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[2+1];
    
    char const* keywords[] = {"arr", "min_value",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OO",
                                     (char**)keywords , &args_obj[0], &args_obj[1]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<double>(args_obj[1]))
        return to_python(min_clamp0(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<double>(args_obj[1])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_min_clamp1(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[2+1];
    
    char const* keywords[] = {"arr", "min_value",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OO",
                                     (char**)keywords , &args_obj[0], &args_obj[1]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<double>(args_obj[1]))
        return to_python(min_clamp1(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<double>(args_obj[1])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_shift_to_propagation_direction_to_from0(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[3+1];
    
    char const* keywords[] = {"P_hat_forward", "P", "n_forward",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<long>(args_obj[2]))
        return to_python(shift_to_propagation_direction_to_from0(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<long>(args_obj[2])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_shift_to_propagation_direction_to_from1(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[3+1];
    
    char const* keywords[] = {"P_hat_forward", "P", "n_forward",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<long>(args_obj[2]))
        return to_python(shift_to_propagation_direction_to_from1(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<long>(args_obj[2])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_shift_to_propagation_direction_to_from2(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[3+1];
    
    char const* keywords[] = {"P_hat_forward", "P", "n_forward",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<long>(args_obj[2]))
        return to_python(shift_to_propagation_direction_to_from2(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<long>(args_obj[2])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_shift_to_propagation_direction_to_from3(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[3+1];
    
    char const* keywords[] = {"P_hat_forward", "P", "n_forward",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<long>(args_obj[2]))
        return to_python(shift_to_propagation_direction_to_from3(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<long>(args_obj[2])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_shift_against_propagation_direction_to_from0(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[3+1];
    
    char const* keywords[] = {"P_hat_backward", "P_hat_forward", "n_forward",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<long>(args_obj[2]))
        return to_python(shift_against_propagation_direction_to_from0(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<long>(args_obj[2])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_shift_against_propagation_direction_to_from1(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[3+1];
    
    char const* keywords[] = {"P_hat_backward", "P_hat_forward", "n_forward",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<long>(args_obj[2]))
        return to_python(shift_against_propagation_direction_to_from1(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<long>(args_obj[2])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_shift_against_propagation_direction_to_from2(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[3+1];
    
    char const* keywords[] = {"P_hat_backward", "P_hat_forward", "n_forward",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<long>(args_obj[2]))
        return to_python(shift_against_propagation_direction_to_from2(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<long>(args_obj[2])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_shift_against_propagation_direction_to_from3(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[3+1];
    
    char const* keywords[] = {"P_hat_backward", "P_hat_forward", "n_forward",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<long>(args_obj[2]))
        return to_python(shift_against_propagation_direction_to_from3(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<long>(args_obj[2])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dNdT0(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[8+1];
    
    char const* keywords[] = {"N2", "P", "a_per_h_v_pi_r2", "a_g_per_h_v_pi_r2_Nt", "A", "dt", "num_ion_populations", "n_channels",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]) && is_convertible<double>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]))
        return to_python(dNdT0(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]), from_python<double>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dNdT1(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[8+1];
    
    char const* keywords[] = {"N2", "P", "a_per_h_v_pi_r2", "a_g_per_h_v_pi_r2_Nt", "A", "dt", "num_ion_populations", "n_channels",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]) && is_convertible<double>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]))
        return to_python(dNdT1(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]), from_python<double>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dNdT2(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[8+1];
    
    char const* keywords[] = {"N2", "P", "a_per_h_v_pi_r2", "a_g_per_h_v_pi_r2_Nt", "A", "dt", "num_ion_populations", "n_channels",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]) && is_convertible<double>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]))
        return to_python(dNdT2(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]), from_python<double>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dNdT3(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[8+1];
    
    char const* keywords[] = {"N2", "P", "a_per_h_v_pi_r2", "a_g_per_h_v_pi_r2_Nt", "A", "dt", "num_ion_populations", "n_channels",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]) && is_convertible<double>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]))
        return to_python(dNdT3(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]), from_python<double>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dNdT4(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[8+1];
    
    char const* keywords[] = {"N2", "P", "a_per_h_v_pi_r2", "a_g_per_h_v_pi_r2_Nt", "A", "dt", "num_ion_populations", "n_channels",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]) && is_convertible<double>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]))
        return to_python(dNdT4(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]), from_python<double>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dNdT5(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[8+1];
    
    char const* keywords[] = {"N2", "P", "a_per_h_v_pi_r2", "a_g_per_h_v_pi_r2_Nt", "A", "dt", "num_ion_populations", "n_channels",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]) && is_convertible<double>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]))
        return to_python(dNdT5(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]), from_python<double>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dNdT6(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[8+1];
    
    char const* keywords[] = {"N2", "P", "a_per_h_v_pi_r2", "a_g_per_h_v_pi_r2_Nt", "A", "dt", "num_ion_populations", "n_channels",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]) && is_convertible<double>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]))
        return to_python(dNdT6(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]), from_python<double>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dNdT7(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[8+1];
    
    char const* keywords[] = {"N2", "P", "a_per_h_v_pi_r2", "a_g_per_h_v_pi_r2_Nt", "A", "dt", "num_ion_populations", "n_channels",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]) && is_convertible<double>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]))
        return to_python(dNdT7(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]), from_python<double>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dNdT8(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[8+1];
    
    char const* keywords[] = {"N2", "P", "a_per_h_v_pi_r2", "a_g_per_h_v_pi_r2_Nt", "A", "dt", "num_ion_populations", "n_channels",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]) && is_convertible<double>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]))
        return to_python(dNdT8(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]), from_python<double>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dNdT9(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[8+1];
    
    char const* keywords[] = {"N2", "P", "a_per_h_v_pi_r2", "a_g_per_h_v_pi_r2_Nt", "A", "dt", "num_ion_populations", "n_channels",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]) && is_convertible<double>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]))
        return to_python(dNdT9(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]), from_python<double>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dNdT10(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[8+1];
    
    char const* keywords[] = {"N2", "P", "a_per_h_v_pi_r2", "a_g_per_h_v_pi_r2_Nt", "A", "dt", "num_ion_populations", "n_channels",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]) && is_convertible<double>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]))
        return to_python(dNdT10(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]), from_python<double>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dNdT11(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[8+1];
    
    char const* keywords[] = {"N2", "P", "a_per_h_v_pi_r2", "a_g_per_h_v_pi_r2_Nt", "A", "dt", "num_ion_populations", "n_channels",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]) && is_convertible<double>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]))
        return to_python(dNdT11(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]), from_python<double>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dNdT12(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[8+1];
    
    char const* keywords[] = {"N2", "P", "a_per_h_v_pi_r2", "a_g_per_h_v_pi_r2_Nt", "A", "dt", "num_ion_populations", "n_channels",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]) && is_convertible<double>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]))
        return to_python(dNdT12(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]), from_python<double>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dNdT13(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[8+1];
    
    char const* keywords[] = {"N2", "P", "a_per_h_v_pi_r2", "a_g_per_h_v_pi_r2_Nt", "A", "dt", "num_ion_populations", "n_channels",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]) && is_convertible<double>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]))
        return to_python(dNdT13(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]), from_python<double>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dNdT14(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[8+1];
    
    char const* keywords[] = {"N2", "P", "a_per_h_v_pi_r2", "a_g_per_h_v_pi_r2_Nt", "A", "dt", "num_ion_populations", "n_channels",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]) && is_convertible<double>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]))
        return to_python(dNdT14(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]), from_python<double>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dNdT15(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[8+1];
    
    char const* keywords[] = {"N2", "P", "a_per_h_v_pi_r2", "a_g_per_h_v_pi_r2_Nt", "A", "dt", "num_ion_populations", "n_channels",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]) && is_convertible<double>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]))
        return to_python(dNdT15(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]), from_python<double>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ0(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ0(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ1(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ1(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ2(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ2(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ3(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ3(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ4(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ4(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ5(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ5(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ6(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ6(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ7(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ7(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ8(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ8(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ9(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ9(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ10(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ10(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ11(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ11(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ12(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ12(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ13(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ13(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ14(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ14(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ15(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ15(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ16(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ16(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ17(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ17(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ18(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ18(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ19(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ19(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ20(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ20(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ21(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ21(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ22(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ22(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ23(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ23(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ24(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ24(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ25(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ25(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ26(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ26(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ27(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ27(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[2]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ28(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ28(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ29(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ29(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[3]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ30(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ30(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_dPdZ31(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[9+1];
    
    char const* keywords[] = {"P_hat", "N2", "a_g_per_Nt", "a_l", "g_m_h_v_dv_per_Nt", "dz", "num_ion_populations", "n_channels", "add",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8]))
        return nullptr;
    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]) && is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<bool>(args_obj[8]))
        return to_python(dPdZ31(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[1]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[2]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[3]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,pythonic::types::pshape<long,long>>>>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<bool>(args_obj[8])));
    else {
        return nullptr;
    }
}

            static PyObject *
            __pythran_wrapall_new_P(PyObject *self, PyObject *args, PyObject *kw)
            {
                return pythonic::handle_python_exception([self, args, kw]()
                -> PyObject* {

if(PyObject* obj = __pythran_wrap_new_P0(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_new_P1(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_new_P2(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_new_P3(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_new_P4(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_new_P5(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_new_P6(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_new_P7(self, args, kw))
    return obj;
PyErr_Clear();

                return pythonic::python::raise_invalid_argument(
                               "new_P", "\n""    - new_P(float[:,:], float[:,:], float[:,:])", args, kw);
                });
            }


            static PyObject *
            __pythran_wrapall_apply_reflection(PyObject *self, PyObject *args, PyObject *kw)
            {
                return pythonic::handle_python_exception([self, args, kw]()
                -> PyObject* {

if(PyObject* obj = __pythran_wrap_apply_reflection0(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_apply_reflection1(self, args, kw))
    return obj;
PyErr_Clear();

                return pythonic::python::raise_invalid_argument(
                               "apply_reflection", "\n""    - apply_reflection(float[:,:], int[:], int[:], float[:], int)", args, kw);
                });
            }


            static PyObject *
            __pythran_wrapall_apply_output(PyObject *self, PyObject *args, PyObject *kw)
            {
                return pythonic::handle_python_exception([self, args, kw]()
                -> PyObject* {

if(PyObject* obj = __pythran_wrap_apply_output0(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_apply_output1(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_apply_output2(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_apply_output3(self, args, kw))
    return obj;
PyErr_Clear();

                return pythonic::python::raise_invalid_argument(
                               "apply_output", "\n""    - apply_output(float[:,:], float[:,:], int, int)", args, kw);
                });
            }


            static PyObject *
            __pythran_wrapall_apply_input(PyObject *self, PyObject *args, PyObject *kw)
            {
                return pythonic::handle_python_exception([self, args, kw]()
                -> PyObject* {

if(PyObject* obj = __pythran_wrap_apply_input0(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_apply_input1(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_apply_input2(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_apply_input3(self, args, kw))
    return obj;
PyErr_Clear();

                return pythonic::python::raise_invalid_argument(
                               "apply_input", "\n""    - apply_input(float[:,:], float[:,:], int, int)", args, kw);
                });
            }


            static PyObject *
            __pythran_wrapall_min_clamp(PyObject *self, PyObject *args, PyObject *kw)
            {
                return pythonic::handle_python_exception([self, args, kw]()
                -> PyObject* {

if(PyObject* obj = __pythran_wrap_min_clamp0(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_min_clamp1(self, args, kw))
    return obj;
PyErr_Clear();

                return pythonic::python::raise_invalid_argument(
                               "min_clamp", "\n""    - min_clamp(float[:,:], float)", args, kw);
                });
            }


            static PyObject *
            __pythran_wrapall_shift_to_propagation_direction_to_from(PyObject *self, PyObject *args, PyObject *kw)
            {
                return pythonic::handle_python_exception([self, args, kw]()
                -> PyObject* {

if(PyObject* obj = __pythran_wrap_shift_to_propagation_direction_to_from0(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_shift_to_propagation_direction_to_from1(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_shift_to_propagation_direction_to_from2(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_shift_to_propagation_direction_to_from3(self, args, kw))
    return obj;
PyErr_Clear();

                return pythonic::python::raise_invalid_argument(
                               "shift_to_propagation_direction_to_from", "\n""    - shift_to_propagation_direction_to_from(float[:,:], float[:,:], int)", args, kw);
                });
            }


            static PyObject *
            __pythran_wrapall_shift_against_propagation_direction_to_from(PyObject *self, PyObject *args, PyObject *kw)
            {
                return pythonic::handle_python_exception([self, args, kw]()
                -> PyObject* {

if(PyObject* obj = __pythran_wrap_shift_against_propagation_direction_to_from0(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_shift_against_propagation_direction_to_from1(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_shift_against_propagation_direction_to_from2(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_shift_against_propagation_direction_to_from3(self, args, kw))
    return obj;
PyErr_Clear();

                return pythonic::python::raise_invalid_argument(
                               "shift_against_propagation_direction_to_from", "\n""    - shift_against_propagation_direction_to_from(float[:,:], float[:,:], int)", args, kw);
                });
            }


            static PyObject *
            __pythran_wrapall_dNdT(PyObject *self, PyObject *args, PyObject *kw)
            {
                return pythonic::handle_python_exception([self, args, kw]()
                -> PyObject* {

if(PyObject* obj = __pythran_wrap_dNdT0(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dNdT1(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dNdT2(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dNdT3(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dNdT4(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dNdT5(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dNdT6(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dNdT7(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dNdT8(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dNdT9(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dNdT10(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dNdT11(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dNdT12(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dNdT13(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dNdT14(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dNdT15(self, args, kw))
    return obj;
PyErr_Clear();

                return pythonic::python::raise_invalid_argument(
                               "dNdT", "\n""    - dNdT(float[:,:], float[:,:], float[:,:], float[:,:], float, float, int, int)", args, kw);
                });
            }


            static PyObject *
            __pythran_wrapall_dPdZ(PyObject *self, PyObject *args, PyObject *kw)
            {
                return pythonic::handle_python_exception([self, args, kw]()
                -> PyObject* {

if(PyObject* obj = __pythran_wrap_dPdZ0(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ1(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ2(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ3(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ4(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ5(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ6(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ7(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ8(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ9(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ10(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ11(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ12(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ13(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ14(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ15(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ16(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ17(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ18(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ19(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ20(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ21(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ22(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ23(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ24(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ25(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ26(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ27(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ28(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ29(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ30(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_dPdZ31(self, args, kw))
    return obj;
PyErr_Clear();

                return pythonic::python::raise_invalid_argument(
                               "dPdZ", "\n""    - dPdZ(float[:,:], float[:,:], float[:,:], float[:,:], float[:,:], float, int, int, bool)", args, kw);
                });
            }


static PyMethodDef Methods[] = {
    {
    "new_P",
    (PyCFunction)__pythran_wrapall_new_P,
    METH_VARARGS | METH_KEYWORDS,
    "Modifies `P` in-place.\n""\n""    Supported prototypes:\n""\n""    - new_P(float[:,:], float[:,:], float[:,:])"},{
    "apply_reflection",
    (PyCFunction)__pythran_wrapall_apply_reflection,
    METH_VARARGS | METH_KEYWORDS,
    "Modifies `P` in-place.\n""\n""    Supported prototypes:\n""\n""    - apply_reflection(float[:,:], int[:], int[:], float[:], int)"},{
    "apply_output",
    (PyCFunction)__pythran_wrapall_apply_output,
    METH_VARARGS | METH_KEYWORDS,
    "Modifies `P_in_out` in-place.\n""\n""    Supported prototypes:\n""\n""    - apply_output(float[:,:], float[:,:], int, int)"},{
    "apply_input",
    (PyCFunction)__pythran_wrapall_apply_input,
    METH_VARARGS | METH_KEYWORDS,
    "Modifies `P` in-place.\n""\n""    Supported prototypes:\n""\n""    - apply_input(float[:,:], float[:,:], int, int)"},{
    "min_clamp",
    (PyCFunction)__pythran_wrapall_min_clamp,
    METH_VARARGS | METH_KEYWORDS,
    "Modifies `arr` in-place.\n""\n""    Supported prototypes:\n""\n""    - min_clamp(float[:,:], float)"},{
    "shift_to_propagation_direction_to_from",
    (PyCFunction)__pythran_wrapall_shift_to_propagation_direction_to_from,
    METH_VARARGS | METH_KEYWORDS,
    "Modifies `P_hat_foreward` in-place.\n""\n""    Supported prototypes:\n""\n""    - shift_to_propagation_direction_to_from(float[:,:], float[:,:], int)"},{
    "shift_against_propagation_direction_to_from",
    (PyCFunction)__pythran_wrapall_shift_against_propagation_direction_to_from,
    METH_VARARGS | METH_KEYWORDS,
    "Modifies `P_hat_backward` in-place.\n""\n""    Supported prototypes:\n""\n""    - shift_against_propagation_direction_to_from(float[:,:], float[:,:], int)"},{
    "dNdT",
    (PyCFunction)__pythran_wrapall_dNdT,
    METH_VARARGS | METH_KEYWORDS,
    "Modifies `N2` in-place.\n""\n""    Supported prototypes:\n""\n""    - dNdT(float[:,:], float[:,:], float[:,:], float[:,:], float, float, int, int)"},{
    "dPdZ",
    (PyCFunction)__pythran_wrapall_dPdZ,
    METH_VARARGS | METH_KEYWORDS,
    "Modifies `P_hat` in-place.\n""\n""    Supported prototypes:\n""\n""    - dPdZ(float[:,:], float[:,:], float[:,:], float[:,:], float[:,:], float, int, int, bool)"},
    {NULL, NULL, 0, NULL}
};


static struct PyModuleDef moduledef = {
  PyModuleDef_HEAD_INIT,
  "fiber_simulation_pythran_bindings",            /* m_name */
  "\n""These are a handful of pure python functions that can be sped up with numba or\n""pythran.\n""\n""These bottleneck functions are called many times in an inner loop for the\n""dynamic simulation, and therefore are good candidates for speed optimization.\n""All of these functions have side effects such that the first argument passed to\n""them is modified in-place.\n""\n""To use pythran, execute this from the command line:\n""    $ pythran -o fiber_simulation_pythran_bindings.so inner_loop_functions.py\n""where the shared-library filename extension is normally .so on linux and .pyd\n""on windows. Pythran translates the python code to C++11 and compiles it to a\n""binary extension module. It takes about 80 seconds to compile with g++ 8.2.1 on\n""a first-generation core-i7 CPU.\n""\n""",         /* m_doc */
  -1,                  /* m_size */
  Methods,             /* m_methods */
  NULL,                /* m_reload */
  NULL,                /* m_traverse */
  NULL,                /* m_clear */
  NULL,                /* m_free */
};
PyMODINIT_FUNC
PyInit_fiber_simulation_pythran_bindings(void)
#ifndef _WIN32
__attribute__ ((visibility("default")))
#if defined(GNUC) && !defined(__clang__)
__attribute__ ((externally_visible))
#endif
#endif
;
PyMODINIT_FUNC
PyInit_fiber_simulation_pythran_bindings(void) {
    import_array();

    PyObject* theModule = PyModule_Create(&moduledef);
    if(! theModule)
        return theModule;

                #ifdef Py_GIL_DISABLED
                    PyUnstable_Module_SetGIL(theModule, Py_MOD_GIL_NOT_USED);
                #endif
    PyObject * theDoc = Py_BuildValue("(ss)",
                                      "0.18.0",
                                      "c3f35e10f60f70becb27a819e6539796faed975a3c006d0da9d3ebd041351252");
    if(! theDoc)
        return theModule;
    PyModule_AddObject(theModule,
                       "__pythran__",
                       theDoc);


    return theModule;
}

#endif