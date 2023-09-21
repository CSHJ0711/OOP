#include <iostream>
using namespace std;

//p.210 8
class Complex{
public :
    double r,i;
    void print(){
        if(i<0) cout<<r<<" - "<<-i<<"i"<<endl;
        else cout<<r<<" + "<<i<<"i"<<endl;
    }
};
int main(){
    Complex c1;
    c1.r = 5;
    c1.i = 3;
    c1.print();

    Complex c2;
    c2.r = 3;
    c2.i = -4;
    c2.print();

    return 0;
}