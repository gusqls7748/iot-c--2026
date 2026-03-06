#include <iostream>
#include <iomanip> // setw를 쓰기 위해 필요해요!

using namespace std;

int main() {
    // i는 시작 단 (2단, 5단, 8단 ...)
    for (int i = 2; i < 10; i += 3) {
        
        // j는 곱해지는 수 (1~9)
        for (int j = 1; j <= 9; j++) {
            
            // k는 현재 줄에서 출력할 3개의 단 (0, 1, 2를 더함)
            for (int k = 0; k < 3; k++) {
                int dan = i + k;
                
                // 10단 이상은 출력하지 않도록 체크
                if (dan < 10) {
                    cout << dan << " * " << j << " = " << setw(2) << dan * j << "\t";
                }
            }
            cout << endl; // 한 줄(j)이 끝나면 줄바꿈
        }
        cout << endl; // 3개 단 세트가 끝나면 한 줄 더 띄우기
    }

    return 0;
}