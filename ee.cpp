#include<iostream>
using namespace std;
int main() {

    char op;
    double x;
    double y;
    double result;

    cout << "*Calculator*" << endl;
    cout << "Please enter first number: " << endl;
    cin >> x;
    cout << "Please enter your operation: " << endl;
    cin >> op;
    cout << "Please enter second number: " << endl;
    cin >> y;

    switch(op){
        case '+':
            result = x + y;
            return result;
        case '-':
            result = x - y;
            return result;
        case '*':
            result = x * y;
            return result;
        case '/':
            result = x / y;
            return result;

    }
    cout << "Your result is: " << result;
    return 0;
}