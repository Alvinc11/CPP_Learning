#include<iostream>
using namespace std;

class Person{
  private:
  string name;
  int age;

  public:
  Person(string n, int a ) : name(n), age(a) {}
  virtual string introduce() = 0;
  string getName() const {return name;}
  int getAge() const {return age;}
  virtual ~Person() {}
};

class Student : public Person{
private:
  string studentID;
  string course;

public:
Student(string n, int a, string s, string c) : Person(n, a),studentID(s),course(c){}
string introduce() override{
  return "I'm " + getName() + ", " + to_string(getAge()) + " years old. I'm a student. My ID is " + studentID + ", and I'm studying " + course + ".";
}
};

int main() {
Person* p = new Student("Sam", 21, "D1124", "Chemistry");
cout << p->introduce() << endl;
delete p;
return 0;
}