#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <random>

using namespace std; // �������� ������ fixed ���� ������ ���ϴ�

#if 0
//���ڿ� ���� �� ������      vector<vector<int>> queries��  ������� ���� ���� ���� ���´�.
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

//algorithm�� reverse���

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
#endif // //���ڿ� ���� �� ������      vector<vector<int>> queries��  ������� ���� ���� ���� ���´�.


