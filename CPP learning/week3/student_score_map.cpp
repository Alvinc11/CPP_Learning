/*
Title: Advanced Grade Lookup System

Features:
1. Allow the user to enter multiple student names and scores until "end" is entered.
2. Store data using map<string, int>.
3. Display all student names and their scores (sorted by name).
4. Ask the user for a minimum score and list all students with scores >= that value.
5. Allow the user to look up a student's score by name; display "Student not found" if the name doesn't exist.
*/

#include<iostream>
#include<map>
using namespace std;

int main(){
    string name;
    int score;
    map<string, int>scores;

    while(true){
        cout << "Please enter a student name(if you finish enter'end'): ";
        cin >> name;
        if(name == "end")break;
        else{
            cout << name << "'s score: ";
            cin >> score;
            scores[name] = score;
        }
    }
cout << "\nAll students and their scores:\n";
    for(const auto &p : scores){
        cout << p.first << " - " << p.second << endl;
    }

int threshold;
cout << "Enter minimum score to filter: ";
cin >> threshold;

cout << "Students with score >= " << threshold << ": " << endl;
for(const auto&p : scores){
    if(p.second >= threshold){
        cout << p.first << " - " << p.second << endl;
    }
}
return 0;
}