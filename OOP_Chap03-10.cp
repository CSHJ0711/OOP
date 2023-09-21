#include <iostream>
#include <string>
using namespace std;


//p.162 10
//동전던지기. 100번 던지고 동전의 각면이 나타나는 횟수 세어 출력
//난수 발생 0 1 반환 flip()함수.

int flip();

int main()
{
    int f = 0, b = 0;
    srand(time(NULL));

    for (int i = 0; i < 100 ; i++)
    {
        if (flip() == 0)
            f++;
        else
            b++;
    }
    cout << "동전의 앞면: " << f << "\n" << "동전의 뒷면: " << b << endl;
}
int flip()
{
    return rand() % 2;
}