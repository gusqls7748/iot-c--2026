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
	string getEmail() { return email; }
	void setName(string name) { this->name = name; }
	void setPhone(string phone) { this->phone = phone; }
	void setEmail(string email) { this->email = email; }

	void input() {
		cout << "ID (숫자만 입력) : ";
		cin >> id;
		cout << "Name: ";
		cin >> name;
		cout << "Phone(붙여서 쓰십시오) : ";
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
	void loadFromFile() {
		ifstream inFile("members.txt");
		if (!inFile) {
			cout << "저장된 회원의 정보가 없습니다.\n";
			return;
		}
		int id;
		string name, phone, email;
		while (inFile >> id >> name >> phone >> email) {
			members.emplace_back(id, name, phone, email);
		}
		inFile.close();
	}
	void saveToFile() {
		ofstream outFile("members.txt");
		for (auto& m : members) {
			outFile << m.getId() << " " << m.getName() << " "
				<< m.getPhone() << " " << m.getEmail() << endl;
		}
		outFile.close();
	}
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
	void viewMembers() {
		if (members.empty()) {
			cout << "등록된 회원이 없습니다.\n ";
			return;
		}
		cout << left << setw(10) << "ID"
			<< left << setw(15) << "Name"
			<< left << setw(15) << "Phone"
			<< left << setw(25) << "Email" << endl;
		cout << string(65, '-') << endl;
		for (auto& m : members) {
			m.print();
		}
	}
	void searchMember() {
		if (members.empty()) {
			cout << "등록된 회원을 검색할 수 없습니다.\n";
			return;
		}

		int searchId;	// 아이디 찾을 변수
		cout << "검색할 회원의 ID를 입력하세요: ";
		cin >> searchId;

		bool found = false;
		for (auto& m : members) {
			if (m.getId() == searchId) {	// 받은거랑 같으면 값을 나타낸다.
				cout << left << setw(10) << "ID"
					<< left << setw(15) << "Name"
					<< left << setw(15) << "Phone"
					<< left << setw(25) << "Email" << endl;
				cout << string(65, '-') << endl;
				m.print();
				found = true;
				break; // 고유값이므로 찾으면 바로 반복문 종료
			}
		}

		if (!found) {
			cout << "ID가" << searchId << "인 회원을 찾을수 없습니다.\n";
		}
	}

	void updateMember() {
		if (members.empty()) {
			cout << "등록된 회원이 없어 수정할 수 없습니다.\n";
			return;
		}

		int updateId; // 업데이트 할 아이디 변수
		cout << "수정할 회원의 ID를 입력하세요.";
		cin >> updateId;

		bool found = false;
		for (auto& m : members) {
			if (m.getId() == updateId) {
				cout << "현재 회원 정보\n";
				m.print();	// 수정전 정보를 보여줌

				cout << "새로운 정보를 입력하세요.\n";
				m.update();	// member 클래스에서 만든 update 호출

				cout << "회원 정보 수정되었습니다.\n";
				saveToFile(); // 수정 후 파일에 바로 저장
				found = true;
				break;
			}
		}
		if (!found) {
			cout << "ID가" << updateId << "인 회원을 찾을수 없습니다.\n";
		}

	}
	void deleteMember() {
		if (members.empty()) {
			cout << "등록된 회원이 없어 삭제할 수 없습니다.\n";
			return;
		}

		int deleteId;
		cout << "삭제할 회원의 ID를 입력하세요: ";
		cin >> deleteId;

		//auto iterator를 이용하요 해당 ID를 가진 회원을 찾습니다.
		for (auto it = members.begin(); it != members.end(); ++it) {
			if (it->getId() == deleteId) {
				cout << it->getName() << " 회원의 정보를 삭제합니다.\n";

				// erase 함수로 해당 위치의 데이터를 삭제합니다.
				members.erase(it);

				cout << "삭제가 완료되었습니다.\n";
				saveToFile(); // 삭제 후 파일에도 반영!
				return; // 삭제 후 함수 종료
			}
		}

		cout << "ID가 " << deleteId << "인 회원을 찾을 수 없습니다.\n";
	}
};
int main() {
	MemberManager manager;
	manager.loadFromFile();
	char menu;

	while (true) {
		cout << "\n===============회원관리===============\n";
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
			manager.addMember();
			break;
		case '2':
			cout << "전체조회 메뉴 선택\n";
			// 전체조회 기능 구현
			manager.viewMembers();
			break;
		case '3':
			cout << "검색 메뉴 선택\n";
			// 검색기능 구현
			manager.searchMember();
			break;
		case '4':
			cout << "수정 메뉴 선택\n";
			// 수정기능 구현
			manager.updateMember();
			break;
		case '5':
			cout << "삭제 메뉴 선택\n";
			// 삭제기능 구현
			manager.deleteMember();
			break;
		case 'Q':
		case 'q':
			manager.saveToFile();
			cout << "프로그램 종료\n";
			return 0;
		default:
			cout << "잘못된 메뉴 선택입니다. 다시 선택해주세요.\n";
			// 등록기능 구현

		}
	}
	return 0;

}
