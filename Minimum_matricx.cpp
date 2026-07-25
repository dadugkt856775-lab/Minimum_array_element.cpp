#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[4][2] = {{76,81},{13,76},{82,91},{88,90}};
    int mn = INT_MAX;
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            mn = min(mn,arr[i][j]);
        }
    }
    cout<<mn;
    return 0;
}