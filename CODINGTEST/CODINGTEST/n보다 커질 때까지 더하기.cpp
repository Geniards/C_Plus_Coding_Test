#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <random>
#include <sstream>
using namespace std; // �������� ������ fixed ���� ������ ���ϴ�

#if 0
// n���� Ŀ�� ������ ���ϱ�
int solution(vector<int> numbers, int n)
{
    int answer = 0;

    for (int i = 0; i < numbers.size(); i++)
    {
        answer += numbers[i];

        if (answer > n)
            break;
    }

    return answer;
}


void main()
{

    vector<int> a = { 34, 5, 71, 29, 100, 34 };
    int b = 123;
    int c = 12;

    cout << solution(a, b) << endl;
    //solution(a, b);

}
#endif // 0



