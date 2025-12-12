#include<iostream>
using namespace std;

int main(){
    int evennumber = 0;
    int obbnumber = 0;
    int number;
    do{
        cout << "Enter an integer: ";
        cin >> number;
        if(number == 0){
            break;
        }
        if(number % 2 == 0){evennumber++;}
        else{obbnumber++;}
    }
    while (true);
    cout << "#Even numbers = "<<evennumber;
    cout << "#Odd numbers = "<<obbnumber;
    return 0;
}
