#pragma once
#include<iostream>
#include <vector>
using namespace std;
#ifndef __SNACK_H__ 
#define __SNACK_H__
class Snack {
protected:
	string name;
	static int count;
public:
	Snack();
	static int get_count();
	virtual void show_info();
};
#endif;