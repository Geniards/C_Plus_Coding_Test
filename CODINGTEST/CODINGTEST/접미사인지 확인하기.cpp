#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <random>

using namespace std; // �������� ������ fixed ���� ������ ���ϴ�

#if 0
//���̻����� Ȯ���ϱ�
int solution(string my_string, string is_suffix)
{
    int answer = 0;

    vector<string> vec_str;
    string str;

    for (int i = 0; i < my_string.size(); i++)
    {
        str = my_string.substr(i);
        vec_str.push_back(str);
    }

    for (auto s : vec_str)
    {
        answer = s == is_suffix ? 1 : 0;
        if (answer == 1)
            break;
    }

    return answer;
}


void main()
{
    string a = "banana";
    string b = "ana";

    cout << solution(a, b) << endl;

}

#endif //���̻����� Ȯ���ϱ�
