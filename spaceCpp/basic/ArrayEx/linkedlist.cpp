#include <list>
#include <iostream>
using namespace std;

int main() {
    list<int> l;  //LinkedList

    // 선형구조로 데이터를 저장함에 있어 중간에 삽입과 삭제가 빈번히 일어나는 경우, 배여로다 연결리스트가 더 효윻적

    l.push_back(10);
    l.push_front(5);

    for (int x : l) {
        cout << x << endl;
    }
}