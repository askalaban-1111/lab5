#include <iostream>

using namespace std;

int newBalance(int balance, int income) {
    return balance + income;
}

int main() {
    int current = 1290;
    int income = 1010;
    int updatedBalance = newBalance(current, income);

    cout << current << endl;
    cout << updatedBalance << endl;
    return 0;
}