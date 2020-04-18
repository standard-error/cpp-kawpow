# kawpow: C/C++ implementation of Kawpow, the Ravencoin Proof of Work algorithm.
# Copyright 2018-2019 Pawel Bylica.
# Licensed under the Apache License, Version 2.0.

find_package(Threads)

add_executable(kawpow-fakeminer fakeminer.cpp)
target_link_libraries(kawpow-fakeminer PRIVATE kawpow Threads::Threads)
set_target_properties(kawpow-fakeminer PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
