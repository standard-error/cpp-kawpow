# kawpow: C/C++ implementation of Kawpow, the Ravencoin Proof of Work algorithm.
# Copyright 2018-2019 Pawel Bylica.
# Licensed under the Apache License, Version 2.0.

file(GLOB c_sources ${PROJECT_SOURCE_DIR}/lib/kawpow/*.c)

foreach(c_std 0 90 99 11)
    set(target test-compile-c${c_std})
    add_library(${target} STATIC kawpow_header_test.c ${c_sources})
    target_link_libraries(${target} PRIVATE kawpow)
    if(c_std)
        set_target_properties(${target} PROPERTIES C_STANDARD ${c_std})
    endif()
    set_target_properties(${target} PROPERTIES C_EXTENSIONS OFF)
endforeach()
