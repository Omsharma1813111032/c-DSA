#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    int arr[3][3] = {{12,23,34},{36,58,79},{80,91,99}};
    int k = 26;
    for(int i=0;i<3;i++){
        if(arr[i][0]<=k && arr[i][2]>=k){
            for(int j =0 ;j<3;j++){
                if(arr[i][j]==k){
                    return true;
                }
            }
        }
    }



return 0;
}