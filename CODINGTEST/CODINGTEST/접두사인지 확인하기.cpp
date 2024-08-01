#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <random>
#include <sstream>
using namespace std; // 선언하지 않으면 fixed 에서 오류가 납니다

#if 0

// 접두사인지 확인하기
int solution(string my_string, string is_prefix)
{
    int answer = 0;
    vector<string> str;
    str.push_back(my_string);

    while (true)
    {
        if (my_string.size() > 0)
        {
            my_string = my_string.erase(my_string.size() - 1);
            if (my_string != "")
                str.push_back(my_string);
        }
        else
            break;
    }

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == is_prefix)
            answer += 1;
    }

    return answer;
}


void main()
{
    string a = "banana";
    string b = "ban";

    cout << solution(a, b) << endl;

}

#endif // 접두사인지 확인하기

