#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    int n;
    cout<<"Enter the value of N : ";
    cin>>n;

    for(int i=1;i<=n;i++){

        for(int k=n-i;k>0;k--){
            cout<<" ";
        }

        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }


return 0;
}