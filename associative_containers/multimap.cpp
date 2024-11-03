#include <map>
#include <string>
#include "../class.h"


// Template function to get the size of a multimap
template <typename Key, typename T>
int getSize(const std::multimap<Key, T>& mm) {
    return mm.size();
}

// Template function to check if a key exists in a multimap
template <typename Key, typename T>
bool hasKey(const std::multimap<Key, T>& mm, const Key& key) {
    return mm.find(key) != mm.end();
}

// Non-template function implementations for std::multimap
int intArgument(std::multimap<int, int> mm) {
    return getSize(mm);
}

int charArgument(std::multimap<int, char> mm) {
    return getSize(mm);
}

int stringArgument(std::multimap<int, std::string> mm) {
    return getSize(mm);
}

int structureArgument(std::multimap<int, Class> mm) {
    return getSize(mm);
}

int twoLevelOneLevel(std::multimap<int, int*>** mm) {
    return getSize(**mm);
}

int twoDimOneLevel(std::multimap<int, int*> mm[4]) {
    return getSize(mm[0]);
}

int oneLevelBasicArgument(std::multimap<int, char*> mm) {
    return getSize(mm);
}

int twoLevelBasicArgument(std::multimap<int, char**> mm) {
    return getSize(mm);
}

int oneLevelStructureArgument(std::multimap<int, Class*> mm) {
    return getSize(mm);
}

int twoLevelStructureArgument(std::multimap<int, Class**> mm) {
    return getSize(mm);
}
