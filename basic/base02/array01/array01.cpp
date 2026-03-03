// c 구조체
#define _CRT_SECURE_NO_WARNINGS // strcpy 같은 구형 함수의 보안 경고를 끌려고

#include <iostream>
using namespace std;

int main() {
	char name[20] = "홍길동"; // 선언과 동시에 초기화(배열 크기 20)

	char name1  [20]; // (x) - 배열이름은 주소값(상수)라서 직접 대입이 안된다
	char cp_name[20]; // (x) - 배열끼리도 통째로 대입할 수 없다.

	// strcpy(대상, 원본) 사용
	//name1 = "김영희"
	//cp_name = name1;
	strcpy(name1, "hong"); // 문자열을 복사하기 위해서는 반드시 strcpy같은 함수를 써야한다.

	cout << "name1: " << name1 << endl;
	//cout << "cp_name: " << endl;

	// 사용자로 부터 문자열 입력 받기
	char name2[20];
	cout << "이름을 입력하세요: ";
	cin >> name2;	// cin은 공백(스페이스)까지만 입력받는다
	cout << "당신의 이름은 " << name2 << "입니다" << endl;

	return 0;
}
