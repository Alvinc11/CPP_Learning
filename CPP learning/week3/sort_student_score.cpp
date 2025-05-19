#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<pair<string, int>> students = {
        {"Alice", 88},
        {"Bob", 75},
        {"Charlie", 95}
    };

    // 排序：分數升冪，相同分數按名字升冪
    sort(students.begin(), students.end(), [](const pair<string, int>& a, const pair<string, int>& b){
        if (a.second == b.second)
            return a.first < b.first;
        return a.second < b.second;
    });

    for(const auto& student : students){
        cout << student.first << ": " << student.second << endl;
    }

    return 0;
}