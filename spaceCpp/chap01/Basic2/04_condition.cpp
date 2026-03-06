// 조건문
#include <iostream>
using namespace std;

//	if문
// 주의할 점 작은 범위 부터 해라
int main() {
	int month;

	cout << "(태어난 달을 입력하세요) ";		// 입력받는거
	cin >> month;								// 출력한는것

	if (month >= 3 && month <= 5) {		// 3이상 5이하 = 봄 
		cout << "봄" << endl;
	}
	else if (month >= 6 && month <= 9) {// 6이상 9이하 = 여름
		cout << "여름" << endl;
	}
	else if (month >= 10 && month <= 11) { // 10 이상 11이하 = 가을
		cout << "가을" << endl;
	}
	else if (month == 12 || month == 1 || month == 2) { // ||(파이프라인) or의 역활을 한다 보면 된다. 
		cout << "겨울" << endl;
	}
	else{
		cout << "잘못된 예입니다." << endl;
	}
	// return 0;

	// swich case문
	switch(month) {
	case 3:	case 4: case 5:
		cout << "봄" << endl;
		break;

	case 6:	case 7: case 8:
		cout << "여름" << endl;
		break;

	case 9:	case 10: case 11:
		cout << "가을" << endl;
		break;

	case 12:	case 1: case 2:
		cout << "겨울" << endl;
		break;
	}

	return 0;
}

