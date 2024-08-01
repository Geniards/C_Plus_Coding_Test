#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <random>

using namespace std; // 선언하지 않으면 fixed 에서 오류가 납니다

#if 0
//접미사 배열 - 문자열이기때문에 sort하면 사전순으로 정렬
vector<string> solution(string my_string)
{
    vector<string> answer;
    string tmp;

    for (int i = my_string.size() - 1; i >= 0; --i)
    {
        tmp = my_string.substr(i);
        answer.push_back(tmp);
    }

    sort(answer.begin(), answer.end());

    for (auto i : answer)
        cout << i << endl;

    return answer;
}


void main()
{
    string a = "banana";

    solution(a);

}
#endif //접미사 배열 - 문자열이기때문에 sort하면 사전순으로 정렬

