#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <random>
#include <sstream>
using namespace std; // �������� ������ fixed ���� ������ ���ϴ�

#if 0
// ������ ������ ����� ��      nCm = n���� m���� combination�ض�(n���� ������ m���� ���ý� ��� ������ ����)
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
#endif // ������ ������ ����� ��      nCm = n���� m���� combination�ض�(n���� ������ m���� ���ý� ��� ������ ����)

