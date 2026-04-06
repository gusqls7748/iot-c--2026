#include <iostream>
#include <vector> 


using namespace std; //충돌 일어날수 있어서 잘 안씀 (혼자 있을때씀)

int main() {
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	/* 출력: 일반적이고 간결한 형태*/

	for(auto i = 0; i < v.size(); i++){
		cout << v[i] << " ";
		cout << v.at(i) << " "; // 원소들을 안전하게 쓸수있다.
	
	}
	cout << endl;

	/* 출력: vector 크기를 나타내는 표준화된 부호없는 정수 타입*/ /*int 타입의 사이즈를 꺼낸다*/
	for (vector<int>::size_type i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
		cout << v.at(i) << " ";

	}

	cout << endl;

	/*출력: 범위기반 for*/
	for (auto i : v) {
		cout << i << " ";
	}
	cout << endl;

	/* 출력 vector 컨테이너의 반복자 사용하기*/
	/*포인터를 써서 값을 가져온다*/
	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}

	return 0;

}