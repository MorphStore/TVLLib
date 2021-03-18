#pragma once
#include "vector_types.h"

namespace vectorlib {

    template<typename T  , int ELE_PER_THREAD>
    __device__ void add_device(T *in, T *out) {

        int i = blockIdx.x * blockDim.x * ELE_PER_THREAD + threadIdx.x *ELE_PER_THREAD;

        for(int z=0;z<ELE_PER_THREAD;z++)
        {
            out[i+z] = out[i+z] + in[i+z];
        }

    }

    template<typename T  , int ELE_PER_THREAD>
    __global__ void add_kernel(T *in, T *out) {

        add_device<T,ELE_PER_THREAD>(in,out);

    }

    template<typename T>
    __global__ void addKernel_2432(T *in, T *out) {
        int i = blockIdx.x * blockDim.x + threadIdx.x;
        out[i] = out[i] + in[i];
    }

    template<typename T>
    __device__ void addKernel_2432_device(T *in, T *out) {
        int i = blockIdx.x * blockDim.x + threadIdx.x;
        out[i] = out[i] + in[i];
    }

    template<typename T>
    __device__ void device_sub_4608(T *in, T *out) {
        int i = blockIdx.x * blockDim.x + threadIdx.x;
        out[i] = in[i] - out[i];
    }
    template<typename T>
    __global__ void sub_4608(T *in, T *out) {
        device_sub_4608(in,out);

    }

    template<typename T>
    __device__ void device_min_4608(T *in, T *out) {
        int i = blockIdx.x * blockDim.x + threadIdx.x;
        if(in[i]<out[i])
        {
            out[i]=in[i];
        }
    }
    template<typename T>
    __global__ void min_4608(T *in, T *out) {
        device_min_4608(in,out);
    }


    template<typename T>
    __device__ void device_inv_4608( T *out) {
        int i = blockIdx.x * blockDim.x + threadIdx.x;
        out[ i] = ~out[ i];
    }
    template<typename T>
    __global__ void inv_4608( T *out) {
        device_inv_4608(out);
    }

    template<typename T>
    __device__ void device_mul_4608(T *in, T *out) {
        int i = blockIdx.x * blockDim.x + threadIdx.x;

            out[i]*=in[i];

    }
    template<typename T>
    __global__ void mul_4608(T *in, T *out) {
        device_mul_4608(in,out);
    }

    template<typename T>
    __device__ void device_div_4608(T *in, T *out) {
        int i = blockIdx.x * blockDim.x + threadIdx.x;

        out[i]=in[i] / out[i];

    }
    template<typename T>
    __global__ void div_4608(T *in, T *out) {
        device_div_4608(in,out);
    }

    template<typename T>
    __device__ void device_mod_4608(T *in, T *out) {
        int i = blockIdx.x * blockDim.x + threadIdx.x;

        out[i]=in[i] % out[i];

    }
    template<typename T>
    __global__ void mod_4608(T *in, T *out) {
        device_mod_4608(in,out);
    }
    template<typename T>
    __device__ void device_shift_left_4608(T *in, int dist) {
        int i = blockIdx.x * blockDim.x + threadIdx.x;

        in[i]=in[i] << dist;

    }
    template<typename T>
    __global__ void shift_left_4608(T *in, int dist) {
        device_shift_left_4608(in,dist);
    }
    template<typename T>
    __device__ void device_shift_left_ind_4608(T *in, T* distance) {
        int i = blockIdx.x * blockDim.x + threadIdx.x;

        in[i]=in[i] << distance[i];

    }
    template<typename T>
    __global__ void shift_left_ind_4608(T *in, T* distance) {
        device_shift_left_ind_4608(in,distance);
    }
    template<typename T>
    __device__ void device_shift_right_ind_4608(T *in, T* distance) {
        int i = blockIdx.x * blockDim.x + threadIdx.x;

        in[i]=in[i] >> distance[i];

    }
    template<typename T>
    __global__ void shift_right_ind_4608(T *in, T* distance) {
        device_shift_right_ind_4608(in,distance);
    }


    template<typename T>
    __device__ void device_shift_right_4608(T *in, int dist) {
        int i = blockIdx.x * blockDim.x + threadIdx.x;

        in[i]=in[i] >> dist;

    }
    template<typename T>
    __global__ void shift_right_4608(T *in, int dist) {
        device_shift_right_4608(in,dist);
    }


    template<typename T>
    __device__ void device_add_4608(T *in, T *out) {
        int i = blockIdx.x * blockDim.x + threadIdx.x;
        out[i] = out[i] + in[i];
    }



    //only invoke with 4608 threads exactly!
    template<typename T>
    __global__ void add_4608(T *in, T *out) {
        int i = blockIdx.x * blockDim.x + threadIdx.x;
        out[i] = out[i] + in[i];
    }

    //todo replace by faster implementation
    //this is a simple implementation with bad performance!
    template<typename T>
    __global__ void hadd_4608(T *in) {
        int i = blockIdx.x * blockDim.x + threadIdx.x;
        if(i==0)
            for(int k =1;k<4608;k++)
            {
                in[0]+=in[k];
            }

    }

}