/* Problem of finding maximum stolen money in circular arrangement */

#include <iostream>
#include <vector>
using namespace std;

int maxNonAdjacent(vector<int> &array){
    int n = array.size();
    int prev2 = 0;
    int prev1 = array[0];

    for(int i = 1; i <n; i++){
        int sum = prev2 + array[i];
        int res = max(sum, prev1);
        prev2 = prev1;
        prev1 = res;
    }
    return prev1;
}

int professorRobbery(vector<int> money){
    int n = money.size();
    if(n == 1){
        return money[0];
    }
    vector<int> startPart, endPart;
    for(int i = 0; i < n; i++){
        if(i != n-1){
            startPart.push_back(money[i]);
        }
        if(i != 0){
            endPart.push_back(money[i]);
        }
    }
    return max(maxNonAdjacent(startPart), maxNonAdjacent(endPart));
}

int main(){
    vector<int> arr = {1, 2, 3, 1, 3, 5, 8, 1, 9};
    int m = professorRobbery(arr);
    cout << m << endl;
}     