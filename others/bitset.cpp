#include <bitset>
#include <string>
#include <iostream>

// Function to get the size of the bitset (returns fixed size)
int bitsetSize(const std::bitset<2>& bs) {
    return bs.size();
}

// Function to count the number of set bits (1s) in the bitset
int countSetBits(const std::bitset<8>& bs) {
    return bs.count();
}

// Function to check if all bits are set to 1
bool allBitsSet(const std::bitset<8>& bs) {
    return bs.all();
}

// Function to check if no bits are set (all bits are 0)
bool noBitsSet(const std::bitset<8>& bs) {
    return bs.none();
}

// Function to flip all bits in the bitset
std::bitset<8> flipAllBits(const std::bitset<8>& bs) {
    std::bitset<8> flipped = bs;
    flipped.flip();
    return flipped;
}

// Function to set a specific bit in the bitset
void setBit(std::bitset<8>& bs, std::size_t pos) {
    if (pos < bs.size()) {
        bs.set(pos);
    }
}

// Function to reset a specific bit in the bitset
void resetBit(std::bitset<8>& bs, std::size_t pos) {
    if (pos < bs.size()) {
        bs.reset(pos);
    }
}

// Function to flip a specific bit in the bitset
void flipBit(std::bitset<8>& bs, std::size_t pos) {
    if (pos < bs.size()) {
        bs.flip(pos);
    }
}

// Function to convert a bitset to a string
std::string bitsetToString(const std::bitset<8>& bs) {
    return bs.to_string();
}

// Function to initialize a bitset from a string
std::bitset<8> stringToBitset(const std::string& s) {
    return std::bitset<8>(s);
}

// // Example usage function to demonstrate operations on std::bitset
// void exampleBitsetUsage() {
//     std::bitset<8> bs("11001010");

//     std::cout << "Original bitset: " << bs << std::endl;
//     std::cout << "Size of bitset: " << bitsetSize(bs) << std::endl;
//     std::cout << "Number of set bits: " << countSetBits(bs) << std::endl;
//     std::cout << "Are all bits set? " << (allBitsSet(bs) ? "Yes" : "No") << std::endl;
//     std::cout << "Are no bits set? " << (noBitsSet(bs) ? "Yes" : "No") << std::endl;

//     std::cout << "Flipping all bits: " << flipAllBits(bs) << std::endl;

//     setBit(bs, 0);
//     std::cout << "Setting bit 0: " << bs << std::endl;

//     resetBit(bs, 1);
//     std::cout << "Resetting bit 1: " << bs << std::endl;

//     flipBit(bs, 2);
//     std::cout << "Flipping bit 2: " << bs << std::endl;

//     std::string bitString = bitsetToString(bs);
//     std::cout << "Bitset as string: " << bitString << std::endl;

//     std::bitset<8> newBitset = stringToBitset("10101010");
//     std::cout << "Initialized bitset from string: " << newBitset << std::endl;
// }

