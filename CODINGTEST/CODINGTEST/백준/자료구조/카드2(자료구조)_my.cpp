//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <queue>
//#include <vector>
//using namespace std; // �������� ������ fixed ���� ������ ���ϴ�
//
//
//int main()
//{
//	int T;
//	int a;
//	queue<int> q;
//
//	cin >> T;
//
//	for (int i = 0; i < T; i++)
//	{
//		q.push(i + 1);
//	}
//
//	for (int i = 0; i < T; i++)
//	{
//		if (i + 1 < T)
//		{
//			q.pop();
//			a = q.front();
//			q.pop();
//
//			q.push(a);
//		}
//	}
//
//	cout << q.front();
//
//	return 0;
//}