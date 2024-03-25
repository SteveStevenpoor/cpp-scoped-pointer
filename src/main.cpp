#include <iostream>
#include <vector>
#include <ScopedPointer.hpp>

using namespace std;

int main() {
    ScopedPointer<vector<int>> sp1{new vector<int>{1, 2, 3}};
    ScopedPointer<vector<int>> sp2 = sp1;
    return 0;
}