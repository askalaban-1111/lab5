#include <iostream>

using namespace std;

int cashOut(int amount, int fee = 2) {
    return amount - fee;
}

int main() {
    int amount = 120;
    cout << cashOut(amount) << endl;
}