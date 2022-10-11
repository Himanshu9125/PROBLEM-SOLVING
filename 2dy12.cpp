#include<iostream>
using namespace std;
int sum(int a, int n){
    int f=1;
    for (int i = 1; i <=n; i++)
    {
        f=f*i;
    }
    return f;
}
int main(){
    int a,n,t;
    cin>>a>>n;
    t=sum(a,n);
    cout<<t<<endl;
}
