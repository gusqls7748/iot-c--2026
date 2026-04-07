#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void worker_inc(int& num) {
	std::lock_guard<std::mutex> lock(mtx);
	for (int i = 0; i < 10000; i++) {
		num += 1;
	}
}

void worker_des(int& num) {
	std::lock_guard<std::mutex> lock(mtx);
	for (int i = 0; i < 10000; i++) {
		num -= 1;
	}
}

int main() {
	int count = 0;

	std::thread t(worker_inc, std::ref(count));
	std::thread t2(worker_des, std::ref(count));


	//worker_inc(count);
	

	t.join();
	t2.join();

	std::cout << "count: " << count << std::endl;


	return 0;
}