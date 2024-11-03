#include <unordered_map>
#include <string>
#include "../class.h"


// Template function to get the size of an unordered_map
template <typename Key, typename T>
int getSize(const std::unordered_map<Key, T>& um) {
    return um.size();
}

// Template function to check if a key exists in an unordered_map
template <typename Key, typename T>
bool hasKey(const std::unordered_map<Key, T>& um, const Key& key) {
    return um.find(key) != um.end();
}

// Template function to get a value by key from an unordered_map
template <typename Key, typename T>
T getValue(const std::unordered_map<Key, T>& um, const Key& key) {
    auto it = um.find(key);
    return (it != um.end()) ? it->second : T(); // Return default if key not found
}

// Non-template function implementations for std::unordered_map

int intArgument(std::unordered_map<int, int> um) {
    return getSize(um);
}

int charArgument(std::unordered_map<int, char> um) {
    return getSize(um);
}

int stringArgument(std::unordered_map<int, std::string> um) {
    return getSize(um);
}

int structureArgument(std::unordered_map<int, Class> um) {
    return getSize(um);
}

int oneLevelBasicArgument(std::unordered_map<int, char*> um) {
    return getSize(um);
}

int twoLevelBasicArgument(std::unordered_map<int, char**> um) {
    return getSize(um);
}

int oneLevelStructureArgument(std::unordered_map<int, Class*> um) {
    return getSize(um);
}

int twoLevelStructureArgument(std::unordered_map<int, Class**> um) {
    return getSize(um);
}

int oneLevelBasic(std::unordered_map<int, char>* um) {
    return getSize(*um);
}

int twoLevelBasic(std::unordered_map<int, char>** um) {
    return getSize(**um);
}

int oneDimBasic(std::unordered_map<int, char> um[]) {
    return getSize(um[0]);
}

int oneLevelStructure(std::unordered_map<int, Class>* um) {
    return getSize(*um);
}

int twoLevelStructure(std::unordered_map<int, Class>** um) {
    return getSize(**um);
}

int oneDimStructure(std::unordered_map<int, Class> um[]) {
    return getSize(um[0]);
}
