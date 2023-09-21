#include <iostream>
using namespace std;

//p.210 5
class Dice{
    int face;
public:
    void roll();
    void check();
};
void Dice::roll()
    {
        face = (int) (rand()%6 + 1);
    }
void Dice::check()
    {
        cout << "주사위 값=" << face << endl;
    }

int main()
{
    srand(time(NULL));
    Dice obj1;
    Dice obj2;

    obj1.roll();
    obj1.check();

    obj2.roll();
    obj2.check();
}