#include<iostream>
using namespace std;
int main()
{
    int i,arr[6],oddtotal = 0,eventotal = 0;
    for(i = 0; i<=5; i++){
        cout<<"Enter a number ["<<i<<"]";
        cin>>arr[i];
    }
    for(i = 0; i<=5; i++){
        if(arr[i] % 2 != 0){
            oddtotal = oddtotal + arr[i];
            cout<<"\n odd number is "<<arr[i];
        }
        else{
            eventotal = eventotal + arr[i];
            cout<<"\n even number is "<<arr[i];
        }
    }
    cout<<"\n oddtotal is "<<oddtotal;
    cout<<"\n eventotal is"<<eventotal;
    cout<<"\n total of odd & even is" <<(oddtotal+eventotal);
}