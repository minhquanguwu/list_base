#include <valarray>
#include <string>
#include "../class.h"


// Function to get the size of a valarray of integers
int intArgument(std::valarray<int> v) {
    return v.size();
}

// Function to get the size of a valarray of characters
int charArgument(std::valarray<char> v) {
    return v.size();
}

// Function to get the size of a valarray of strings (requires a vector since valarray doesn't support non-arithmetic types like strings)
int stringArgument(std::valarray<std::string> v) {
    return v.size();
}

// Function to get the size of a valarray of custom class objects
int structureArgument(std::valarray<Class> v) {
    return v.size();
}

// Functions to work with nested valarrays
// std::valarray does not support nesting in the same way as vectors,
// so here we demonstrate element-wise operations instead.

int classTemplateArgument(std::valarray<Array<int>> v) {
    return v.size();
}

// Pointer-based valarray functions

int oneLevelBasicArgument(std::valarray<char*> v) {
    return v.size();
}

int twoLevelBasicArgument(std::valarray<char**> v) {
    return v.size();
}

int oneLevelStructureArgument(std::valarray<Class*> v) {
    return v.size();
}

int twoLevelStructureArgument(std::valarray<Class**> v) {
    return v.size();
}

// Element-wise access with single-level pointers

int oneLevelBasic(std::valarray<char>* v) {
    return v->size();
}

int twoLevelBasic(std::valarray<char>** v) {
    return (*v)->size();
}

// One-dimensional valarray

int oneDimBasic(std::valarray<char> v[]) {
    return v[0].size();
}

int oneLevelStructure(std::valarray<Class>* v) {
    return v->size();
}

int twoLevelStructure(std::valarray<Class>** v) {
    return (*v)->size();
}

int oneDimStructure(std::valarray<Class> v[]) {
    return v[0].size();
}

// Functions for valarray of integer pointers

int twoLevelOneLevel(std::valarray<int*>** v) {
    return (*v)->size();
}

int twoDimOneLevel(std::valarray<int*> v[4]) {
    return v[0].size();
}
