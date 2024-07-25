#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <random>

using namespace std; // 선언하지 않으면 fixed 에서 오류가 납니다

#if 0
//주사위 게임 3  vector의 emplace_back을 사용 // 코딩테스트용 이해력을 키우도록하자.
int solution(int a, int b, int c, int d)
{
    int answer = 0;

    //주사위 숫자
    vector<int> table(6);

    //같은 숫자가 나온것에 카운트를 올려준다.
    table[a - 1]++;    table[b - 1]++;    table[c - 1]++;    table[d - 1]++;

    //숫자 4개의 경우의 수
    vector<vector<int>> nums(5);

    //카운트 된 수로 중복 숫자를 찾는 과정(주사위 수가 6개)
    nums[table[0]].emplace_back(1);
    nums[table[1]].emplace_back(2);
    nums[table[2]].emplace_back(3);
    nums[table[3]].emplace_back(4);
    nums[table[4]].emplace_back(5);
    nums[table[5]].emplace_back(6);

    //4개가 같은 수
    if (!nums[4].empty())
    {
        return 1111 * nums[4][0];
    }
    //3개가 같은 수
    else if (!nums[3].empty())
    {
        return pow(10 * nums[3][0] + nums[1][0], 2);
    }
    //2개가 같은 수 -> 2가지인 경우
    else if (nums[2].size() == 2)
    {
        return (nums[2][0] + nums[2][1]) * abs(nums[2][0] - nums[2][1]);
    }
    //2개가 같은 수 -> 1가지인 경우
    else if (nums[2].size() == 1)
    {
        return nums[1][0] * nums[1][1];
    }
    //4숫자 다 다른 경우
    else
    {
        //4가지 수 중 가장 작은 수를 반환
        return *min_element(nums[1].begin(), nums[1].end());
    }



    return answer;
}


void main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;

    cout << solution(a, b, c, d) << endl;

}
#endif // 주사위 게임 3  vector의 emplace_back을 사용 // 코딩테스트용 이해력을 키우도록하자.

