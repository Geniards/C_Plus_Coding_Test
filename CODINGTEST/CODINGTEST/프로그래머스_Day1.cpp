#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;


#if 0
int solution(string my_string, string target)
{
    int answer = 0;

    answer = my_string.find(target);

    bool result = answer >= 0 ? true : false;

    return result;
}

void main()
{
    string str = "Banana";
    string Target_str = "ana";

    cout << solution(str, Target_str) << endl;

}
#endif //�κ� ���ڿ����� Ȯ���ϱ�

#if 0
void main()
{
    string str;
    string str2;
    cin >> str;


    for (int i = 0; i < str.length(); i++)
    {
        if (isupper(str[i]))
            str2 += tolower(str[i]);
        else
            str2 += toupper(str[i]);
    }

}
#endif //�빮�� -> �ҹ���, �ҹ��� -> �빮��

#if 0 // ���ľ��� string.replace(n, k, str)
string solution(string my_string, string overwrite_string, int s)
{
    string answer = "";
    answer = my_string.replace(s, overwrite_string.length(), overwrite_string);
    return answer;
}

void main()
{
    string str1 = "He11oWor1d";
    string str2 = "lloWorl";

    int num = 2;

    cout << solution(str1, str2, num) << endl;
}
#endif //���ľ��� string.replace(n, k, str)

//void main()
//{
//    
//}

