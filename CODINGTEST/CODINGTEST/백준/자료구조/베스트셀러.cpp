//#include <iostream>
//#include <vector>
//#include <map>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//bool cmp (pair<string, int>&a, pair<string, int>&b)
//{
//	if (a.second != b.second)
//		return a.second > b.second; //왼쪽이 오른쪽보다 크게 정렬한다.
//	else
//		return a < b;
//};
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0); cout.tie(0);
//
//	int N = 0;
//
//	string str;
//	map<string, int> result;
//
//	cin >> N;
//
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> str;
//
//		if (result.find(str) != result.end())
//			result.at(str) += 1;
//		else
//			result.insert(make_pair(str, 1));
//	}
//
//	vector<pair<string, int>> tmpVec(result.begin(), result.end());
//
//	sort(tmpVec.begin(), tmpVec.end(), cmp);
//
//	cout << tmpVec.begin()->first << '\n';
//
//	return 0;
//}