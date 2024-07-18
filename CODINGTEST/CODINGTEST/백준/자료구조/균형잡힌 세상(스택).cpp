//#include <iostream>
//#include <stack>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	int sum = 0;
//	//string str;
//	//string answer;
//	//stack<string> st_int;
//
//	while (1)
//	{
//		string str;
//		string answer;
//		stack<string> st_int;
//
//		getline(cin, str);
//
//		for (int i = 0; i < str.length(); ++i)
//		{
//			if (str[0] == '.')
//				break;
//			else if (str[i] == '.')
//				st_int.push(".");
//			else if (str[i] == '(')
//			{
//				st_int.push("(");
//			}
//			else if (str[i] == '[')
//			{
//				st_int.push("[");
//			}
//			else if (str[i] == ')')
//			{
//				if (!st_int.empty() && st_int.top() == "(")
//				{
//					st_int.pop();
//				}
//				else
//					st_int.push(")");
//			}
//			else if (str[i] == ']')
//			{
//				if (!st_int.empty() && st_int.top() == "[")
//				{
//					st_int.pop();
//				}
//				else
//					st_int.push("]");
//			}
//		}
//
//		if (str[0] == '.')
//			break;
//
//		else if (st_int.size() == 1 && st_int.top() == ".")
//		{
//			cout << "yes" << '\n';
//		}
//
//		else
//		{
//			cout << "no" << '\n';
//		}
//	}
//
//	return 0;
//}