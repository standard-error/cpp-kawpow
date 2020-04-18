// kawpow: C/C++ implementation of Kawpow, the Ravencoin Proof of Work algorithm.
// Copyright 2018-2019 Pawel Bylica.
// Licensed under the Apache License, Version 2.0.

#include <kawpow/kawpow.hpp>
#include <kawpow/version.h>

int main()
{
    static_assert(sizeof(kawpow::version) >= 6, "incorrect kawpow::version");

    uint8_t seed_bytes[32] = {0};
    kawpow::hash256 seed = kawpow::hash256_from_bytes(seed_bytes);
    return kawpow::find_epoch_number(seed);
}
