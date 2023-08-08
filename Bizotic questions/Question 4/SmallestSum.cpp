/* Given an array of 'n' integers, find the smallest sum of subarrray */

#include <iostream>
#include <climits>
using namespace std;

int smallestSum(int a[], int n){
    int local_min = INT_MAX;
    int global_min = INT_MAX;

    for(int i = 0; i < n; i++){
        if(local_min > 0)
            local_min = a[i];
        else
            local_min = local_min + a[i];
        global_min = min(global_min, local_min);
    }
    return global_min;
}

int main(){
    int n;
    cout << "Enter a number :";
    cin >> n;

    int a[n];

    cout << "Enter elements : ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int res = smallestSum(a, n);

    cout << "Smallest sum : " << res << endl;
    
}