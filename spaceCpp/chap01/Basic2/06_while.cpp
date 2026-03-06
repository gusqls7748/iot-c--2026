// 랜덤 숫자 맞추기 게임
// 1. 랜덤 숫자 생성 1~ 100까지
// 2. number
// 3. 비교
// 4. 결과 보여주기
//	1) 맞으면 exit
//  2) 크면 메세지
//  3) 작으면 메세지
// break는 반복문만
#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main() {
	srand(time(0));
	//cout << showpoint << rand() % 100 + 1 << endl;
	int num = rand() % 100 + 1;
	int guess = 0;
	int count = 0;
	//cout << num << endl;

	cout << "=== 숫자 맞추기 (1~100) ===" << endl;

	// 2. while문으로 반복
	while (true) {
		cout << "숫자를 입력하세요";
		cin >> guess;
		count++;

	// 3. 비교 및 4 결과 보여주기
	if (guess < num) {
		cout << "더 큰 숫자를 입력하세요다" << endl;
	}
	else if (guess > num) {
		cout << "더 작은 숫자를 입력하세요" << endl;
	}
	else {
		cout << "정답입니다!" << endl;
		cout << count << "번 만에 맞췄습니다." << endl;
		break;
		}
	}


	return 0;
}