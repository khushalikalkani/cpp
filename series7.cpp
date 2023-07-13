#include<iostream>
using namespace std;
int main()
{
    int i,n,x=1;
    cout<<"Enter a number";
    cin>>n;
    for(i = 1; i<=n; i++){
        cout<<(i*x)<<" ";
        x = x*2;
    }

}