#include <map>
#include <string>
#include "../class.h"


// Template function to get the size of a map
template <typename Key, typename T>
int getSize(const std::map<Key, T>& m) {
    return m.size();
}

// Template function to check if a key exists in a map
template <typename Key, typename T>
bool hasKey(const std::map<Key, T>& m, const Key& key) {
    return m.find(key) != m.end();
}

// Template function to get a value by key from a map
template <typename Key, typename T>
T getValue(const std::map<Key, T>& m, const Key& key) {
    auto it = m.find(key);
    return (it != m.end()) ? it->second : T(); // Return default if key not found
}

// Non-template function implementations for std::map
int intArgument(std::map<int, int> m) {
    return getSize(m);
}

int charArgument(std::map<int, char> m) {
    return getSize(m);
}

int stringArgument(std::map<int, std::string> m) {
    return getSize(m);
}

int structureArgument(std::map<int, Class> m) {
    return getSize(m);
}

int oneLevelBasicArgument(std::map<int, char*> m) {
    return getSize(m);
}

int twoLevelBasicArgument(std::map<int, char**> m) {
    return getSize(m);
}

int oneLevelStructureArgument(std::map<int, Class*> m) {
    return getSize(m);
}

int twoLevelStructureArgument(std::map<int, Class**> m) {
    return getSize(m);
}

int oneLevelBasic(std::map<int, char>* m) {
    return getSize(*m);
}

int twoLevelBasic(std::map<int, char>** m) {
    return getSize(**m);
}

int oneDimBasic(std::map<int, char> m[]) {
    return getSize(m[0]);
}

int oneLevelStructure(std::map<int, Class>* m) {
    return getSize(*m);
}

int twoLevelStructure(std::map<int, Class>** m) {
    return getSize(**m);
}

int oneDimStructure(std::map<int, Class> m[]) {
    return getSize(m[0]);
}
