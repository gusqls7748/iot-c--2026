#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 9; i++) {
		cout << "___" << i << "___" << endl;

		for (int j = 1; j <= 9; j++) {
			cout << i << " * " << j << " = " << i * j <<endl;
		}
		cout << endl;	// 띄워쓰기
	}
	return 0;
}


