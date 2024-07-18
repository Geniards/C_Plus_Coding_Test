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
//	//ios::sync_with_stdio(false);
//	//cin.tie(NULL);
//
//	int T;
//	int count = -1;
//	int num[10000];
//	
//	cin >> T;
//
//	for (auto i = 0; i < T+1; ++i)
//	{
//		string str;
//		getline(cin, str);
//
//		if (!str.find("push"))
//		{
//			str.erase(0, 4);
//			int a = stoi(str);
//
//			count++;
//			num[count] = a;
//		}
//
//		else if (!str.find("pop"))
//		{
//			if (count != -1)
//			{
//				cout << num[count] << endl;
//				count--;
//			}
//			else
//				cout << "-1" << endl;
//		}
//
//		else if (!str.find("size"))
//			if(count == -1)
//				cout << 0 << endl;
//			else
//				cout << count + 1 << endl;
//		
//		else if (!str.find("empty"))
//		{
//			if (count == -1)
//				cout << 1 << endl;
//			else
//				cout << 0 << endl;
//		}
//		else if (!str.find("top"))
//		{
//			if (count != -1)
//			{
//				cout << num[count] << endl;
//			}
//			else
//				cout << "-1" << endl;
//		}
//
//	}
//	return 0;
//}