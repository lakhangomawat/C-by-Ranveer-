#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Entre the key : ";
    cin>>n;

    int a[]={2,3,5,3,6};
    int i=0 ;

    for( ;i<5 ; i++){
        if(a[i]==n){
            cout<<"Key is found at index "<<i<<endl;
            break;

        }
        
        
    }

    if(i==5){
            cout<<"Key is not found "<<endl;
        }
    


}