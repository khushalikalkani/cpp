#include<iostream>
using namespace std;
int main()
{
    int i,j,n=65;
    for(i = 1; i<=5; i++){
        for(j = 1; j<=5; j++){
            cout<<(char)n++;
        }
        cout<<"\n";
    }
}