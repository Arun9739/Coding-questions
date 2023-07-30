/* Generating 
* * * * * 
* * * * 
* * * 
* * 
* 
Pattern */ 

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the input number n : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 5 - i; j > 0; j--){
            cout << "* ";
        }
        cout << endl;
    }
}