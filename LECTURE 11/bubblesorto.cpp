//bubble sort optimisation

#include <iostream>
using namespace std;
int main (){

    int a[]={5,4,3,2,1};
    int n=sizeof(a)/sizeof(int);

    for(int j=0 ; j<=n-1 ; j++){

        int cnt=0;

        for(int i=0 ; i<=n-2-j ; i++){
        if(a[0]>a[i+1]){
            swap(a[i],a[i+1]);
            cnt++;
        }

        if(cnt==0){
            break;

        }
    }

    }
    for(int j=0 ; j<n ; j++){
        cout<<a[j]<<" ";

    }

    
}