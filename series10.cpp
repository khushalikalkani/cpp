#include<iostream>
using namespace std;
int main()
{
    int n;
    float j = 0.5,i;
    cout<<"enter a number";
    cin>>n;
    cout<<j;
    for(i = 0.5; i<=n; i++){
        j = j + i;
        cout<<" "<<(float)j;
    }
}