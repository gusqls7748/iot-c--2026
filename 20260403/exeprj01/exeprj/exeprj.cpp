#include <iostream>
using namespace std;

// 1. 함수 템플릿: swap (두 값을 서로 바꿈)
template <typename T>
void mySwap(T& a, T& b) { // 참조자를 써야 원본이 바뀝니다.
    T temp = a;
    a = b;
    b = temp;
}

// 클래스 템플릿
template<typename T>
class A {
    T num; // int 대신 T를 써야 진정한 템플릿 클래스가 됩니다.
public:
    A(T data) : num(data) {}
    void print() { cout << num << endl; }
};

// 함수 템플릿: Add
template<typename T, typename T1>
T Add(T a, T1 b) {
    return a + b;
}

int main() {
    // swap 테스트
    int x = 10, y = 20;
    cout << "Before swap: " << x << ", " << y << endl;
    mySwap(x, y); // 컴파일러가 타입을 추론해서 알아서 처리해줍니다.
    cout << "After swap: " << x << ", " << y << endl;

    double d1 = 1.1, d2 = 2.2;
    mySwap(d1, d2); // double도 똑같은 함수로 가능! (다형성)
    cout << "Double swap: " << d1 << ", " << d2 << endl;

    // 기존 코드
    double res = Add<double>(10.1, 20.1);
    cout << "Add res: " << res << endl;

    A<int> a(10);
    A<double> d(10.1);

    return 0;
}

//#include <iostream>
//using namespace std;
//
//// 클래스 생성
//template<typename T>		// 클래스 템플릿
//class A {
//	int num;
//public:
//	A(int data) : num(data) {}
//};
//
//
////template 쓰는 이유 다형성 떄문에 쓴다.
//template<typename T, typename T1>	// 함수템플릿
//T Add(T a, T1 b) {
//	return a + b;
//}
//
//int main() {
//	double res = Add<double>(10.1, 20.1);
//
//	cout << res << endl;
//
//
//	A<int> a(10);
//	A<double> d(10.1);
//
//	return 0;
//}