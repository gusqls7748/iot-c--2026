#include <iostream>


class Myclass {
	int n;
public:
	Myclass(int aa) : n(aa) {
		std::cout << n << " constructor " << std::endl;
	}
	~Myclass() {
		std::cout << n << " destructor " << std::endl;
	}
	void set(int aa) {
		n = aa;
		std::cout << "ser(" << n << ")" << std::endl;
	}

};

int main() {

	//Myclass* obj 1 = &Myclass(10);
	//Myclass& obj 1 = Myclass(10);

	Myclass obj = Myclass(10);
	obj.set(22);

	const Myclass& obj1 = Myclass(30);		// 임시객체를 상수로 참조하면 가능하다.
	//obj1.set(30);

	Myclass&& obj2 = Myclass(40);			// 정상적인 형태로 이름없는 객체를 rvalue 취급
	obj2.set(44);

	std::cout << "bye~~" << std::endl;

	return 0;
}

//1. 생성자(Constructor)
//역할: 객체가 태어날 때(메모리에 올라갈 때) 딱 한 번 호출되는 함수입니다.
//특징 : 주로 멤버 변수를 초기화하는 용도로 씁니다. : n(aa)처럼 쓰는 '초기화 리스트'가 대입 방식보다 성능이 더 좋습니다.
//2. 소멸자(Destructor)
//역할 : 객체가 수명을 다해 죽을 때(메모리에서 사라질 때) 자동으로 호출됩니다.
//특징 : 빌렸던 메모리를 반납하거나 파일을 닫는 등 '뒷정리'를 담당합니다.함수 이름 앞에 ~가 붙습니다.
//3. 복사 생성자(Copy Constructor)
//역할 : 이미 존재하는 객체를 복사해서 새로운 객체를 만들 때 호출됩니다.
//특징 : Myclass(const Myclass & other) 형태로 쓰며, 다른 객체의 값을 그대로 가져와서 내 것으로 만듭니다.
//4. 임시 객체(Temporary Object)
//역할 : Myclass(30)처럼 이름 없이 잠깐 만들어졌다 사라지는 객체입니다.
//특징 : 보통 그 줄(Statement)이 끝나면 바로 소멸하지만, 참조(&나&&)를 사용하면 수명을 강제로 늘릴 수 있습니다.
//5. 상수 참조(const&)와 우측값 참조(&&)
//const& : 이름 없는 객체를 "읽기 전용"으로 붙잡아 수명을 연장합니다. (수정 불가능)
//&& (R - value 참조) : 이름 없는 객체를 "수정 가능"하게 붙잡아 수명을 연장합니다.성능 최적화(데이터 이동)를 위해 주로 씁니다.