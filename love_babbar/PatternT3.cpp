#include <bits/stdc++.h>
using namespace std;
int main(){
    int i=1,j,n;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        j=1;
        while(j<=i-1){
            cout<<i-j;
            j++;
        }
        cout<<endl;
        i++;
    }
}