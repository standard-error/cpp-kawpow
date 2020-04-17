// kawpow: C/C++ implementation of Kawpow, the Ethereum Proof of Work algorithm.
// Copyright 2019 Pawel Bylica.
// Licensed under the Apache License, Version 2.0.

#include <kawpow/version.h>

#include <gtest/gtest.h>

TEST(libkawpow, version)
{
    static_assert(kawpow::version[0] != 0, "incorrect kawpow::version");

    EXPECT_EQ(ETHASH_VERSION, TEST_PROJECT_VERSION);
    EXPECT_EQ(kawpow::version, TEST_PROJECT_VERSION);
}
