//#include <iostream>
//using namespace std;
//
//class Time {
//private:
//	int m_hour;
//	int m_min;
//	int m_sec;
//public:
//	Time() {
//		cout << "기본 생성자 호출!!" << endl;
//	}
//
//	Time(int h, int m, int s) : m_hour(h), m_min(m), m_sec(s) {
//		cout << "3 input constructor!!" << endl;
//		//m_hour;
//		//m_min;
//		//m_max;
//	}
//	void showTime(int h, int m, int s) {
//		m_hour = h;
//		m_min = m;
//		m_sec = s;
//
//	}
//	void showTime() {
//		printf("현재시간은 %d:%d:%d 입니다\n", m_hour, m_min, m_sec);
//	}
//};
//
//int main() {
//	//Time now;
//	//now.setTime(16, 52, 30);
//	//now.showTime();
//
//	Time t1(16, 57, 33);
//	t1.showTime();
//	return 0;
//}