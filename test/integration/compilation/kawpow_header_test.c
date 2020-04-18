/* kawpow: C/C++ implementation of Kawpow, the Ravencoin Proof of Work algorithm.
 * Copyright 2018-2019 Pawel Bylica.
 * Licensed under the Apache License, Version 2.0.
 */

#include <kawpow/kawpow.h>

int test()
{
    int sum = 0;
    sum += KAWPOW_EPOCH_LENGTH;
    sum += KAWPOW_LIGHT_CACHE_ITEM_SIZE;
    sum += KAWPOW_FULL_DATASET_ITEM_SIZE;
    return sum;
}
