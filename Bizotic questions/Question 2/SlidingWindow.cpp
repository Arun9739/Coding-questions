/* Maximum of all subarray of size k */

#include <iostream>
using namespace std;

int main(){
    int n, k;

    cout << "Enter n and k : ";
    cin >> n >> k;

    int arr[n];

    cout << "Enter elements : " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maxNum;
    for(int i = 0; i <= n-k; i++){
        maxNum = arr[i];

        for(int j = 1; j < k; j++){
            maxNum = max(maxNum, arr[i + j]);
        }
        cout << maxNum << " ";
    }
    cout << endl;
}