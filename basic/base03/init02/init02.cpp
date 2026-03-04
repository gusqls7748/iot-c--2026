// 객체 간의 관계 초기화 리스트
#include <iostream>

// 1. 단순한 좌표 정보를 가지는 클래스
class Position {
public:
	int m_x, m_y;
	// 생성자: 전달받은 x, y 값으로 멤버 변수를 초기화
	Position(int x, int y) { m_x= x, m_y= y;  }
};

// 2. 다른 객체(Position)를 멤버로 포함하는 클래스
class objSome {
public:
	Position p;						// 맴버로 객체를 가질 때 콜론 초기화
	// 3. 콜론 초기화(초기화 리스트)
	objSome(int x, int y) : p(x, y) {}
	void show() {
		printf("%d %d\n", p.m_x, p.m_y);
	}
};

int main() {

	// 4. objSome 객체 생성 (동시에 내부의 p 객체도 초기화됨)
	objSome os(10, 30);
	os.show();

	return 0;
}