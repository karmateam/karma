// Copyright (c) 2014
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef _CONTROLS_H
#define _CONTROLS_H

#include <boost/assign/list_of.hpp> // for 'map_list_of()'

// Set to true if we are mining the genesis block
#define INIT_MODE 	false


/** Official genesis settings **/
static const uint256 hashGenesisBlockOfficial("0xdc935f33102a21435a19a8f2b2cc1d10ee439d130d697a9b166b3ea6f424640b");
static const uint32_t genesisNonceOfficial = 3954796;
static std::map<int, uint256> officialCheckpoints = 
        boost::assign::map_list_of
        (   0, hashGenesisBlockOfficial)
        ;



/** Test genesis settings **/
static const uint256 hashGenesisBlockTest("0xb78439d045d7112231cff35c8a6ad55c3a23e7d1bcff84a7195eec9b4c424660");
static const uint32_t genesisNonceTest = 387579580;
static std::map<int, uint256> testCheckpoints = 
        boost::assign::map_list_of
        (   0, hashGenesisBlockTest)
        ;


/* Hash Merkle Root */
static const uint256 hashMerkleRootOfficial("0xd4e9ef8707d3cf61aac80bf22b4de7b839b9ab635452a38063b264de02d63354");

#endif