#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <random>

using namespace std; // �������� ������ fixed ���� ������ ���ϴ�

#if 0
//���̻� �迭 - ���ڿ��̱⶧���� sort�ϸ� ���������� ����
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
#endif //���̻� �迭 - ���ڿ��̱⶧���� sort�ϸ� ���������� ����

