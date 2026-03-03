#include <iostream>
using namespace std;

class constSome {		// 상수맴버일때 초기화
public:
	const int value;
	constSome(int i) : value(i) {}		// 클론 초기화

	void show() { printf("value: %d\n", value); }
};

class refSome {			// 레퍼런스 맴버 초기화
public:
	int& ri;
	refSome(int &i): ri(i) {}

	void show() { printf("ri: %d\n", ri); }
};

int main() {
	constSome cs(10);
	cs.show();

	int i = 5;
	refSome rs(i);
	return 0;
}