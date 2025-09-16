//check prime using function


#include <iostream>
using namespace std;

void checkprime(int n){
    int i;
    for(i=2 ; i<n ; i++){

    if(n%i==0){
        break;
    }


}
if(i==n){
    cout<<"NO IS PRIME";
    
}
else{
    cout<<"NOT PRIME";
}
}
int main (){

int n ;

cin>>n;
checkprime(n);










}