#include <iostream>
using namespace std;

//p.210 9
class Triangle{
    int b,h;
public:
    void init(int base, int height){
        b = base;
        h = height;
    }
    void area(){
        cout<<"밑변이 "<<b<<"이고 높이가 "<<h<<"인 삼각형의 면적: "<<(b*h)/2<<endl;
    }
};
int main(){
    Triangle t;
    t.init(3,4);
    t.area();
    return 0;
}