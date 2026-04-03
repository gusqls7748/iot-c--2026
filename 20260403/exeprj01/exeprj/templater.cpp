#include <iostream>
//using namespace std;

template<typename T>
void swap(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

int main() {
	//int a = 10, b = 20;
	char a = 'a', b = 'b';

	std::cout << "호출 전 a: " << a << ", b: " << b << std::endl;
	swap<char>(a, b);
	std::cout << "호출 후 a: " << a << ", b: " << b << std::endl;

	return 0;
}