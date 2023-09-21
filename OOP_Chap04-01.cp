#include <iostream>
using namespace std;

//p.210 1
class Person{
    string name;
    int age;
public :
    void setPerson(string,int);
    void print();
};
void Person::setPerson(string n,int a){
    name = n;
    age = a;
}
void Person::print(){
    cout<<"이름 : "<<name<<endl;
    cout<<"나이 : "<<age<<endl;
}
int main(){
    Person obj;
    obj.setPerson("김철수", 21);
    obj.print();
    return 0;
}