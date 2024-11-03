#include <queue> // for std::priority_queue
#include <string>
#include "../class.h"

// Function to get the size of a priority_queue
template <typename T>
int getSize(const std::priority_queue<T>& pq) {
    return pq.size();
}

// Function to access the top element of a priority_queue (if it exists)
template <typename T>
T getTop(const std::priority_queue<T>& pq) {
    return pq.empty() ? T() : pq.top();
}

// Basic argument types with std::priority_queue
int intArgument(std::priority_queue<int> pq) {
    return getSize(pq);
}

int charArgument(std::priority_queue<char> pq) {
    return getSize(pq);
}

int stringArgument(std::priority_queue<std::string> pq) {
    return getSize(pq);
}

int structureArgument(std::priority_queue<Class> pq) {
    return getSize(pq);
}

// Nested priority_queue (priority_queue of priority_queue is not supported in STL)
int classTemplateArgument(std::priority_queue<Array<int>> pq) {
    return getSize(pq);
}

// Priority queues with pointers
int oneLevelBasicArgument(std::priority_queue<char*> pq) {
    return getSize(pq);
}

int twoLevelBasicArgument(std::priority_queue<char**> pq) {
    return getSize(pq);
}

int oneLevelStructureArgument(std::priority_queue<Class*> pq) {
    return getSize(pq);
}

int twoLevelStructureArgument(std::priority_queue<Class**> pq) {
    return getSize(pq);
}

// Single-level pointer to priority_queue
int oneLevelBasic(std::priority_queue<char>* pq) {
    return getSize(*pq);
}

// Double-level pointer to priority_queue
int twoLevelBasic(std::priority_queue<char>** pq) {
    return getSize(**pq);
}

// One-dimensional array of priority_queue
int oneDimBasic(std::priority_queue<char> pq[]) {
    return getSize(pq[0]);
}

// Single-level pointer with user-defined Class in priority_queue
int oneLevelStructure(std::priority_queue<Class>* pq) {
    return getSize(*pq);
}

int twoLevelStructure(std::priority_queue<Class>** pq) {
    return getSize(**pq);
}

int oneDimStructure(std::priority_queue<Class> pq[]) {
    return getSize(pq[0]);
}

// Priority queue containing int pointers
int twoLevelOneLevel(std::priority_queue<int*>** pq) {
    return getSize(**pq);
}

// Priority queue containing int pointers with array of priority_queue
int twoDimOneLevel(std::priority_queue<int*> pq[4]) {
    return getSize(pq[0]);
}
