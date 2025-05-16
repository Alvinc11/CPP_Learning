// This program allows the user to:
// 1. Enter multiple students' names and scores into a map<string, int>
// 2. Enter 'done' to stop input
// 3. Search for a student's score by name using map.find()
// 4. Calculate and display the average score (with 1 decimal place)
// 5. Print all students and their scores
// Note: static_cast<double>(sum) is used to avoid integer division truncation
#include<iostream>
#include<map>
#include<iomanip>
using namespace std;

int main(){
    map<string, int>scores;
    string name;
    int score;
   // 原本是用while(name != "done")來判斷,現在改成用true和if來判斷;
    while (true){
        cout << "Enter student name (or 'done' to finish): ";
        cin >> name;
        if(name == "done")break;

        cout << name << "'s score: ";
        cin >> score;
        scores[name] = score;
    }

    string n;
    cout << "Please enter a student name to search: ";
    cin >> n;

    if(scores.find(n) != scores.end()){
        cout << n << "'s score is: " << scores[n] << endl;
    }
    else{
        cout << "Student not found." << endl;
    }

    int sum=0;
    for(const auto& entry : scores){
        sum += entry.second;
    }

    double average = 0.0;
    if(!scores.empty()){
        average = static_cast<double>(sum) / scores.size();// 避免整數除以整數,結果只取整數，保留小數
    }
    cout << fixed << setprecision(1);//保留小數一位
    cout << "average score: " << average << endl;
    

    cout << "\nAll scores:\n";
    for(const auto& entry : scores){
        cout << entry.first << " - " << entry.second << endl;
    }

    return 0;
}
