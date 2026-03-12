#include <set>
#include <iostream>
using namespace std;

int main() {
    // 순서가 없는 집합 자료구조, 중복된 원소를 허용하지 않음
    set<int> s;

    s.insert(10);
    s.insert(10);
    s.insert(20);

    for (int x : s)
        cout << x << endl;

    // 값찾기(find()를 쓴다.
    if (s.find(10) != s.end()) {
        cout << "10이 존재합니다." << endl;
    }
    if (s.find(30) == s.end()) {
        cout << "30이 존재하지 않습니다." << endl;
    }

    set<int, greater<int>> s2; // 내림차순 정렬
    s2.insert(10);
    s2.insert(20);
    s2.insert(30);

    for (int x : s2)
        cout << x << endl;

    // 벡터에서 set으로 변환
    //vector<int> v = { 3, 1, 2, 2, 5 };
}