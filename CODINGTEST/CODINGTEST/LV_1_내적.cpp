//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std; // �������� ������ fixed ���� ������ ���ϴ�
//
//int solution(vector<int> a, vector<int> b) 
//{
//	int answer = 0;
//	int num = 0;
//
//	auto i = a.begin(), j = b.begin();
//
//	if (a.size() == b.size())
//	{
//		for (; i < a.end(); i++)
//		{
//			num = *i * *j;
//			answer += num;
//			j++;
//		}
//	}
//	else
//		answer = 0;
//
//	return answer;
//}
//
//int main()
//{
//	vector<int> numbers = { 1,2,3 };
//	vector<int> numbers2 = { 1,2 };
//	cout << solution(numbers, numbers2) << endl;
//	return 0;
//}