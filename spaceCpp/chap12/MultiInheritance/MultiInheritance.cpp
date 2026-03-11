#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"

using namespace std;

class STUDENT : virtual public Person {
protected:
	double gpa;
public:
	STUDENT(string name, double gpa);
	~STUDENT();
	void print();

};

#endif

// ctrl + k + d 자동정렬