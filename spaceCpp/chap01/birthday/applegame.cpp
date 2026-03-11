#include <iostream>
#include <vector>
#include <ctime>	// 랜덤 숫자를 우ㅟ한 시간 헤더
#include <cstdlib> // rand() 함수를 위한 헤더

using namespace std;	// std 스킵해도되는것

// 게임판의 크기 설정 ( 5 * 5로 설정)
const int Row = 5;
const int Col = 5;

int main() {
	//1. 랜덤 시드 초기화(실행할 떄마다 숫자가 바뀌게함
	srand(time(NULL));

	//2. 2차원 배열(게임판) 생성 및 1~9 사이의 랜덤 숫자 채우기
	int board[Row][Col];

	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Col; j++) {
			board[i][j] = rand() % 9 + 1; // 1부터 9까지의 난수 생성
		}
	}

	cout << "---[C++ 콘솔 사과게임]---" << endl;
	cout << "두 사과의 좌표를 입력해서 합이 10이 되면 지워진다." << endl;

	while (true) {
		//3. 현재 게임판 상태 화면 출력
		cout << "\n  0 1 2 3 4 (열)" << endl;
		for(int i = 0; i < Row; i++) {
			cout << i << " | "; // 행 번호 출력
			for (int j = 0; j < Col; j++) {
				if (board[i][j] == 0)cout << ". "; // 지워진 사과는 마침표로 표시
				else cout << board[i][j] << " ";
			}
			cout << endl;
		}

		//4. 사용자로부터 좌표 2개 입력하기 (행 열 순서)
		int r1, c1, r2, c2;
		cout << "\n 첫 번쨰 사과 좌표(행 열): ";
		cin >> r1 >> c1;
		cout << "\n 두 번쨰 사과 좌표(행 열): ";
		cin >> r2 >> c2;

		// 좌표 유효성 검사 (판을 벗어나지 않았는지)
		if (r1 < 0 || r1 >= Row || c1 < 0 || c1 >= Col ||
			r2 < 0 || r2 >= Row || c2 < 0 || c2 >= Col) {
			cout << "잘못된 좌표 입니다. 다시 입력하세요." << endl;
			continue;
		}

		// 5. 합이 10인지 검사 로직
		int sum = board[r1][c1] + board[r2][c2];

		if (sum == 10 && (r1 != r2 || c1 != c2)) {
			cout << "성공! 합이 10입니다." << endl;
			board[r1][c1] = 0; // 사과 제거 (0으로 변경)
			board[r2][c2] = 0;
		}
		else {
			cout << "실패! 합이 " << sum << "입니다. 다시 생각해보세요." << endl;
		}
	}

	return 0;
}