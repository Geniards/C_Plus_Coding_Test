#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <random>

using namespace std; // �������� ������ fixed ���� ������ ���ϴ�

#if 0
//Ư�� ���� �����ϱ�

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
#endif //Ư�� ���� �����ϱ�
