#include <iostream>

using namespace std;

int transferSum(int a, int b) {
    return a + b;
}

int transferSum(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int a = 80;
    int b = -3;
    int c = 44;

    cout << transferSum(a, b) << endl;
    cout << transferSum(a, b, c) << endl;
}