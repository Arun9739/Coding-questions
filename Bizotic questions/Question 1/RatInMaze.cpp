/* Given a maze the rat wnats to find out the goal */

#include <iostream>
using namespace std;

bool isPathOpen(int **arr, int x, int y, int n){
    if(x < n && y < n && arr[x][y] == 1){
        return true;
    }
    return false;
}

bool ratInMaze(int **arr, int x, int y, int n, int **result){
    //base case
    if(x == (n-1) && y == (n-1)){
        result[x][y] = 1;
        return true;
    }

    if(isPathOpen(arr, x, y, n)){
        result[x][y] = 1;
        if(ratInMaze(arr, x+1, y, n, result)){
            return true;
        }
        if(ratInMaze(arr, x, y+1, n, result)){
            return true;
        }
        result[x][y] = 0;
        return false;
    }
    return false;
}

int main(){
    int n;
    cin >> n;

    int **arr = new int*[n];
    for(int i = 0; i < n; i++){
        arr[i] = new int[n];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int **result = new int*[n];
    for(int i = 0; i < n; i++){
        result[i] = new int[n];
        for(int j = 0; j < n; j++){
            result[i][j] = 0;
        }
    }

    if(ratInMaze(arr, 0, 0, n, result)){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n;j++){
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }


}