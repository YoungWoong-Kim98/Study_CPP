#pragma once
#include<iostream>
using namespace std;

#ifndef __PERSON_H__ // if not define : __PERSON_H__ 가 정의되어 있지 않다면
#define __PERSON_H__ // __PERSON_H__ 를 정의한다. #endif가 나오기 전까지의 내용을

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