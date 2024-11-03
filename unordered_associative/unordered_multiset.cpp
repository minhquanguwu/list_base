#include <unordered_set>
#include <string>
#include "../class.h"


// Template function to get the size of an unordered_multiset
template <typename T>
int getSize(const std::unordered_multiset<T>& ums) {
    return ums.size();
}

// Template function to count occurrences of an element in an unordered_multiset
template <typename T>
int countElement(const std::unordered_multiset<T>& ums, const T& element) {
    return ums.count(element);
}

// Template function to check if an element exists in an unordered_multiset
template <typename T>
bool hasElement(const std::unordered_multiset<T>& ums, const T& element) {
    return ums.find(element) != ums.end();
}

// Non-template function implementations for std::unordered_multiset

int intArgument(std::unordered_multiset<int> ums) {
    return getSize(ums);
}

int charArgument(std::unordered_multiset<char> ums) {
    return getSize(ums);
}

int stringArgument(std::unordered_multiset<std::string> ums) {
    return getSize(ums);
}

int structureArgument(std::unordered_multiset<Class> ums) {
    return getSize(ums);
}

// Functions for unordered_multiset with pointers
int oneLevelBasicArgument(std::unordered_multiset<char*> ums) {
    return getSize(ums);
}

int twoLevelBasicArgument(std::unordered_multiset<char**> ums) {
    return getSize(ums);
}

int oneLevelStructureArgument(std::unordered_multiset<Class*> ums) {
    return getSize(ums);
}

int twoLevelStructureArgument(std::unordered_multiset<Class**> ums) {
    return getSize(ums);
}

// Single-level pointer to unordered_multiset
int oneLevelBasic(std::unordered_multiset<char>* ums) {
    return getSize(*ums);
}

// Double-level pointer to unordered_multiset
int twoLevelBasic(std::unordered_multiset<char>** ums) {
    return getSize(**ums);
}

// One-dimensional array of unordered_multiset
int oneDimBasic(std::unordered_multiset<char> ums[]) {
    return getSize(ums[0]);
}

// Functions for unordered_multiset with user-defined Class pointers
int oneLevelStructure(std::unordered_multiset<Class>* ums) {
    return getSize(*ums);
}

int twoLevelStructure(std::unordered_multiset<Class>** ums) {
    return getSize(**ums);
}

int oneDimStructure(std::unordered_multiset<Class> ums[]) {
    return getSize(ums[0]);
}
