#include <iostream>
#include <string>

//int main(void) {
//	
//	int val1;	// 변수 선언
//	std::cout << "첫 번째 숫자입력: ";	// 입력
//	std::cin >> val1;
//
//	int val2;	// 변수 선언
//	std::cout << "두 번째 숫자입력 "; // 입력
//	std::cin >> val2;
//	int result = val1 + val2;	
//	std::cout << "덧셈결과: " << result << std::endl;
//	return 0;
//}

//int main(void) {
//	int age;
//	std::string name;
//
//	std::cout << "이름과 나이를 입력하세요: " << std::endl;
//	std::cin >> name >> age;
//
//	//std::cout << "나이 입력: ";
//	//std::cin >> age;
//	// class는 하나의 타입(자료형)이다.
//
//	return 0;
//}

int main(void) {
	int val1, val2;
	int result = 0;

	std::cout << "두 개의 숫자입력: ";
	std::cin >> val1 >> val2;


	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++)
			result += i;
	}
	else {
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}
	std::cout << "두 수 사이의 정수 합: " << result << std::endl;

	return 0;
}