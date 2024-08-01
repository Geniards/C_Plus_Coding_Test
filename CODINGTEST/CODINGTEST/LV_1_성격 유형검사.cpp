//#include <iostream>
//#include <string>
//#include <vector>
//#include <map>
////#include <set>
////#include <algorithm>
////#include <numeric>
//using namespace std; // 선언하지 않으면 fixed 에서 오류가 납니다
//
//string solution(vector<string> survey, vector<int> choices)
//{
//	string answer = "";
//	vector<int> point;
//	vector<string> mentality;
//	map<string, int> map_result = { {"R", 0}, {"T", 0}, {"C", 0}, {"F", 0}, {"J", 0}, {"M", 0}, {"A", 0}, {"N", 0} };
//
//	auto m = map_result.begin();
//
//	mentality.push_back("R");
//	mentality.push_back("T");
//	mentality.push_back("C");
//	mentality.push_back("F");
//	mentality.push_back("J");
//	mentality.push_back("M");
//	mentality.push_back("A");
//	mentality.push_back("N");
//
//	for (const auto& p1 : choices)
//		point.push_back(p1 - 4);
//
//	for (int i = 0; i < point.size(); i++)
//	{
//		auto m1 = survey[i].substr(0, 1);
//		auto m2 = survey[i].substr(1, 1);
//
//		if (point[i] <= 0)
//		{
//			if(map_result[m1] == 0)
//				map_result[m1] = abs(point[i]);
//			else
//				map_result[m1] += abs(point[i]);
//			
//			map_result[m2] += 0;
//		}
//		else
//		{
//			if (map_result[m2] == 0)
//				map_result[m2] = abs(point[i]);
//			else
//				map_result[m2] += abs(point[i]);
//
//			map_result[m1] += 0;
//		}
//	}
//
//	for (int i = 0; i < 8; i++)
//	{
//		if (i % 2 == 0 && map_result[mentality[i]] == 0 && map_result[mentality[i + 1]] == 0 )
//			answer += mentality[i];
//
//		else if(i % 2 == 0 && map_result[mentality[i]] >= map_result[mentality[i + 1]])
//			answer += mentality[i];
//		else if (i % 2 == 0 && map_result[mentality[i]] <= map_result[mentality[i + 1]])
//			answer += mentality[i+1];
//	}
//	//cout << map_result["R"] << endl;
//	//cout << answer << endl;
//
//	return answer;
//}
//
//int main()
//{
//	vector<string> survey = { "AN", "CF", "MJ", "RT", "NA" };
//	vector<int> choices = { 5, 3, 2, 7, 5 };
//
//	if ((survey.size() == choices.size()) && (survey.size() >= 1 && survey.size() <= 1000))
//	{
//		cout << solution(survey, choices) << endl;
//	}
//	else
//		cout << "False Input" << endl;
//	return 0;
//
//}