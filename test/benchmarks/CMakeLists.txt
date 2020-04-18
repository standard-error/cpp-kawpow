# kawpow: C/C++ implementation of Kawpow, the Ravencoin Proof of Work algorithm.
# Copyright 2018-2019 Pawel Bylica.
# Licensed under the Apache License, Version 2.0.

hunter_add_package(benchmark)
find_package(benchmark CONFIG REQUIRED)

add_executable(kawpow-bench
    kawpow_benchmarks.cpp
    keccak_benchmarks.cpp
    keccak_utils.hpp
    keccak_utils.cpp
    managed_benchmarks.cpp
    progpow_benchmarks.cpp
    threadsync_benchmarks.cpp
    threadsync_utils.hpp
    threadsync_utils.cpp)
target_link_libraries(kawpow-bench PRIVATE kawpow benchmark::benchmark)
target_include_directories(kawpow-bench PRIVATE ${KAWPOW_PRIVATE_INCLUDE_DIR})
set_target_properties(kawpow-bench PROPERTIES RUNTIME_OUTPUT_DIRECTORY ..)
