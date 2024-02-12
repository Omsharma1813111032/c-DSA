#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){

    int arr[] = {1,2,0,3,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    int i = 0;
    int temp =0;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i+1;j<n;j++){
                if(arr[j]!=0){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    break;
                }
            }
        }
    }

    for(int k=0;k<n;k++){
        cout<<" "<<arr[k]<<" ";
    }


    



return 0;
}