#include <array> // for std::array
#include <string>
#include "../class.h"

// Basic argument types with std::array
int intArgument(std::array<int, 5> a) {
    return a.size();
}

int charArgument(std::array<char, 5> a) {
    return a.size();
}

int stringArgument(std::array<std::string, 5> a) {
    return a.size();
}

int structureArgument(std::array<Class, 5> a) {
    return a.size();
}

// Nested std::array
int stltypeArgument(std::array<std::array<char, 5>, 5> a) {
    return a.size();
}

int classTemplateArgument(std::array<Array<int>, 5> a) {
    return a.size();
}

// Pointers within std::array
int oneLevelBasicArgument(std::array<char*, 5> a) {
    return a.size();
}

int twoLevelBasicArgument(std::array<char**, 5> a) {
    return a.size();
}

int oneLevelStructureArgument(std::array<Class*, 5> a) {
    return a.size();
}

int twoLevelStructureArgument(std::array<Class**, 5> a) {
    return a.size();
}

// Single-level pointer to std::array
int oneLevelBasic(std::array<char, 5>* a) {
    return a[0].size();
}

// Double-level pointer to std::array
int twoLevelBasic(std::array<char, 5>** a) {
    return a[0][0].size();
}

// One-dimensional array of std::array
int oneDimBasic(std::array<char, 5> a[]) {
    return a[0].size();
}

// // Two-dimensional array of std::array
// int twoDimBasic(std::array<std::array<char, 5>, 4> a) {
//     return a[0][0].size();
// }

// Single-level pointer with user-defined Class in std::array
int oneLevelStructure(std::array<Class, 5>* a) {
    return a[0].size();
}

int twoLevelStructure(std::array<Class, 5>** a) {
    return a[0][0].size();
}

int oneDimStructure(std::array<Class, 5> a[]) {
    return a[0].size();
}

// int twoDimStructure(std::array<std::array<Class, 5>, 4> a) {
//     return a[0][0].size();
// }

// Double-level pointer with std::array containing int pointers
int twoLevelOneLevel(std::array<int*, 5>** a) {
    return a[0][0].size();
}

// // Two-dimensional array with std::array containing int pointers
// int twoDimOneLevel(std::array<std::array<int*, 5>, 4> a) {
//     return a[0][0].size();
// }
