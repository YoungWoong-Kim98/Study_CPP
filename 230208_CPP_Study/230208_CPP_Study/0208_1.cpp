// struct 구조체 (기본적으로 public)
#include<iostream>
struct Position {
	int x;
	int y;
};

using namespace std;

namespace ns {
	int x;
	int y;
}

int main(){
	// int, double, std::string
	/*Position p;
	p.x = 3;
	p.y = 4;*/

	Position p;
	Position p2;
	Position p3;

	p.x = 5;
	p2.x = 6;

	ns::x = 5;


	return 0;
}