#include <iostream>
using namespace std;

// p.210 10
class BankAccount {
  string number;
  int balance;

public:
  void init(string, int);
  void deposit(int amount);
  void withdraw(int amount);
};
void BankAccount::init(string n, int b) {
  number = n;
  balance = b;
  cout << "현재 잔액: " << balance << endl;
}
void BankAccount::deposit(int amount) {
  balance += amount;
  cout << "after deposit(" << amount << ") 현재 잔액: " << balance << endl;
}
void BankAccount::withdraw(int amount) {
  balance -= amount;
  cout << "after withdraw(" << amount << ") 현재 잔액: " << balance << endl;
}
int main() {
  BankAccount ac;
  ac.init("123456789", 1000000);
  ac.deposit(1000000);
  ac.withdraw(1000000);
  return 0;
}