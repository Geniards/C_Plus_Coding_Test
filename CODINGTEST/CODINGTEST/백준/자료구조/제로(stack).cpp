//#include <iostream>
//#include <vector>
//
//using namespace std; // 선언하지 않으면 fixed 에서 오류가 납니다
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//
//	vector<int> pre_b;
//
//
//	cin >> a;
//
//	for (auto i = 0; i < a; i++)
//	{
//		cin >> b;
//
//		if (b == 0 && i != 0)
//		{
//			sum -= pre_b.back();
//			pre_b.pop_back();
//		}
//		else
//		{
//			sum += b;
//			pre_b.push_back(b);
//		}
//	}
//
//	cout << sum << endl;
//
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int erase = 0;
//	int b = 0;
//	int sum = 0;
//
//	int pre_b[100000];
//
//
//	cin >> a;
//
//	for (auto i = 0; i < a; i++)
//	{
//		cin >> b;
//
//		if (b == 0 && i != 0)
//		{
//			erase--;
//
//			sum -= pre_b[erase];
//			pre_b[erase] = 0;
//		}
//		else
//		{
//			sum += b;
//			pre_b[erase] = b;
//
//			erase++;
//		}
//	}
//
//	cout << sum << endl;
//
//	return 0;
//}