/* problem of managers assigning tasks to his workers so to minimize the maximum duration assigned to any worker */

#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid){
    int worker = 1;
    int duration = 0;

    for(int i = 0; i < n; i++){
        if(duration + arr[i] <= mid){
            duration += arr[i];   
        }
        else{
            worker++;
            if(worker > m || arr[i] > mid){
                return false;
            }
            duration = arr[i];
        }
    }
    return true;
}

int assignTasks(vector<int> arr, int n, int m){
    int s = 0;
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s <= e){
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    vector<int> arr = {12, 34, 67, 90};
    int time = assignTasks(arr, 4, 2);

    cout << "The min-max duration is " << time << endl;
    return 0;
}