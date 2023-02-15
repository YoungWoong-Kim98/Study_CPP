#pragma once
#include<iostream>
#include "Person.h"
using namespace std;

#ifndef __STUDENT_H__
#define __STUDENT_H__
class Student : public Person {
	string stu_id;
public:
	~Student();
	void info();
	void test();
};
#endif
