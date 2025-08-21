#include <iostream>
#include <climits> //INT_MIN ko use karne ke liye
using namespace std;
int main (){
    int a[]={1,4,2,3,7,5};

    //to find value of n
    int n;
    n=sizeof(a)/sizeof(int);

    //shuruaat mai largest no of sbse choti value set kiya

    int lar = INT_MIN;

    for(int i=0 ; i<n ; i++){
        if(lar<a[i]){
            lar=a[i];

        }
    }

    cout<<"Largest No : "<<lar;


}