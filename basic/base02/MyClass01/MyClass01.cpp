///* C++ 클래스 */
//#define _CRT_SECURE_NO_WARNINGS // strcpy 같은 구형 함수의 보안 경고를 끌려고
//
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int id;
//	char name[20];
//	int age;
//
//public:
//	void setData(int aid, const char* aname, int aage) {
//		id = aid;
//		strcpy(name, aname);
//		age = aage;
//	}
//	void getData() {
//		std::cout << "id: " << id << ", name: " << name << ", age: " << age << std::endl;
//	}
//};
//
//
//int main(){
//
//	MyClass obj;				// 디폴트 생성자 호출. MyClass obj(): 함수호출
//	obj.setData(001, "hong", 22);
//	//MyClass obj1(001, "hong", 22);
//
//	obj.getData();
//
//	return 0;
//}