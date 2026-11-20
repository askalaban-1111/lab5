#include "iostream"

using namespace std;

void deposit (int& balance, int amount) {
    balance += amount;
}

int main () {
    int balance = 1900;
     cout << balance << endl;
    deposit(balance, 250);
    cout << balance << endl;
}