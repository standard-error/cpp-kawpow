# Copyright 2018-2019 Pawel Bylica.
# Licensed under the Apache License, Version 2.0.

cmake_minimum_required(VERSION 3.5)

project(kawpow-cmake-config-test)

find_package(kawpow CONFIG REQUIRED)

add_executable(kawpow-cmake-config-test cmake_config_test.cpp)
target_link_libraries(kawpow-cmake-config-test kawpow::kawpow)
set_target_properties(kawpow-cmake-config-test PROPERTIES CXX_STANDARD 11 CXX_EXTENSIONS OFF)
