#include <iostream>
#include <string>
using namespace std;

//p.162 12
//문자가 나타나는 빈도 계산하여 출력

int main()
{
    int counter[256] = {0} ;
    string s;
    cout << "문자열을 입력하시오: ";
    getline(cin, s);

    for ( int i = 0; i < s.size(); i++)
    {
        counter[s[i]]++;
    }
    for ( int i = 'a'; i < 'z'; i++)
    {
        cout << (char)i << ": "<< counter[i] << endl;
    }
    return 0;
}