/*변환생성자: 인자를 단 하나가지는 생성자*/
#include <iostream>

class Time {
	// 맴버 변수 초기화 리스트를 사용하여 기본값 설정
	int hour{ 0 };
	int min{ 0 };
	int sec{ 0 };
public:				// 변환생성자
	// 1. 기본 생성자: 인자가 없을 때 호출됨
	Time() {};
	// 2. 변환 생성자: 인자를 하나만 받는 생성자
	Time(int abssec) {
		hour = abssec / 3600;
		min = (abssec / 60) % 60;
		sec = abssec % 60;
	}
	void outTime() {
		printf("입력한 시간은 %d시 %d분 %d초 입니다\n", hour, min, sec);
	}
};

int main() {

	// 직접 호출 방식
	Time now(4372);
	now.outTime();

	// 기본 생성자 호출
	Time t;
	t.outTime();

	return 0;
}