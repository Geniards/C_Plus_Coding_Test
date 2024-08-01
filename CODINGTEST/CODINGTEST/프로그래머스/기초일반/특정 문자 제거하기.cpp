#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <random>

using namespace std; // 선언하지 않으면 fixed 에서 오류가 납니다

#if 0
//특정 문자 제거하기

string solution(string my_string, string letter)
{
    string answer = "";

    for (int i = 0; i < my_string.size(); i++)
    {
        if (my_string[i] != letter[0])
        {
            answer += my_string[i];
        }
    }
    cout << answer << endl;

    return answer;
}


void main()
{
    string a = "BCBdbe";
    string b = "B";

    cout << solution(a, b) << endl;

}
#endif //특정 문자 제거하기
