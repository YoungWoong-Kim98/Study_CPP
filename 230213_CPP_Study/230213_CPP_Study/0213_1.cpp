#include<iostream>
#include<string>

using namespace std;

class Person {
protected:
    string name;
public:
    virtual ~Person() {
        cout << "사람의 소멸자 입니다.\n";
    }
    virtual void info() {
        cout << "사람입니다.\n";
    }
};

class Student : public Person {
    string stu_id;
public:
    ~Student() {
        cout << "학생의 소멸자 입니다.\n";
    }
    void info() {
        cout << "학생입니다.\n";
    }
    void test() {
        cout << "학생의 test 함수\n";
    }
};
class Instructor : public Person {
public:
    ~Instructor() {
        cout << "강사의 소멸자 입니다.\n";
    }
    void info() {
        cout << "강사입니다.\n";
    }
};

    int main() {
    // 업캐스팅
    //Person s = Student();
    //s.info();

    //Person* ss = new Student();
    //ss->info();

    //delete ss;

    //Student stu; //정적 메모리
    //Person* sss = &stu;
    //sss->info();
    ////delete sss; // 빌드중 메모리 할당 delete사용 불필요. // delete사용시 실행중 오류 발생.
    Person* per_arr[3] = { new Student(), new Instructor(), new Student() };
    for (int i = 0; i < 3; i++) {
        per_arr[i]->info();
    }
    for (int i = 0; i < 3; i++) {
        delete per_arr[i];
    }

    return 0;
}