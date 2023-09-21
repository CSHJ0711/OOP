#include <iostream>
using namespace std;

class Complex {
  double r;
  double i;

public:
  Complex() {
    r = 0.;
    i = 0.;
  }
  Complex(double _r, double _i) {
    r = _r;
    i = _i;
  }
  double getR() { return r; }
  double getI() { return i; }
  void setR(double rr) { r = rr; }
  void setI(double ii) { i = ii; }
  void print() {
    if (i < 0)
      cout << "(" << r << "-" << -i << "i)";
    else
      cout << "(" << r << "+" << i << "i)";
  }
};
Complex add(Complex a, Complex b) {
  Complex Sum;
  Sum.setR(a.getR() + b.getR());
  Sum.setI(a.getI() + b.getI());
  return Sum;
}
int main() {
  Complex A(5, 3);
  Complex B(3, -4);

  A.print();
  cout << " + ";
  B.print();
  cout << " = ";
  add(A, B).print();
  cout << endl;

  return 0;
}