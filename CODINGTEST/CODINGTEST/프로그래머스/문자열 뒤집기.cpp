#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std; // �������� ������ fixed ���� ������ ���ϴ�

#if 0
// ���ڿ� ������
string solution(string my_string, int s, int e)
{
    string answer = "";

    answer = my_string.substr(s, e - s + 1);
    my_string.erase(s, e - s + 1);

    reverse(answer.begin(), answer.end());
    my_string.insert(s, answer);


    return my_string;
}


void main()
{
    string a = "Progra21Sremm3";
    int b = 6;
    int c = 12;

    cout << solution(a, b, c) << endl;

}
#endif // ���ڿ� ������

