#include<iostream>
#include<vector>
#include<memory>
using namespace std;

class Person{
  private:
  string name;
  int age;

  public:
  void setName(){
    cout << "Please enter the name: ";
    cin >> name;
  }

  string getName() const {
    return name;
  }

  void setAge(){
    cout << "Please enter the age: ";
    cin >> age;
    cin.ignore();
  }

  int getAge() const {
    return age;
  }

  virtual string getInfo() const = 0;
  virtual ~Person() {}
};

class Student : public Person{
  public:
  string getInfo() const override{
    return "xxxxx";
  }
};

class Teacher : public Person{
  public:
  string getInfo() const override{
    return "yyyyyy.";
  }
};

int main(){
  vector<unique_ptr<Person>> person;
  for(int i = 0; i < 2; i++){
    auto student = make_unique<Student>();
    student->setName();
    student->setAge();
    person.push_back(move(student));
  }

  auto teacher = make_unique<Teacher>();
  teacher->setName();
  teacher->setAge();
  person.push_back(move(teacher));

  for(const auto& p : person){
    cout << "Name: " << p->getName() << endl;
    cout << "Age: " << p->getAge() << endl;
    cout << "Info: " << p->getInfo() << endl;
  }
  return 0;
}

