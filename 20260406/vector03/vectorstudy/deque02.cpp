#include<iostream>
#include<deque>
//#include<string>

int main() {

	std::deque<std::string> dq;		//dq객체 생성

	dq.push_front("tiger");
	dq.push_front("lion");
	dq.push_back("cats");

	std::deque<std::string>::iterator it;
	for (it = dq.begin(); it != dq.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::deque<std::string>::const_iterator constiter = dq.begin();		// 반복자가 가리키는 위치 변경 불가
	constiter += 2;						// const int* pa = &pa;
	dq.insert(constiter, 2, "INSERT");
	for (constiter = dq.begin(); constiter != dq.end(); constiter++) {
		std::cout << *constiter << " ";
	}
	std::cout << std::endl;

	constiter = dq.end();					
	constiter--;		// 마지막 원소
	constiter--;		// 마지막 앞 원소
	dq.erase(constiter);
	for (constiter = dq.begin(); constiter != dq.end(); constiter++) {
		std::cout << *constiter << " ";
	}

	for (auto element : dq) {				// 복사 사용
		std::cout << element << " ";
	}
	std::cout << std::endl;

	for (auto& element : dq) {				// 참조 사용
		std::cout << element << " ";
	}
	std::cout << std::endl;

	//int a = 10;
	//int b = 20;
	//const int* pa = &a;		// 데이터 상수- 포인터 간접참조로 데이터를 변경하지마라
	//int* const pb = &b;		// 포인터 변수 상수 - 포인터에 다른변수에 주소로 변경하지마라


	//*pa = 100;
	//pa = &b;

	//const int c = 10;
	



	return 0;
	
}