#include <bits/stdc++.h>
using namespace std;

int main(){
	
    int n;
    cin >> n;
    int mat[n][n];
    
    for(int i = 0; i < n;i ++){
        for(int j = 0;j < n; j++)
            cin >> mat[i][j];
    }
    
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j++)
        cout << mat[i][j] << " ";
        cout << "\n";
    }
    
//main logic
    for(int x = 0;x < n / 2 ;x ++){
        for(int y = x; y < n - 1 - x;y ++){
            
            int temp = mat[x][y];
            mat[x][y] = mat[y][n - 1 - x]; 
            //bcoz y will be changing so as a row is used
            mat[y][n-1-x] = mat[n-1-x][n-1-y];
            mat[n-1-x][n-1-y] = mat[n-1-y][x];
            mat[n-1-y][x] = temp;
            
            cout << "\n";
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j++)
        cout << mat[i][j] << " ";
        cout << "\n";
    }
            }
        }
        cout << "\n";
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j++)
        cout << mat[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
