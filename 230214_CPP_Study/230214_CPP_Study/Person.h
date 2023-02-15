#pragma once
#include<iostream>
using namespace std;

#ifndef __PERSON_H__ // if not define : __PERSON_H__ �� ���ǵǾ� ���� �ʴٸ�
#define __PERSON_H__ // __PERSON_H__ �� �����Ѵ�. #endif�� ������ �������� ������

class Person {
protected:
	string name;
	static int count; 
public:
	static void static_method();
	static int get_count();
	Person();
	virtual ~Person();
	virtual void info();
	void set_name(string name);
	string get_name();
};
#endif;