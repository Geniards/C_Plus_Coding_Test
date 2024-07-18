//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <map>
//using namespace std; // 선언하지 않으면 fixed 에서 오류가 납니다
//
//
//int main()
//{
//	int T;
//
//	map<string, int> map_result = { {"(", 1}, {")", 0} };
//
//	vector<string> sVec;
//
//	cin >> T;
//
//
//	for (int i = 0; i < T; i++)
//	{
//		string str;
//		string str_s;
//		vector<int> iVec;
//		int Size = 0;
//
//		cin >> str;
//
//		for (int c = 0; c < str.size(); ++c)
//		{
//			str_s = str.substr(c, 1);
//			auto m = map_result.find(str_s);
//			iVec.push_back(m->second);
//		}
//		Size = iVec.size();
//
//		for (int t = 0; t < iVec.size(); ++t)
//		{
//			if (Size > t + 1)
//			{
//				if (iVec[t] == 1 && iVec[t] != iVec[t + 1])
//				{
//					iVec.erase(iVec.begin() + t);
//					iVec.erase(iVec.begin() + t);
//
//					Size = iVec.size();
//
//					if (Size == 0)
//					{
//						sVec.push_back("YES");
//					}
//					else
//					{
//						t = -1;
//					}
//				}
//				else if (iVec[t] == 0 || (iVec.size() != 0 && t + 1 == iVec.size()))
//					sVec.push_back("NO");
//			}
//			else
//				sVec.push_back("NO");
//		}
//	}
//
//	for (int i = 0; i < T; ++i)
//	{
//		cout << sVec[i] << endl;
//	}
//	
//	
//	return 0;
//}