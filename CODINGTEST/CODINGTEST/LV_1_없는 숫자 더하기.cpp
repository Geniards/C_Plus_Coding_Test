//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std; // 선언하지 않으면 fixed 에서 오류가 납니다
//
//int solution(vector<int> numbers)
//{
//	int answer = 0;
//	int Sum = 45;
//
//	auto k = numbers.begin();
//
//	for (; k < numbers.end(); ++k)
//		answer += *k;
//
//	answer = Sum - answer;
//
//	return answer;
//}
//
//int main()
//{
//	vector<int> numbers = { 5,8,4,0,6,7,9 };
//	cout << solution(numbers) << endl;;
//}

//int main()
//{
//	double A;
//	double B;
//
//	std::cin >> A;
//	std::cin >> B;
//
//	if (A > 0 && B < 10)
//	{
//		std::cout << fixed;      //소수점 아래로 고정
//		std::cout.precision(10); //(정수포함) 전체 10자리 표현
//
//		std::cout << A / B << std::endl;
//	}
//	else
//		std::cout << "잘못입력하였습니다." << std::endl;
//
//	return 0;
//}