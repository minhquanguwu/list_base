#include <deque> // for std::deque
#include <string>
#include "../class.h"


int intArgument(std::deque<int> d) {
    return d.size();
}

int charArgument(std::deque<char> d) {
    return d.size();
}

int stringArgument(std::deque<std::string> d) {
    return d.size();
}

int structureArgument(std::deque<Class> d) {
    return d.size();
}

int stltypeArgument(std::deque<std::deque<char>> d) {
    return d.size();
}

int classTemplateArgument(std::deque<Array<int>> d) {
    return d.size();
}

int oneLevelBasicArgument(std::deque<char*> d) {
    return d.size();
}

int twoLevelBasicArgument(std::deque<char**> d) {
    return d.size();
}

int oneLevelStructureArgument(std::deque<Class*> d) {
    return d.size();
}

int twoLevelStructureArgument(std::deque<Class**> d) {
    return d.size();
}

int oneLevelBasic(std::deque<char>* d) {
    return d[0].size();
}

int twoLevelBasic(std::deque<char>** d) {
    return d[0][0].size();
}

int oneDimBasic(std::deque<char> d[]) {
    return d[0].size();
}

int twoDimBasic(std::deque<char> d[][4]) {
    return d[0][0].size();
}

int oneLevelStructure(std::deque<Class>* d) {
    return d[0].size();
}

int twoLevelStructure(std::deque<Class>** d) {
    return d[0][0].size();
}

int oneDimStructure(std::deque<Class> d[]) {
    return d[0].size();
}

int twoDimStructure(std::deque<Class> d[][4]) {
    return d[0][0].size();
}

int twoLevelOneLevel(std::deque<int*>** d) {
    return d[0][0].size();
}

int twoDimOneLevel(std::deque<int*> d[][4]) {
    return d[0][0].size();
}
