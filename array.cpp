#include <iostream>

using namespace std;

int main(){

    //size of the array in brackets
    int array[10];

    cout << "Enter 10 numbers for your array:" << endl;

    // i has to be less than 10 cause of the size of the array
    for (int i = 0; i < 10; i++){
        cin >> array[i];

    }
     cout << "The numbers inputted are:";

     for (int n=0; n < 10; n++){
        cout << array[n] << " ";
     }
 
 return 0;
}