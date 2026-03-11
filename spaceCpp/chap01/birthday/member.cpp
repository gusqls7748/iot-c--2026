#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Member {
private:
	std::string name;
	int age;

public:
	void inputInfo(int index) {
		cout << index + 1 << " 번째 맴버 이름";
		cin >> name;
		cout << index + 1 << " 번째 맴버 나이";
		cin >> age;
	}

	void showinfo() {
		cout << "이름: " << name << ", 나이: " << age << endl;
	}
};

int main() {
	int count = 3; // 입력받은 맴버 수
	vector<Member> members(count); // Member 객체 3개를 담는 백터 생성

	// 1. 반복문을 통한 자동 입력받은
	cout << "-- 정보입력 시작 --" << endl;
	for (int i = 0; i < count; i++) {
		members[i].inputInfo(i);
	}

	// 결과 확인
	cout << "\n---입력된 맴버 리스트---" << endl;
	for (int i = 0; i < count; i++) {
		members[i].showinfo();
	}

	return 0;
}