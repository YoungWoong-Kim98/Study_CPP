#include<iostream>
#include<vector>
#include "Snack.h"
using namespace std;

int Snack::count = 0;
Snack::Snack() { count++; }
int Snack::get_count() { return count; }
void Snack::show_info() { cout << "출력출력" << endl; }