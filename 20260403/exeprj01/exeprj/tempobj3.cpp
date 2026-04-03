#include <iostream>


class Myclass {
	int n;
public:
	Myclass(int aa) : n(aa) {
		std::cout << this << " constructor " << std::endl;
	}
	~Myclass() {
		std::cout << this << " destructor " << std::endl;
	}
	Myclass(const Myclass& other) : n(other.n) {
		std::cout << this << " constructor " << std::endl;
	}
	void set(int aa) {
		n = aa;
		std::cout << "ser(" << n << ")" << std::endl;
	}

};

Myclass func(Myclass ob) { // 함수 인자 전달 (Myclass ob)
	std::cout << &ob << "func()" << std::endl;
	return ob;	//  함수 반환 (return ob)
}

int main() {


	Myclass obj(10);
	std::cout << std::endl;

	//Myclass obj1(func(obj));
	//Myclass obj2(obj);		//obj2는 복사생성자 호출로 객체가 생성된다.
	std::cout << std::endl;

	func(obj);
	std::cout << std::endl;

	std::cout << "bye~~" << std::endl;

	//Myclass obj1(func(obj));	// 객체 생성 (Myclass obj1(...))

	return 0;
}

// this를 쓴 이유: 객체마다 고유한 메모리 주소를 출력해서, "지금 생성된 게 아까 그놈인지, 새로 복사된 놈인지" 확인하기 위해서입니다.
// 복사 생성자의 오타: 코드에 Myclass(const Myclass& other) 내부 출력문이 constructor라고 되어 있는데, 구분하기 쉽게 **copy constructor**라고 적어주시면 흐름 파악이 더 쉬울 거예요!
// 파일러 최적화: 만약 실행했는데 생각보다 constructor가 적게 찍힌다면, 컴파일러가 "성능을 위해 불필요한 복사를 알아서 지웠구나"라고 이해하시면 됩니다. (요즘 C++의 특징이에요!)


