#include <iostream>
#include <thread>

//멀티 프로세스 여러개의 프로그램이 실행되는것
//멀티 스레드 하나의 프로그램이 여러 작업을 동시 수행

void work() {
	for (int i = 0; i <= 20; i++) {
		std::cout << "작업 스레드: " << i << std::endl;
	}
}

int main() {

	std::thread t(work);		// work 함수를 새 스레드에서 실행하겠다.
	//work();

	for (auto i = 1; i <= 20; i++) {
		std::cout << "메인 스레드: " << i << std::endl;
	}

	t.join();

	return 0;
}