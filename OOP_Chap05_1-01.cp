#include <iostream>
using namespace std;

//p.244 1
class Point {
private:
    int x,y;
public:
    void setx(int m_x = 0){
        x = m_x;
    }
    void sety(int m_y = 0){
        y = m_y;
    }
    int getx(){
        return x;
    }
    int gety(){
        return y;
    }
};
int main()
{
    Point pnt;
    pnt.setx(100);
    pnt.sety(200);
    cout << "x:: " << pnt.getx() << endl;
    cout << "y:: " << pnt.gety() << endl;
}