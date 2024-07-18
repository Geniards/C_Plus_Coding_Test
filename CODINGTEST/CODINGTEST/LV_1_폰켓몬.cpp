//#include <iostream>
//#include <string>
//#include <vector>
//#include <set>
//#include <algorithm>
////#include <numeric>
//using namespace std; // 선언하지 않으면 fixed 에서 오류가 납니다
//
//int solution(vector<int> nums)
//{
//	set<int> tmpl;
//	for (const auto& num : nums)
//		tmpl.insert(num);
//	return min(nums.size() / 2, tmpl.size());
//}
//
//int main()
//{
//	vector<int> nums = { 3,3,3,2,2,2 };
//
//	if((nums.size() >= 1 && nums.size() <= 10000) && nums.size() % 2 == 0)
//	{
//		cout << solution(nums) << endl;
//	}
//	else
//		cout << "False Input" << endl;
//	return 0;
//
//}