#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char k=65+n-1;
    for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        k=k-(i-j);
        cout<<k;
    }
    cout<<endl;
       k--;
    }

    return 0;
}