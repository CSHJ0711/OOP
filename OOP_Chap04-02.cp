#include <iostream>
using namespace std;

//p.210 2
class Computer{
    string name;
    int RAM;
    double cpu_speed;

public:
    void setComputer(string, int, double);
    void print();
};
void Computer::setComputer(string n, int r, double cpu) {
    name = n;
    RAM = r;
    cpu_speed = cpu;
}
void Computer::print(){
    cout<<"이름 : "<<name<<endl;
    cout<<"RAM : "<<RAM<<endl;
    cout<<"CPU 속도 : "<<cpu_speed<<endl;
}

int main(){
    Computer obj;
    obj.setComputer("오피스컴퓨터", 8, 4.2);
    obj.print();
    return 0;
}