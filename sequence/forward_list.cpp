#include <forward_list> // for std::forward_list
#include <string>
#include "../class.h"


// Helper function to calculate the size of a forward_list
template <typename T>
int getSize(const std::forward_list<T>& fl) {
    return std::distance(fl.begin(), fl.end());
}

// Basic argument types with std::forward_list
int intArgument(std::forward_list<int> fl) {
    return getSize(fl);
}

int charArgument(std::forward_list<char> fl) {
    return getSize(fl);
}

int stringArgument(std::forward_list<std::string> fl) {
    return getSize(fl);
}

int structureArgument(std::forward_list<Class> fl) {
    return getSize(fl);
}

// Nested forward_list
int stltypeArgument(std::forward_list<std::forward_list<char>> fl) {
    return getSize(fl);
}

int classTemplateArgument(std::forward_list<Array<int>> fl) {
    return getSize(fl);
}

// Pointers within forward_list
int oneLevelBasicArgument(std::forward_list<char*> fl) {
    return getSize(fl);
}

int twoLevelBasicArgument(std::forward_list<char**> fl) {
    return getSize(fl);
}

int oneLevelStructureArgument(std::forward_list<Class*> fl) {
    return getSize(fl);
}

int twoLevelStructureArgument(std::forward_list<Class**> fl) {
    return getSize(fl);
}

// Single-level pointer to forward_list
int oneLevelBasic(std::forward_list<char>* fl) {
    return getSize(fl[0]);
}

// Double-level pointer to forward_list
int twoLevelBasic(std::forward_list<char>** fl) {
    return getSize(fl[0][0]);
}

// One-dimensional array of forward_list
int oneDimBasic(std::forward_list<char> fl[]) {
    return getSize(fl[0]);
}

// Two-dimensional array of forward_list (emulated with array of forward_lists)
int twoDimBasic(std::forward_list<std::forward_list<char>> fl[4]) {
    return getSize(fl[0]);
}

// Single-level pointer with user-defined Class in forward_list
int oneLevelStructure(std::forward_list<Class>* fl) {
    return getSize(fl[0]);
}

int twoLevelStructure(std::forward_list<Class>** fl) {
    return getSize(fl[0][0]);
}

int oneDimStructure(std::forward_list<Class> fl[]) {
    return getSize(fl[0]);
}

int twoDimStructure(std::forward_list<std::forward_list<Class>> fl[4]) {
    return getSize(fl[0]);
}

// Double-level pointer with forward_list containing int pointers
int twoLevelOneLevel(std::forward_list<int*>** fl) {
    return getSize(fl[0][0]);
}

// Two-dimensional array with forward_list containing int pointers
int twoDimOneLevel(std::forward_list<std::forward_list<int*>> fl[4]) {
    return getSize(fl[0]);
}
