//#include <iostream>
//#include <algorithm>
//#include <stack>
//#include <string>
//
//using namespace std; // 선언하지 않으면 fixed 에서 오류가 납니다
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int preNum = 0;
//
//	bool on = true;
//	string str;
//	stack<int> st_Num;
//
//	cin >> a;
//
//	for (int i = 0; i < a; i++)
//	{
//		cin >> b;
//		for (int j = 0; j < b - preNum; j++)
//		{
//			str += "+";
//			c++;
//			st_Num.push(c);
//		}
//
//		preNum = c;
//
//		if (st_Num.top() == b)
//		{
//			str += "-";
//			st_Num.pop();
//		}
//		else
//			on = false;
//
//	}
//
//	if (on)
//	{
//		for (int i = 0; i < str.size(); i++)
//		{
//			cout << str[i] << '\n';
//		}
//	}
//	else
//		cout << "NO" << '\n';//endl 시간복잡도에서 느림 
//							 //'\n' 개행에서 빠름
//
//	return 0;
//}