#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <random>
#include <sstream>
using namespace std; // 선언하지 않으면 fixed 에서 오류가 납니다

#if 0
// 구슬을 나누는 경우의 수      nCm = n부터 m개를 combination해라(n개의 수에서 m개의 선택시 사용 가능한 공식)
long solution(int balls, int share)
{
    long answer = 1;

    int temp = 1;

    // n! / (n - m)! * m!
    for (int i = share + 1; i <= balls; i++)
    {
        answer *= i;
        answer /= temp;
        temp++;
    }

    return answer;
}


void main()
{
    int a = 30;
    int b = 15;

    cout << solution(a, b) << endl;

}
#endif // 구슬을 나누는 경우의 수      nCm = n부터 m개를 combination해라(n개의 수에서 m개의 선택시 사용 가능한 공식)

