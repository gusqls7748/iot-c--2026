#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

class Member {
private:
	int id;
	string name;
	string phone;
	string email;
public:
	Member(int id, string name, string phone, string email) {
		this->id = id;
		this->name = name;
		this->email = email;
	}
	int getId() { return id; }
	string getName() { return name; }
	string getPhone() { return phone; }
	string getemail() { return email; }
	void setName(string name) { this->name = name; }
	void setName(string phone) { this->phone = phone; }
	void setName(string email) { this->email = email; }

	void input() {
		cout << "ID: ";
		cin >> id;
		cout << "Name: ";
		cin >> name;
		cout << "Phone: ";
		cin >> phone;
		cout << "Email: ";
		cin >> email;
	}

	// 수정
	void update() {
		cout << "new Name: ";
		cin >> name;
		cout << "new Phone: ";
		cin >> phone;
		cout << "new Email: ";
		cin >> email;
	}

	// setw 출력조정자
	void print() {
		cout << left << setw(10) << id
			<< left << setw(20) << name
			<< left << setw(15) << phone
			<< left << setw(30) << email << endl;
	}

};

class MemberManager {
private:
	vector<Member> members;
public:
	bool exists(int id) {
		for (auto& m : members) {
			if (m.getId() == id) return true;
		}
		return false;
	}
	void addMember() {
		Member m(0, "", "", "");
		m.input();
		if (exists(m.getId())) {
			cout << "이미 존재하는 ID입니다. 등록 실패.\n";
			return;
		}
		members.push_back(m);
		cout << "회원 등록 성공\n";
	}
};


int main() {
	char menu;

	while (true) {
		cout << "\n==========회원관리==========\n";
		cout << "1. 등록\n";
		cout << "2. 전체조회\n";
		cout << "3. 검색\n";
		cout << "4. 수정\n";
		cout << "5. 삭제\n";
		cout << "Q. 종료\n";
		cout << "메뉴 선택: ";
		cin >> menu;
		
		switch (menu) {
		case '1':
		cout << "등록 메뉴 선택\n";
		// 등록기능 구현
		break;
		case '2':
			cout << "전체조회 메뉴 선택\n";
			// 등록기능 구현
			break;
		case '3':
			cout << "검색 메뉴 선택\n";
			// 등록기능 구현
			break;
		case '4':
			cout << "수정 메뉴 선택\n";
			// 등록기능 구현
			break;
		case '5':
			cout << "삭제 메뉴 선택\n";
			// 등록기능 구현
			break;
		case 'Q':
		case 'q':
			cout << "프로그램 종료\n";
			return 0;
		default:
			cout << "잘못된 메뉴 선택입니다. 다시 선택해주세요.\n";
			// 등록기능 구현
			
		}
	}
	return 0;

}