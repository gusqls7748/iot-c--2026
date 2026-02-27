// base03.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 오버로딩: 
// 오버라이딩:


#include <iostream>

int main()
{
    char name[100]; // 배열 선언
    char lang[200];
    std::cout << "이름이 무엇입니까? ";
    std::cin >> name;
    std::cout << "좋아하는 프로그래밍 언어는 무엇인가요?";
    std::cin >> lang;
    std::cout << "내 이름은" << name << "입니다.\n";
    std::cout << "제일 좋아하는 언어는 " << lang << "입니다." << std::endl;

    return 0;
}


