//#include <iostream>
//#include <algorithm>
//#include <stack>
//#include <string>
//
//using namespace std; // �������� ������ fixed ���� ������ ���ϴ�
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
//		cout << "NO" << '\n';//endl �ð����⵵���� ���� 
//							 //'\n' ���࿡�� ����
//
//	return 0;
//}