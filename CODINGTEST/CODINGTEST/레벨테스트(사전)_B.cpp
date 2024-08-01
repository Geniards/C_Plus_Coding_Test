#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <random>
#include <sstream>
using namespace std; // 선언하지 않으면 fixed 에서 오류가 납니다

// 수열과 구간 쿼리 1
vector<int> solution(vector<int> arr, vector<vector<int>> queries)
{
    vector<int> answer;

    for (int i = 0; i < queries.size(); i++)
    {
        for (int j = queries[i][0]; j <= queries[i][1]; j++)
        {
            arr[j]++;
        }
    }
    answer = arr;

    for (auto i : answer)
        cout << i << endl;

    return answer;
}


void main()
{

    vector<int> a = { 1, 2, 3, 4, 5 };
    vector<vector<int>> b = { {2, 4} };
    int c = 12;

    //cout << solution(a, b) << endl;
    solution(a, b);

}




/**
* 


*/


/**
* 

다음의 조건을 충족하는 MyDictionary<TKey, TValue> 클래스를 구현하시오

Dictionary<TKey, TValue> 클래스의 사용을 금지하며,
배열을 사용해 구현한다.

클래스의 인스턴스 생성 시 최초 193의 크기를 가진다.

---------------------------------------------------------------

충돌이 발생하는 경우 
선형탐사를 통해 충돌상황을 해결한다.

공간 사용률이 70%를 넘기는 경우 
재해싱 과정을 진행한다.

아래 필수 구현 메서드 외 내부 동작을 위한 필드 및 메서드 추가는 허용한다.

구현 메서드

Add(TKey key, TValue value) : 지정한 키를 기준으로 값을 추가한다.
Remove(TKey key) : 지정한 키를 기준으로 값을 찾아 삭제한다.
Contains(TKey key) : 지정한 키를 기준으로 값이 포함되어 있는지 확인한다.


 */


