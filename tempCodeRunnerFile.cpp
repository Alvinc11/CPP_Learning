#include<iostream>
#include<vector>
#include<memory>
using namespace std;

class Animal{
private:
string name;
string type;
string describe;

  public:
    Animal(const string& t, const string& n, const string& d) : type(t), name(n), describe(d){}

    virtual string makeNoise() = 0;
    virtual string getInfo() = 0;
    virtual ~Animal() {}
    string getType(){
      return type;
    }
    string getName(){
      return name;
    }
    string getDescribe(){
      return  describe;
    }
};

class Dog : public Animal{
  public:
    string makeNoise() override{
      return "Woof";
    }

    Dog(const string& t, const string& n, const string& d) : Animal(t, n, d){}
    string getInfo() override{
      return "There is a " + getType() +", its name is " + getName() + ", its voice is " + makeNoise() + ", it is " + getDescribe() + ".";
    }

    };

class Cat : public Animal{
  public:
    string makeNoise() override{
        return "Meow";
    }

    Cat(const string& t,  const string& n, const string& d) : Animal(t, n, d){}
    string getInfo() override{
      return "There is a " + getType() +", its name is " + getName() + ", its voice is " + makeNoise() + ", it is " + getDescribe() + ".";
    } 
  };

class Bird : public Animal{
  public:
    string makeNoise() override{
        return "Chirp";
    }
    Bird(const string& t,  const string& n, const string& d) : Animal(t, n, d){}
    string getInfo() override{
      return "There is a " + getType() +", its name is " + getName() + ", its voice is " + makeNoise() + ", it is " + getDescribe() + ".";
    } 
};

int main(){
  vector<unique_ptr<Animal>> animals;

  while(true){
    cout << "Please choose which animal you want to add." << endl;
    cout <<"1. Dog." << endl;
    cout <<"2. Cat." << endl;
    cout <<"3. Bird." << endl;
    cout <<"4. Exit." << endl;
    cout <<"Please enter number(1-4): ";

    int choice;
    cin >> choice;
    cin.ignore();

    if(choice == 4){
      cout << "End add animal.";
      break;
    }

    string name, describe;
    cout << "Please enter the name of animal: ";
    getline(cin, name);
    cout << "Please enter the describe of animal: ";
    getline(cin, describe);

    switch(choice){
      case 1:
        animals.push_back(make_unique<Dog>("dog", name, describe));
        break;
      case 2:
        animals.push_back(make_unique<Cat>("cat", name, describe));
        break;
      case 3:
        animals.push_back(make_unique<Bird>("bird", name, describe));
        break;
      default:
        cout << "Not a valid input, please enter again!" << endl;
        break;

    }
  }
  cout << "All animals you built: " << endl;
  for(const auto& a : animals){
    cout << a->getInfo() << endl;
  }
  return 0;
}