#include <iostream>
using namespace std;
int main (){

    int a[]={7,2,6,4,5,1,9,8,-4 };
    
    int n=sizeof(a)/sizeof(int);
    cout<<"Given Array : ";

    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;


    for(int i=1;  i<=n-1 ;i++){

        int hpc=a[i];
        int pos=i-1;
        while(pos>=0){
            if(hpc<a[pos]){
                 a[pos+1]=a[pos];

            }
            else{break;}
            pos--;
        }

        a[pos+1]=hpc;

















    }
    cout<<"Array After Sorting: ";


    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
}