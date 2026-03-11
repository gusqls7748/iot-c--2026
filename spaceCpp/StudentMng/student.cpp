/**************************************************************
 * Student Ŭ������ ���� ����                                 *
 **************************************************************/
#include "student.h"

 // ������
Student::Student(string nm)
	:name(nm)
{
	schedule = new StudentSchedule;
}
// �Ҹ���
Student::~Student()
{
}
// getName �Լ��� ����
string Student::getName() const
{
	return name;
}
// getSchedule �Լ��� ����
StudentSchedule* Student::getSchedule() const
{
	return schedule;
}
// addCourse �Լ��� ����  
void Student::addCourse(string name)
{
	schedule->addCourse(name);
}
// print �Լ��� ����
void Student::print() const
{
	cout << "�л� �̸�: " << name << endl;
	schedule->print();
}