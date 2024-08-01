//#include <iostream>
//#include <string>
////#include <vector>
////#include <numeric>
//using namespace std; // 선언하지 않으면 fixed 에서 오류가 납니다
//
//long long solution(int a, int b)
//{
//	long long answer = 0;
//
//	//vector<long long>Sum;
//
//	if (a < b)
//	{
//		for (long long i = a; i <= b; i++)
//			answer += i;
//			//Sum.push_back(i);
//		//answer = accumulate(Sum.begin(), Sum.end(), 0LL);
//	}
//	else if (a > b)
//	{
//		for (long long i = b; i <= a; i++)
//			answer += i;
//			//Sum.push_back(i);
//		//answer = accumulate(Sum.begin(), Sum.end(), 0LL);
//	}
//	else
//		answer = a;
//	
//	return answer;
//}
//
//int main()
//{
//	int a = 0, b = 0;
//
//	cin >> a >> b;
//
//	if((-10000000 <= a && a <= 10000000)&& (-10000000 <= b && b <= 10000000))
//		cout << solution(a, b) << endl;
//	else
//		cout << "False Input" << endl;
//	return 0;
//}