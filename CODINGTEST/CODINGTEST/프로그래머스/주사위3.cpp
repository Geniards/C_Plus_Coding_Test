#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <random>

using namespace std; // �������� ������ fixed ���� ������ ���ϴ�

#if 0
//�ֻ��� ���� 3  vector�� emplace_back�� ��� // �ڵ��׽�Ʈ�� ���ط��� Ű�쵵������.
int solution(int a, int b, int c, int d)
{
    int answer = 0;

    //�ֻ��� ����
    vector<int> table(6);

    //���� ���ڰ� ���°Ϳ� ī��Ʈ�� �÷��ش�.
    table[a - 1]++;    table[b - 1]++;    table[c - 1]++;    table[d - 1]++;

    //���� 4���� ����� ��
    vector<vector<int>> nums(5);

    //ī��Ʈ �� ���� �ߺ� ���ڸ� ã�� ����(�ֻ��� ���� 6��)
    nums[table[0]].emplace_back(1);
    nums[table[1]].emplace_back(2);
    nums[table[2]].emplace_back(3);
    nums[table[3]].emplace_back(4);
    nums[table[4]].emplace_back(5);
    nums[table[5]].emplace_back(6);

    //4���� ���� ��
    if (!nums[4].empty())
    {
        return 1111 * nums[4][0];
    }
    //3���� ���� ��
    else if (!nums[3].empty())
    {
        return pow(10 * nums[3][0] + nums[1][0], 2);
    }
    //2���� ���� �� -> 2������ ���
    else if (nums[2].size() == 2)
    {
        return (nums[2][0] + nums[2][1]) * abs(nums[2][0] - nums[2][1]);
    }
    //2���� ���� �� -> 1������ ���
    else if (nums[2].size() == 1)
    {
        return nums[1][0] * nums[1][1];
    }
    //4���� �� �ٸ� ���
    else
    {
        //4���� �� �� ���� ���� ���� ��ȯ
        return *min_element(nums[1].begin(), nums[1].end());
    }



    return answer;
}


void main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;

    cout << solution(a, b, c, d) << endl;

}
#endif // �ֻ��� ���� 3  vector�� emplace_back�� ��� // �ڵ��׽�Ʈ�� ���ط��� Ű�쵵������.

