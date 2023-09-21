#include <iostream>
#include <string>

using namespace std;

class Airplane{
private:
    string name;
    int capacity, speed;
public:
    string getName() {
        return name;
    }
    int getCapacity(){
        return capacity;
    }
    int getSpeed(){
        return speed;
    }
    void setName(string n){
        name = n;
    }
    void setCapacity(int cap){
        capacity = cap;
    }
    void setSpeed(int spd){
        speed = spd;
    }
    void print(int n)
    {
        cout << "비행기#" << n << endl;
        cout << "비행기의 이름: " << name << endl;
        cout << "비행기의 용량: " << capacity << endl;
        cout << "비행기의 속도: " << speed << "Km/h\n" << endl;
    }
};
int main()
{
    Airplane plane1;
    Airplane plane2;
    plane1.setName("보잉 787");
    plane1.setCapacity(900);
    plane1.setSpeed(300);
    plane1.print(1);

    plane2.setName("에어버스 350");
    plane2.setCapacity(400);
    plane2.setSpeed(1000);
    plane2.print(2);

    return 0;
}