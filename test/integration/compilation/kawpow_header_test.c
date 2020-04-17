/* kawpow: C/C++ implementation of Kawpow, the Ethereum Proof of Work algorithm.
 * Copyright 2018-2019 Pawel Bylica.
 * Licensed under the Apache License, Version 2.0.
 */

#include <kawpow/kawpow.h>

int test()
{
    int sum = 0;
    sum += ETHASH_EPOCH_LENGTH;
    sum += ETHASH_LIGHT_CACHE_ITEM_SIZE;
    sum += ETHASH_FULL_DATASET_ITEM_SIZE;
    return sum;
}
