// Kawpow: C/C++ implementation of Kawpow, the Ethereum Proof of Work algorithm.
// Copyright 2018-2019 Pawel Bylica.
// Licensed under the Apache License, Version 2.0.

#include "../unittests/helpers.hpp"

#include <kawpow/progpow.hpp>

#include <benchmark/benchmark.h>

static void progpow_hash(benchmark::State& state)
{
    // Get block number in millions.
    int block_number = static_cast<int>(state.range(0)) * 1000000;
    uint64_t nonce = 1;

    const auto& ctx = kawpow::get_global_epoch_context(kawpow::get_epoch_number(block_number));

    for (auto _ : state)
        progpow::hash(ctx, block_number++, {}, nonce++);
}
BENCHMARK(progpow_hash)->Unit(benchmark::kMicrosecond)->Arg(0)->Arg(10);
