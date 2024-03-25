#include <iostream>
#include <vector>
#include <ScopedPointer.hpp>

using namespace std;

int main() {
    ScopedPointer<vector<int>> sp1{new vector<int>{1, 2, 3}};
    ScopedPointer<vector<int>> sp2 = sp1;

    ScopedPointer<vector<int>> sp3{new vector<int>{4, 5, 6}};
    sp3 = move(sp1);

    cout << sp3.get()[0];
    return 0;
}