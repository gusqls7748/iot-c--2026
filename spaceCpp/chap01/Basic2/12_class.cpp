/*************************************************************
 * 객체 지향 프로그래밍에서 클래스를 사용하는 프로그램       *
 *************************************************************/
#include <iostream>
using namespace std;

/************************************************************
 * 클래스 정의                                              *
 * 데이터 멤버와 멤버 함수를 선언                           *
 ************************************************************/
class Circle
{
private:
    static double radius;
public:
    double getRadius() const { return radius; } // Getter: 값을 읽기만 하므로 const가능
    void setRadius(double r)  { radius = r; }   // Setter: 갚을 수정해야 하므로 const 제거
    // 일반 맴버 함수: radius에 접근해야 하므로 static 제거
    static double getAreaOfcircle() {
        return radius * radius * 3.14; // static은 같은 static끼리만
    }
};
double Circle::radius = 0.0;

int main() {
    Circle c1;
    c1.setRadius(10.0);
    cout << "반지름: " << c1.getRadius() << endl;
    //함수 호출 시 반드시 ()를 붙여야함

    cout << "넓이: " << c1.getRadius() << endl;
   
}