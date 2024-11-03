#include <unordered_map>
#include <string>
#include <vector>
#include "../class.h"


// Template function to get the size of an unordered_multimap
template <typename Key, typename T>
int getSize(const std::unordered_multimap<Key, T>& umm) {
    return umm.size();
}

// Template function to check if a key exists in an unordered_multimap
template <typename Key, typename T>
bool hasKey(const std::unordered_multimap<Key, T>& umm, const Key& key) {
    return umm.find(key) != umm.end();
}

// Template function to get all values by key from an unordered_multimap
template <typename Key, typename T>
std::vector<T> getValues(const std::unordered_multimap<Key, T>& umm, const Key& key) {
    std::vector<T> values;
    auto range = umm.equal_range(key);
    for (auto it = range.first; it != range.second; ++it) {
        values.push_back(it->second);
    }
    return values;
}

// Non-template function implementations for std::unordered_multimap

int intArgument(std::unordered_multimap<int, int> umm) {
    return getSize(umm);
}

int charArgument(std::unordered_multimap<int, char> umm) {
    return getSize(umm);
}

int stringArgument(std::unordered_multimap<int, std::string> umm) {
    return getSize(umm);
}

int structureArgument(std::unordered_multimap<int, Class> umm) {
    return getSize(umm);
}

// Functions for unordered_multimap with pointers
int oneLevelBasicArgument(std::unordered_multimap<int, char*> umm) {
    return getSize(umm);
}

int twoLevelBasicArgument(std::unordered_multimap<int, char**> umm) {
    return getSize(umm);
}

int oneLevelStructureArgument(std::unordered_multimap<int, Class*> umm) {
    return getSize(umm);
}

int twoLevelStructureArgument(std::unordered_multimap<int, Class**> umm) {
    return getSize(umm);
}

// Single-level pointer to unordered_multimap
int oneLevelBasic(std::unordered_multimap<int, char>* umm) {
    return getSize(*umm);
}

// Double-level pointer to unordered_multimap
int twoLevelBasic(std::unordered_multimap<int, char>** umm) {
    return getSize(**umm);
}

// One-dimensional array of unordered_multimap
int oneDimBasic(std::unordered_multimap<int, char> umm[]) {
    return getSize(umm[0]);
}

// Functions for unordered_multimap with user-defined Class pointers
int oneLevelStructure(std::unordered_multimap<int, Class>* umm) {
    return getSize(*umm);
}

int twoLevelStructure(std::unordered_multimap<int, Class>** umm) {
    return getSize(**umm);
}

int oneDimStructure(std::unordered_multimap<int, Class> umm[]) {
    return getSize(umm[0]);
}
