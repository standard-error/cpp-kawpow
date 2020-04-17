/* kawpow: C/C++ implementation of Kawpow, the Ethereum Proof of Work algorithm.
 * Copyright 2019 Pawel Bylica.
 * Licensed under the Apache License, Version 2.0.
 */

#pragma once

/** The kawpow library version. */
#define ETHASH_VERSION "0.5.1-alpha.1"

#ifdef __cplusplus
namespace kawpow
{
/// The kawpow library version.
constexpr auto version = ETHASH_VERSION;

}  // namespace kawpow
#endif
