// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2018-2019, The TurtleCoin Developers
// Copyright (c) 2019, The BytechCoin Developers
//
// Please see the included LICENSE file for more information.

#include <stddef.h>
#include <stdint.h>

#include "groestl.h"

void hash_extra_groestl(const void *data, size_t length, char *hash)
{
    groestl(data, length * 8, (uint8_t *) hash);
}
