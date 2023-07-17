#include<iostream>
using namespace std;
int main()
{
    int i, j, k = 30;
    for(i = 1; i<=5; i++){
        for(j = 1; j<=k; j++){
            cout<<" ";
        }
        for(j = 1; j<=i; j++){
            cout<<" * ";
        }
        cout<<"\n";
    }
}