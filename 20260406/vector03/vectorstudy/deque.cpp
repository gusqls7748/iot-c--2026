#include <iostream>
#include <deque>

int main()
{
	std::deque<int> dq;		//dq 객체 생성

	for (int i = 1; i <= 5; i++) {
		dq.push_back(i * 10);
	}

	std::deque<int>::iterator it;
	for (it = dq.begin(); it != dq.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	dq.push_front(1);	// 앞쪽에 삽입
	dq.push_front(2);
	dq.push_back(100);	// 뒤쪽에 삽입
	dq.push_back(200);

	for (it = dq.begin(); it != dq.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::deque<int>::reverse_iterator rit;	// 역방향 반복자 선언
	for (rit = dq.rbegin(); rit != dq.rend(); rit++) {
		std::cout << *rit << " ";
	}
	std::cout << std::endl; // 줄바꿈

	return 0;
}