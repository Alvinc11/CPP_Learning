#include<iostream>
using namespace std;

void displayGrid(bool ships[4][4],bool shots[4][4]){
    cout << "  0 1 2 3\n";
    for(int i =0;i < 4; i++){
        cout << i << " ";
        for(int j = 0; j < 4; j ++){
            if(shots[i][j]){
                if(ships[i][j]){
                    cout << "S ";
                }else{
                        cout << "X ";
                    }
                }else{
                    cout << "O ";
            }
        }
        cout << "\n";
    }
    cout << "\n";
}
int main(){
    bool ships[4][4] = {
        {0, 0, 1, 0},
        {1, 0, 0, 0},
        {0, 0, 1, 1},
        {1, 0, 0, 0}
    };

    bool shots[4][4] = { {0} };
    int shot = 0;
    int numberOfShoot = 0;
while(shot < 5){
    int row, column;
    displayGrid(ships, shots);
    cout << "Selecting coordinates\n";
    cout << "Please choose your row between 0 and 3: " << "\n";
    cin >> row;
    cout << "Please choose your column between 0 and 3: " << "\n";
    cin >> column;

    if(ships[row][column]){
        ships[row][column] = 0;
        shot ++;
        cout << "You shot a ship.\n";
        cout << (5 - shot) << " left.\n";
    }
    else{
        cout <<"You didn't shoot a ship.\n";
    }
    numberOfShoot ++;
}
cout << "You have shot all the ships";
cout << "Your total shots: " << numberOfShoot;
return 0;
}