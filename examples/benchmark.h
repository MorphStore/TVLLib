#ifndef SIERRA_BENCHMARK_H
#define SIERRA_BENCHMARK_H

#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
//#include <cstdint>
#include <chrono>
#include <ctime>


inline std::chrono::time_point<std::chrono::system_clock> readtime(){
  return std::chrono::system_clock::now();
}

void benchmark(std::function<void()> f, size_t num_iters) {
    
    //std::vector<double> times(num_iters); //for clock ticks
    std::vector<int> times(num_iters);
    for (auto& time : times) {
        //auto start = rdtsc();
        auto start = readtime();
        f();
        //auto end = rdtsc();
        auto end = readtime();
        //time = (end-start) / (1024.*1024.);
        time = std::chrono::duration_cast<std::chrono::microseconds>(end-start).count();
    }

    // compute median
    std::sort(times.begin(), times.end());
    for (size_t i=0;i<num_iters;i++){
      std::cout << "iteration " << i << ": " << times[i] << std::endl;
    }
    std::cout << "median of " << num_iters << " runs: " << times[num_iters/2] << "µs" << std::endl;
}



#endif