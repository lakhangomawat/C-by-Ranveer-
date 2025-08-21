#include <iostream>
using namespace std;
int main (){

    int a[]={5,4,3,2,1};

    int n=sizeof(a)/sizeof(int);

    cout<<"Given Array : ";


    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;

    //first method of swwaping using third variable
    /*
        int temp;

                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
    
    */

    //second method of swaping without using third variable
    /*
        a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];




    */

    //swaping using single line
    /*
        a[j]=(a[j]+a[j+1])-(a[j+1]=a[j]);
    
    */


    for(int i=0 ; i<n ; i++){

        for(int j=0 ; j<=n-2 ; j++){

            if(a[j]>a[j+1]){
                // swap(a[j] , a[j+1])
                
                a[j]=(a[j]+a[j+1])-(a[j+1]=a[j]);


            }

        }




    }
    cout<<"Array After Sorting : ";

    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";

    }








}