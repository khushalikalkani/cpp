#include<iostream>
using namespace std;
int main()
{
    int i,n, a = 1, b = 1,c;
    cout<<"Enter a number";
    cin>>n;
    cout<<a<<" ";
    cout<<b<<" ";
    for(i = 1; i<=n; i++){
        c = a+b;
        cout<<c<<" ";
        a = b;
        b = c;

    }
}