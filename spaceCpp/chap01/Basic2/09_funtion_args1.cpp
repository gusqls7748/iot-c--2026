#include <iostream>
using namespace std;

// [1] 함수 선언 (Function Prototype)
void fun(int y);


int main() {
	int x = 10;
	fun(x);
	cout << "main 함수 내부의 x=" << x << endl;


	return 0;
}

void fun(int y) {
	y++;
	cout << "fun 함수 내부의 y=" << y << endl;
	return;

}