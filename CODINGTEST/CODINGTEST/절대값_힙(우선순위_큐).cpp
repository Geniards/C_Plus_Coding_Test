//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//struct cmp
//{
//	bool operator()(int a, int b)
//	{
//	/*	return a < b;			//��������
//		return a > b;			//��������
//		
//		if (a > b)
//			return true;		//swap �� �ٽ� ��
//		else 
//			return false;		//Ż��
//	*/
//		if (abs(a) > abs(b))
//			return true;
//		else if (abs(a) == abs(b))
//			if (a > b)
//				return true;
//			else
//				return false;
//		return false;
//	}
//};
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0); cout.tie(0);
//
//	int N = 0;
//	int x = 0;
//
//	vector<int> answer;
//
//	priority_queue<int, vector<int>, cmp> pq;
//	
//	cin >> N;
//
//	for (auto i = 0; i < N; i++)
//	{
//		cin >> x;
//
//		if (x != 0)
//			pq.push(x);
//		else
//		{
//			if (!pq.empty())
//			{
//				answer.push_back(pq.top());
//				pq.pop();
//			}
//			else
//				answer.push_back(0);
//		}
//	}
//
//	for (auto j : answer)
//		cout << j << '\n';
//
//	return 0;
//}