
//read n no. and print then in reverse order

#include <iostream>
using namespace std;
int main (){

    int a[1000];
    int n;
    cout<<"Entre the value of n which is less then 1000";
    cin>>n;


    for(int i=0 ; i<n ; i++){
        cin>>a[i];

    }

    for(int i=1 ; i<=n ; i++){
        cout<<a[n-i]<<" ";
    }

    //we can also use
    //for(int i=n-1 ; i>=0 ; i--)


}