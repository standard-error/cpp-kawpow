#!/usr/bin/env python3

import argparse
import kawpow

parser = argparse.ArgumentParser(description='KAWPOW hash utility')
parser.add_argument('block_number',type=int,help="Block number")
parser.add_argument('header_hash',type=str,help="Block header hash (sha256d)")
parser.add_argument('nonce',help="Nonce")
parser.add_argument('--expected_hash',type=str,default="",help="Expected final hash")
parser.add_argument('--epoch_length',type=int,default=7500,help="KAWPOW epoch length (default: 7500)")
args=parser.parse_args()

epoch = int(args.block_number / args.epoch_length)
nonce = int(args.nonce,0)

print(f"epoch: {epoch}")
print(f"header_hash: {args.header_hash}")
print(f"nonce: {nonce}")

f,m = kawpow.hash(epoch,bytes.fromhex(args.header_hash),nonce)

print(f"mix_hash: {m.hex()}")
print(f"final_hash: {f.hex()}")

if args.expected_hash != "":
    print(f"expected final_hash: {args.expected_hash}")
    if f != bytes.fromhex(args.expected_hash):
        print("error: final hash does not equal expected hash!")
    else:
        print("OK")
