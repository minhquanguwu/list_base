#include <unordered_set>
#include <string>
#include "../class.h"

// Template function to get the size of an unordered_set
template <typename T>
int getSize(const std::unordered_set<T>& us) {
    return us.size();
}

// Template function to check if an element exists in an unordered_set
template <typename T>
bool hasElement(const std::unordered_set<T>& us, const T& element) {
    return us.find(element) != us.end();
}

// Non-template function implementations for std::unordered_set

int intArgument(std::unordered_set<int> us) {
    return getSize(us);
}

int charArgument(std::unordered_set<char> us) {
    return getSize(us);
}

int stringArgument(std::unordered_set<std::string> us) {
    return getSize(us);
}

int structureArgument(std::unordered_set<Class> us) {
    return getSize(us);
}

// Functions for unordered_set with pointers
int oneLevelBasicArgument(std::unordered_set<char*> us) {
    return getSize(us);
}

int twoLevelBasicArgument(std::unordered_set<char**> us) {
    return getSize(us);
}

int oneLevelStructureArgument(std::unordered_set<Class*> us) {
    return getSize(us);
}

int twoLevelStructureArgument(std::unordered_set<Class**> us) {
    return getSize(us);
}

// Single-level pointer to unordered_set
int oneLevelBasic(std::unordered_set<char>* us) {
    return getSize(*us);
}

// Double-level pointer to unordered_set
int twoLevelBasic(std::unordered_set<char>** us) {
    return getSize(**us);
}

// One-dimensional array of unordered_set
int oneDimBasic(std::unordered_set<char> us[]) {
    return getSize(us[0]);
}

// Functions for unordered_set with user-defined Class pointers
int oneLevelStructure(std::unordered_set<Class>* us) {
    return getSize(*us);
}

int twoLevelStructure(std::unordered_set<Class>** us) {
    return getSize(**us);
}

int oneDimStructure(std::unordered_set<Class> us[]) {
    return getSize(us[0]);
}
