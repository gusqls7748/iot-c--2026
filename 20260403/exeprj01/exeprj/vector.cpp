#include <iostream>
#include <vector>

//vector의 역활

using namespace std;

int main() {
	vector<int> v;							// 크기가 0인 백터
	vector<int> v1(10);						// 크기가 10인 벡터
	vector<int> v2 = { 1, 2, 3, 4, 5 };		// 크기가 5인 벡터

	cout << "v size: " << v.size() << endl;
	cout << "v1 size: " << v1.size() << endl;
	cout << "v2 size: " << v2.size() << endl;

	cout << "v1 백터객체의 메모리크기: " << sizeof(v1) << endl;
	cout << "v2 백터객체의 메모리크기: " << sizeof(v2) << endl;
	cout << "v 백터객체의 메모리크기: " << sizeof(v) << endl;

	//cout << "v[0]: " << v[0] << endl;

	for (auto i : v2) {
		//cout << i << endl;
		cout << i << endl;
		cout << v2[i] << endl;
		cout << endl;
	}



	return 0;

}