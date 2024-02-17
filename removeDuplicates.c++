#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    int arr[] = {1,2,2,3,4,4,5,6,7,8,8};
    int n= sizeof(arr)/sizeof(arr[0]);

    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]= arr[j];
            i++;
        }
    }

    for(int k=0;k<(i+1);k++){
        cout<<arr[k];
    }


return 0;
}