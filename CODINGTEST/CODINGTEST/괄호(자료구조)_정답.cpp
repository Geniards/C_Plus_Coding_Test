//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <stack>
//#include <vector>
//using namespace std; // 선언하지 않으면 fixed 에서 오류가 납니다
//
//
//int main()
//{
//	int T;
//	vector<string> Vec;
//
//	cin >> T;
//
//	for (int i = 0; i < T; i++)
//	{
//		string str;
//		stack<char> st;
//		int count = 1;
//
//		cin >> str;
//
//		for (auto j = 0; j < str.length(); ++j)
//		{
//			if (str[j] == '(')
//				st.push('(');
//			else if (str[j] == ')' && !st.empty())
//				st.pop();
//			else if (str[j] == ')' && st.empty())
//			{
//				count = 0;
//				Vec.push_back("NO");
//				break;
//			}
//		}
//
//		if(st.empty() && count == 1)
//			Vec.push_back("YES");
//		else if(count == 1)
//			Vec.push_back("NO");
//	}
//
//	for (int i = 0; i < T; ++i)
//	{
//		cout << Vec[i] << endl;
//	}
//
//	return 0;
//}