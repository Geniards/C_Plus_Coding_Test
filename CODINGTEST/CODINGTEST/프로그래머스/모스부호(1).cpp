#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <random>
#include <sstream>
using namespace std; // �������� ������ fixed ���� ������ ���ϴ�

#if 0
string solution(string letter)
{
    string answer = "";
    string mose[] = { ".-","-...","-.-.","-..",".","..-.","--.","....",
                   "..",".---","-.-",".-..","--","-.","---",".--.","--.-",
                   ".-.","...","-","..-","...-",".--","-..-","-.--","--.." };

    vector<string> v_str;
    stringstream s2;

    s2.str(letter);

    while (s2 >> answer)
    {
        v_str.push_back(answer);
    }

    answer.clear();

    for (int i = 0; i < v_str.size(); i++)
    {
        for (int j = 0; j < size(mose); j++)
        {
            if (v_str[i] == mose[j])
            {
                answer += (char)(j + 97);
            }
        }
    }

    return answer;
}


void main()
{
    string a = ".... . .-.. .-.. ---";

    cout << solution(a) << endl;

}
#endif // �𽺺�ȣ (1) //<sstream>���� �������� ������


