#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <random>
#include <sstream>
using namespace std; // 선언하지 않으면 fixed 에서 오류가 납니다

#if 0
vector<string> solution(vector<string> todo_list, vector<bool> finished)
{
    vector<string> answer;

    for (int i = 0; i < finished.size(); i++)
    {
        if (!finished[i])
            answer.push_back(todo_list[i]);
    }

    return answer;
}

void main()
{

    vector<string> a = { "problemsolving", "practiceguitar", "swim", "studygraph" };
    vector<bool> b = { true, false, true, false };
    int c = 12;

    //cout << solution(a, b) << endl;
    solution(a, b);

}
#endif // 0

