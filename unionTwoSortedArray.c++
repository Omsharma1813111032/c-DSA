#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    int arr[] = {5,6,7};
    int arr1[] = {4,5,7,8,9};

    set<int>a;
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(arr1)/sizeof(arr1[0]);

    for(int i=0;i<n;i++){
        a.insert(arr[i]);
    }

    for(int i=0;i<m;i++){
        a.insert(arr1[i]);
    }

    for(auto& i:a){
        cout<<i<<" ";
    }


return 0;
}