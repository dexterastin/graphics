#ifndef KMUCS_GRAPHICS_VEC_HPP
#define KMUCS_GRAPHICS_VEC_HPP

#include <iostream>
#include <algorithm>

namespace kmuvcl {
    namespace math {

        template<unsigned int N, typename T>
        class vec {
        public:
            vec() {
                set_to_zero();
            }

            vec(const T elem) {
                std::fill(this->val, this->val + N, elem);
            }

            vec(const T s, const T t) : vec() {
                this->val[0] = s;
                this->val[1] = t;
            }

            vec(const T s, const T t, const T u) : vec(s, t) {
                this->val[2] = u;
            }

            vec(const T s, const T t, const T u, const T v) : vec(s, t, u) {
                this->val[3] = v;
            }

            vec(const vec<N, T> &other) {
                std::copy(other.val, other.val + N, this->val);
            }

            vec &operator=(const vec<N, T> &other) {
                for(int i = 0; i < N; i++) {
                    this->val[i] = other.val[i];
                }
                return *this;
            }

            T &operator()(unsigned int i) {
                return val[i];
            }

            const T &operator()(unsigned int i) const {
                return val[i];
            }

            // type casting operators
            operator const T *() const {
                return val;
            }

            operator T *() {
                return val;
            }

            vec &operator+=(const vec<N, T> &other) {
                for(unsigned int i = 0; i < N; i++) {
                    this->val[i] += other.val[i];
                }
                return *this;
            }

            vec &operator-=(const vec<N, T> &other) {
                for(unsigned int i = 0; i < N; i++) {
                    this->val[i] -= other.val[i];
                }
                return *this;
            }

            void set_to_zero() {
                std::fill(this->val, this->val + N, 0);
            }

        protected:
            T val[N];
        };

        // typedef
        typedef vec<2, float> vec2f;
        typedef vec<2, double> vec2d;

        typedef vec<3, float> vec3f;
        typedef vec<3, double> vec3d;

        typedef vec<4, float> vec4f;
        typedef vec<4, double> vec4d;


    } // namespace math
} // namespace kmuvcl


#include "operator.hpp"

#endif // KMUCS_GRAPHICS_VEC_HPP
