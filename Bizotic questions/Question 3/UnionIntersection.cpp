/* Given two arrays find union and intersection of these two arrays */

#include <bits/stdc++.h>
using namespace std;

void findUnionAndIntersection(int n1, int *arr1, int n2, int *arr2){
    sort(arr1, arr1 + n1);
    sort(arr2, arr2 + n2);

    int i = 0, j = 0;

    cout << "\nIntersection of the arrays : " << endl;
    while(i < n1 && j < n2){
        if(arr1[i] == arr2[j]){
            cout << arr1[i] << " ";
            i++; j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    cout << endl;

    cout << "\nUnion of the arrays : " << endl;
    i = 0; j = 0;
    while(i < n1 && j < n2){
        if(arr1[i] == arr2[j]){
            cout << arr1[i] << " ";
            i++; j++;
        }
        else if(arr1[i] < arr2[j]){
            cout << arr1[i] << " ";
            i++;
        }
        else{
            cout << arr2[j] << " ";
            j++;
        }
    }
    while(i < n1){
        cout << arr1[i] << " ";
        i++;
    }
    while(j < n2){
        cout << arr2[j] << " ";
        j++;
    }
}

int main(){
    int n1, n2;
    cout << "Enter n1 and n2 : " ;
    cin >> n1 >> n2;

    int arr1[n1], arr2[n2];

    cout << "Enter first array :";
    for(int i = 0; i < n1; i++){
        cin >> arr1[i];
    }

    cout << "Enter second array :";
    for(int i = 0; i < n2; i++){
        cin >> arr2[i];
    }

    findUnionAndIntersection(n1, arr1, n2, arr2);

    return 0;
}