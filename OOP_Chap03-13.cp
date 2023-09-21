#include <iostream>
#include <string>
using namespace std;

//p.162 13
//대문자 소문자 숫자 섞으면 안전, 없으면 안전하지 않음
int main()
{
    string s;
    cout << "암호를 입력하시오: ";
    getline(cin, s);
    bool big = false, small = false, number = false;
    for ( int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            big = true;
        else if (s[i] >= 'a' && s[i] <= 'z')
            small = true;
        else if (s[i] >= '0' && s[i] <= '9')
            number = true;
    }

    if((big && small && number) == true)
        cout << "안전합니다." <<endl;
    else
        cout << "안전하지 않습니다." <<endl;
    return 0;
}