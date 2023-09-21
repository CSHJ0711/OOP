#include <iostream>
using namespace std;

//p.210 6
class Employee{
    string name;
    int age;
    int salary;
public :
    void init(string n, int a, int s){
        name = n;
        age = a;
        salary = s;
    }
    void print(){
        cout<<"Employee1: "<<endl;
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<salary<<endl;
    }
};
int main(){
    Employee employee1;
    employee1.init("김철수",38,2000000);
    employee1.print();
    return 0;
}