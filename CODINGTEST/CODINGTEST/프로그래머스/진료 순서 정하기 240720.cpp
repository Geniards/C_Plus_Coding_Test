#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <random>

using namespace std; // 선언하지 않으면 fixed 에서 오류가 납니다

#if 0
//진료 순서 정하기
vector<int> solution(vector<int> emergency)
{
    vector<int> answer;
    vector<int> temp;

    temp = emergency;
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());

    for (int i = 0; i < emergency.size(); i++)
    {
        for (int j = 0; j < temp.size(); j++)
        {
            if (emergency[i] == temp[j])
                answer.push_back(j + 1);
        }
    }

    for (auto v : answer)
        cout << v << endl;

    return answer;
}


void main()
{
    vector<int> a = { 3, 76, 24 };

    solution(a);

}
#endif //진료 순서 정하기
