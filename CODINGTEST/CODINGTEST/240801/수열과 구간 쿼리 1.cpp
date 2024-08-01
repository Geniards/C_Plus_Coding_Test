#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <random>
#include <sstream>
using namespace std; // 선언하지 않으면 fixed 에서 오류가 납니다

#if 0
// 수열과 구간 쿼리 1
vector<int> solution(vector<int> arr, vector<vector<int>> queries)
{
    vector<int> answer;

    for (int i = 0; i < queries.size(); i++)
    {
        for (int j = queries[i][0]; j <= queries[i][1]; j++)
        {
            arr[j]++;
        }
    }
    answer = arr;

    for (auto i : answer)
        cout << i << endl;

    return answer;
}


void main()
{

    vector<int> a = { 1, 2, 3, 4, 5 };
    vector<vector<int>> b = { {2, 4} };
    int c = 12;

    //cout << solution(a, b) << endl;
    solution(a, b);

}
#endif // 0

