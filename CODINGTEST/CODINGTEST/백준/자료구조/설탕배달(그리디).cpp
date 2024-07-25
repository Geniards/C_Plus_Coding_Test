#include <iostream>

using namespace std;
// ¼³ÅÁ ¹è´Þ
#if 0
int main()
{
	int sugar;
	cin >> sugar;

	int answer = 0;
	int weight_5kg = 0;
	int weight_3kg = 0;

	while (sugar >= 0)
	{
		if (sugar % 5 == 0)
		{
			weight_5kg += (sugar / 5);
			cout << weight_5kg + weight_3kg << endl;
			return 0;
		}
		sugar -= 3;
		weight_3kg++;
	}
	cout << -1 << endl;
	return 0;
}
#endif 
