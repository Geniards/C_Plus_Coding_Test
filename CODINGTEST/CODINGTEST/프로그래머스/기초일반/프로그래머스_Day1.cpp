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
#endif //부분 문자열인지 확인하기

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
#endif //대문자 -> 소문자, 소문자 -> 대문자

#if 0 // 겹쳐쓰기 string.replace(n, k, str)
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
#endif //겹쳐쓰기 string.replace(n, k, str)

#if 0
//문자열 뒤집기
string solution(string my_string)
{
    string answer = "";

    reverse(my_string.begin(), my_string.end());
    answer = my_string;

    return answer;
}


void main()
{

    string a = "jaron";

    solution(a);

}
#endif // 문자열 뒤집기 algorithm reverce사용 0

#if 0
//문자반복 출력 string(n, v) n번씩 v를 출력
string solution(string my_string, int n)
{
    string answer = "";

    for (int i = 0; i < my_string.size(); i++)
        for (int j = 0; j < n; j++)
            answer += my_string[i];

    for (auto v : my_string)
        cout << string(n, v) << endl;;

    return answer;
}


void main()
{
    string a = "hello";
    int b = 3;

    solution(a, b);

}
#endif // 문자반복 출력 string(n, v) n번씩 v를 출력


//void main()
//{
//    
//}

