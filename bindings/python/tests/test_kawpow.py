# kawpow: C/C++ implementation of Kawpow, the Ravencoin Proof of Work algorithm.
# Copyright 2019 Pawel Bylica.
# Licensed under the Apache License, Version 2.0.

import unittest

import kawpow


class TestKawpow(unittest.TestCase):
    epoch_number = 0
    nonce = 0x4242424242424242
    header_hash = bytes.fromhex(
        '2a8de2adf89af77358250bf908bf04ba94a6e8c3ba87775564a41d269a05e4ce')
    mix_hash = bytes.fromhex(
        '89b6b75f64a89b05393536d14ccea1f8b40d8dffab98d5a812e2f9210d5118d3')
    final_hash = bytes.fromhex(
        '89b612bfaf68f940af983f44fc22df6dfc2836a8f6d5f9da4ebe483d868761c5')

    def test_keccak(self):
        h256 = ('c5d2460186f7233c927e7db2dcc703c0'
                'e500b653ca82273b7bfad8045d85a470')
        h512 = ('0eab42de4c3ceb9235fc91acffe746b2'
                '9c29a8c366b7c60e4e67c466f36a4304'
                'c00fa9caf9d87976ba469bcbe06713b4'
                '35f091ef2769fb160cdab33d3670680e')

        self.assertEqual(kawpow.keccak_256(b'').hex(), h256)
        self.assertEqual(kawpow.keccak_512(b'').hex(), h512)

    def test_hash(self):
        f, m = kawpow.hash(self.epoch_number, self.header_hash, self.nonce)
        self.assertEqual(m, self.mix_hash)
        self.assertEqual(f, self.final_hash)

    def test_verify(self):
        t = kawpow.verify(self.epoch_number, self.header_hash, self.mix_hash, self.nonce,
                          self.final_hash)
        self.assertTrue(t)
        self.assertEqual(type(t), bool)


if __name__ == '__main__':
    unittest.main()
