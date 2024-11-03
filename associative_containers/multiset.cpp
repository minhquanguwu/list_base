#include <set> // for std::multiset
#include <string>
#include "../class.h"

// Function to get the size of a multiset
template <typename T>
int getSize(const std::multiset<T>& ms) {
    return ms.size();
}

// Function to get the minimum (first) element of a multiset (if it exists)
template <typename T>
T getFirst(const std::multiset<T>& ms) {
    return ms.empty() ? T() : *ms.begin();
}

// Basic argument types with std::multiset
int intArgument(std::multiset<int> ms) {
    return getSize(ms);
}

int charArgument(std::multiset<char> ms) {
    return getSize(ms);
}

int stringArgument(std::multiset<std::string> ms) {
    return getSize(ms);
}

int structureArgument(std::multiset<Class> ms) {
    return getSize(ms);
}

// Nested multiset (multiset of multisets is not directly supported in STL)
int classTemplateArgument(std::multiset<Array<int>> ms) {
    return getSize(ms);
}

// Multisets with pointers
int oneLevelBasicArgument(std::multiset<char*> ms) {
    return getSize(ms);
}

int twoLevelBasicArgument(std::multiset<char**> ms) {
    return getSize(ms);
}

int oneLevelStructureArgument(std::multiset<Class*> ms) {
    return getSize(ms);
}

int twoLevelStructureArgument(std::multiset<Class**> ms) {
    return getSize(ms);
}

// Single-level pointer to multiset
int oneLevelBasic(std::multiset<char>* ms) {
    return getSize(*ms);
}

// Double-level pointer to multiset
int twoLevelBasic(std::multiset<char>** ms) {
    return getSize(**ms);
}

// One-dimensional array of multiset
int oneDimBasic(std::multiset<char> ms[]) {
    return getSize(ms[0]);
}

// Multiset containing user-defined Class pointers
int oneLevelStructure(std::multiset<Class>* ms) {
    return getSize(*ms);
}

int twoLevelStructure(std::multiset<Class>** ms) {
    return getSize(**ms);
}

int oneDimStructure(std::multiset<Class> ms[]) {
    return getSize(ms[0]);
}

// Multiset containing int pointers
int twoLevelOneLevel(std::multiset<int*>** ms) {
    return getSize(**ms);
}

// Two-dimensional array with multiset containing int pointers
int twoDimOneLevel(std::multiset<int*> ms[4]) {
    return getSize(ms[0]);
}
