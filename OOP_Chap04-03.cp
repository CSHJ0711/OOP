#include <iostream>
using namespace std;

//p.210 3
class Sum{
    int n1, n2;
public:
    void init(int x, int y);
    int add();
};

void Sum::init(int x, int y)
{
    n1 = x;
    n2 = y;
}

int Sum::add()
{
    return n1 + n2;
}

int main()
{
    Sum obj;
    int x,y;
    cout << "첫 번째 정수 : ";
    cin >> x;
    cout << "두 번째 정수 : ";
    cin >> y;

    obj.init(x,y);
    cout << "연산 결과 : " << obj.add() << endl;

    return 0;
}