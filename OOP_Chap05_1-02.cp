#include <iostream>
#include <string>
using namespace std;

// p.244 2
class Person {
private:
  string name;
  int snumber;
  int age;

public:
  Person();
  Person(string n, int s, int a) : name{n}, snumber{s}, age{a} {}

  void print() {
    cout << "이름 :: " << name << endl;
    cout << "주민등록번호 :: " << snumber << endl;
    cout << "나이 :: " << age << endl;
  }
};
int main() {
  Person p("홍길동", 11111111, 20);
  p.print();
}