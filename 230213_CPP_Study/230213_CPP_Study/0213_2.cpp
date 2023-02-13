#include<iostream>
#include<string>

using namespace std;

class Person {
protected:
    string name;
public:
    Person() {
        this->name = "아무개";
    }
    virtual ~Person() {
        cout << "사람의 소멸자 입니다.\n";
    }
    virtual void info() {
        cout << "사람입니다.\n";
    }
    void set_name(string name) {
        this->name = name;
    }
    string get_name() {
        return name;
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
    //Person p1 = Student();
    Person* p = new Person();
    cout << p->get_name() << endl;
    // p->test();

    //Student* s1 = (Student*)p1;
    Student* s = (Student*)p;
    s->test();
    p->set_name("홍길동");
    cout << s->get_name() << " " << p->get_name() << endl;
    s->set_name("성춘향");
    cout << p->get_name() << " " << s->get_name() << endl;

    Student& s1 = *(Student*)p;
    s1.set_name("코디");
    cout << p->get_name() << " " << s1.get_name() << endl;

    Student s2 = *(Student*)p;
    s2.set_name("코양");
    cout << p->get_name() << " " << s2.get_name() << endl;

    delete p;
    // 포인터 변수, 참조 변수 예시
    int a = 1;
    int k = 2;
    int& b = a;
    int* c = &a;

    cout << a << " " << b << " " << *c << endl;

    b = k;

    cout << a << " " << b << " " << *c << endl;

    a = 3;

    cout << a << " " << b << " " << *c << endl;

    c = &k;
    k = 4;

    cout << a << " " << b << " " << *c << endl;


    //delete p;
    return 0;
}