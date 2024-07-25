#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <random>
#include <sstream>
using namespace std; // 선언하지 않으면 fixed 에서 오류가 납니다

//문자열 내 p와 y의 개수
#if 0
bool solution(string s)
{
    bool answer = true;
    int pNum = 0;
    int yNum = 0;
    int temp = 0;

    while (temp < s.size())
    {
        if (s[temp] == 'P' || s[temp] == 'p')
        {
            pNum++;
        }
        else if (s[temp] == 'Y' || s[temp] == 'y')
        {
            yNum++;
        }
        temp++;
    }


    if (pNum != yNum)
        answer = false;



    cout << "Hello Cpp" << endl;

    return answer;
}


void main()
{
    string a = "Pypy";
    int b = 6;
    int c = 12;

    cout << solution(a) << endl;
}
#endif // 0


