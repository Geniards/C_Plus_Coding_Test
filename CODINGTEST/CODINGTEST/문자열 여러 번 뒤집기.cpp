#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <random>

using namespace std; // 선언하지 않으면 fixed 에서 오류가 납니다

#if 0
//문자열 여러 번 뒤집기      vector<vector<int>> queries의  사이즈는 앞의 행의 값이 나온다.
string solution(string my_string, vector<vector<int>> queries)
{
    string answer = "";


    for (int i = 0; i < queries.size(); i++)
    {
        int temp = queries[i][1];
        for (int j = 0; j < my_string.size(); j++)
        {
            if (queries[i][0] <= j && j <= queries[i][1])
            {
                answer += my_string[temp];
                temp--;
            }
            else
                answer += my_string[j];
        }
        my_string = answer;
        answer.clear();
    }


    return answer = my_string;
}


void main()
{
    string a = "rermgorpsam";
    vector<vector<int>> b = { { 2, 3 }, { 0, 7 }, { 5, 9 }, { 6, 10 } };

    cout << solution(a, b) << endl;

}

//algorithm의 reverse사용

//string solution(string my_string, vector<vector<int>> queries)
//{
//    string answer = my_string;
//
//    for (auto i : queries)
//        reverse(answer.begin() + i[0], answer.begin() + i[1] + 1);
//
//    return answer;
//}
//
//
//void main()
//{
//    string a = "rermgorpsam";
//    vector<vector<int>> b = { { 2, 3 }, { 0, 7 }, { 5, 9 }, { 6, 10 } };
//
//    cout << solution(a, b) << endl;
//
//}
#endif // //문자열 여러 번 뒤집기      vector<vector<int>> queries의  사이즈는 앞의 행의 값이 나온다.


