#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int>scores;
    scores["Alice"] = 95;
    scores["Bob"] = 88;
    scores["Cathy"] = 76;

    string name;
    cout << "Please enter a student name: ";
    cin >> name;

    if(scores.find(name) != scores.end()){
        cout << name << "'s score is: " << scores[name] << endl;
    }
    else{
        cout << "Student not found." << endl;
    }
    return 0;
}
