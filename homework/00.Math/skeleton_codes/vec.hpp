#ifndef KMUCS_GRAPHICS_VEC_HPP
#define KMUCS_GRAPHICS_VEC_HPP

#include <iostream>
#include <algorithm>

namespace kmuvcl {
  namespace math {

    template <unsigned int N, typename T>
    class vec
    {
    public:
      vec()
      {
        set_to_zero();
      }

      vec(const T elem)
      {
        // TODO: Fill up this function properly 
      }

      vec(const T s, const T t) : vec()
      {
        // TODO: Fill up this function properly 
      }

      vec(const T s, const T t, const T u) : vec()
      {
        // TODO: Fill up this function properly 
      }

      vec(const T s, const T t, const T u, const T v) : vec()
      {
        // TODO: Fill up this function properly 
      }
      
      vec(const vec<N, T>& other)
      {
        // TODO: Fill up this function properly 
      }

      vec& operator= (const vec<N, T>& other)
      {
        // TODO: Fill up this function properly 
        return  *this;
      }

      T& operator()(unsigned int i)
      {
	      // TODO: Fill up this function properly 
        return  val[0];
      }

      const T& operator()(unsigned int i) const
      {
	      // TODO: Fill up this function properly 
        return  val[0];
      }

      // type casting operators
      operator const T* () const
      {
        return  val;
      }

      operator T* ()
      {
        return  val;
      }

      vec& operator+=(const vec<N, T>& other)
      {
        // TODO: Fill up this function properly 
        return *this;
      }

      vec& operator-=(const vec<N, T>& other)
      {
        // TODO: Fill up this function properly 
        return *this;
      }

      void set_to_zero()
      {
        // TODO: Fill up this function properly 
      }

    protected:
      T val[N];
    };

    // typedef
    typedef vec<2, float>   vec2f;
    typedef vec<2, double>  vec2d;

    typedef vec<3, float>   vec3f;
    typedef vec<3, double>  vec3d;
    
    typedef vec<4, float>   vec4f;
    typedef vec<4, double>  vec4d;


  } // namespace math
} // namespace kmuvcl


#include "operator.hpp"

#endif // KMUCS_GRAPHICS_VEC_HPP
