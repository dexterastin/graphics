#ifndef KMUCS_GRAPHICS_TRANSFORM_HPP
#define KMUCS_GRAPHICS_TRANSFORM_HPP

#include <cmath>
#include "vec.hpp"
#include "mat.hpp"
#include "operator.hpp"

namespace kmuvcl
{
    namespace math
    {
#ifndef M_PI
        const float M_PI = 3.14159265358979323846f;
#endif

        template <typename T>
        mat<4, 4, T> translate(T dx, T dy, T dz)
        {
            mat<4, 4, T> translateMat;

            for(unsigned int i = 0; i < 4; i++)
                translateMat(i, i) = static_cast<T>(1);

            translateMat(0, 3) = dx;
            translateMat(1, 3) = dy;
            translateMat(2, 3) = dz;
            
            return translateMat;
        }

        template <typename T>
        mat<4, 4, T> rotate(T angle, T x, T y, T z)
        {
            mat<4, 4, T> rotateMat;
            
            T _radian = angle * M_PI / 180;
            double _sin = sin(_radian);
            double _cos = cos(_radian);

            T s = sqrt(x * x + y * y + z * z);
            x /= s;
            y /= s;
            z /= s;

            rotateMat(3, 3) = static_cast<T>(1);

            rotateMat(0, 0) = _cos + (x * x) * (1 - _cos);
            rotateMat(1, 1) = _cos + (y * y) * (1 - _cos);
            rotateMat(2, 2) = _cos + (z * z) * (1 - _cos);

            rotateMat(0, 1) = (x * y) * (1 - _cos) - z * _sin;
            rotateMat(1, 2) = (y * z) * (1 - _cos) - x * _sin;
            rotateMat(2, 0) = (z * x) * (1 - _cos) - y * _sin;

            rotateMat(0, 2) = (x * z) * (1 - _cos) + y * _sin;
            rotateMat(1, 0) = (y * x) * (1 - _cos) + z * _sin;
            rotateMat(2, 1) = (z * y) * (1 - _cos) + x * _sin;

            return rotateMat;
        }

        template<typename T>
        mat<4, 4, T> scale(T sx, T sy, T sz)
        {
            mat<4, 4, T> scaleMat;

            scaleMat(0, 0) = sx;
            scaleMat(1, 1) = sy;
            scaleMat(2, 2) = sz;
            scaleMat(3, 3) = static_cast<T>(1);

            return scaleMat;
        }

        template<typename T>
        mat<4, 4, T> lookAt(T eyeX, T eyeY, T eyeZ, T centerX, T centerY, T centerZ, T upX, T upY, T upZ)
        {
            mat<4, 4, T> viewMat;

           

            // TODO: Fill up this function properly 

            return viewMat;
        }

        template<typename T>
        mat<4, 4, T> ortho(T left, T right, T bottom, T top, T nearVal, T farVal)
        {
            mat<4, 4, T> orthoMat;
            
            // TODO: Fill up this function properly 

            return orthoMat;
        }

        template<typename T>
        mat<4, 4, T> frustum(T left, T right, T bottom, T top, T nearVal, T farVal)
        {
           mat<4, 4, T> frustumMat;

           // TODO: Fill up this function properly 

           return frustumMat;
        }

        template<typename T>
        mat<4, 4, T> perspective(T fovy, T aspect, T zNear, T zFar)
        {
          T  right = 0;
          T  top = 0;

          // TODO: Fill up this function properly 

          return frustum(-right, right, -top, top, zNear, zFar);
        }
    }
}
#endif
