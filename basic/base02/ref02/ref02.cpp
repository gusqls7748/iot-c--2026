#include <iostream>
using namespace std;

int main() {
	int num = 10;			// 실제 데이터를 저장하는 변수
	int& ref = num;			// 참조자 선언
	int* pnum = &num;		// 포인터 선언

	num++;		// 11 num값이 10에서 11로 증가
	ref++;		// 12 ref를 통해서  num의 값이 11에서 12로 증가
	(*pnum)++;	// 13 포인터 접근 : pnum이 가르키는 주소로 가서 그값을 12에서 13으로 증가

	cout << "num: " << num << endl;		// 결과: 13
	cout << "ref: " << num << endl;		// 결과: 13(ref는 num 그자체이므로)
	cout << "*pnum: " << num << endl;	// 결과: 13(pnum이 가르키는 곳의 값)
	
	cout << "&num: " << &num << endl;	// num의 실제 주소
	cout << "&ref: " << &ref << endl;	// num의 주소와 동일
	cout << "&ref: " << pnum << endl;	// num의 주소와 동일


	return 0;
}