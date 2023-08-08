/* Given 'n' blocks, compute how much water can be trapped inside these blocks */

#include <iostream>
using namespace std;

int findWater(int arr[], int n){
    int left[n];
    int right[n];
    int water = 0;

    left[0] = arr[0];
    for(int i = 1; i < n; i++){
        left[i] = max(left[i - 1], arr[i]);
    }

    right[n-1] = arr[n-1];
    for(int i = n-2; i >= 0; i--){
        right[i] = max(right[i+1], arr[i]);
    }
    for(int i = 1; i < n - 1; i++){
        int temp = min(left[i-1], right[i+1]);
        if(temp > arr[i]){
             water += temp - arr[i];
        }
    }
    return water;
}

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << findWater(arr, n) << endl;
}