/* 상수참조자 레퍼런스 */
#include <iostream>
using namespace std;

int main() {
	//int& ref = 4;
	const int& ref = 4;	// 상수

	cout << "ref: " << ref << endl;

	return 0;
}