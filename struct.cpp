// CPP program to initialize data member in c++
#include <iostream>
using namespace std;

struct Record {
    int x;

    // Constructor
    Record() {
        x = 7;
        cout << x << endl;
    }
};

// Driver Program
int main() {
    Record s;

    return 0;
}
