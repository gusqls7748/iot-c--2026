#include <iostream>
using namespace std;

void change_val(int& n);	// 참조 매개 변수;

int main() {
	int num = 10;
	cout << num << endl;

	change_val(num);
	cout << "변경 후: " << num << endl;

	return 0;
}

// 추가해야 할 부분: 함수의 실제 정의(Body)
void change_val(int& n) {
	n = 20; // 참조를 통해 main의 num 값을 직접 수정
}