#include <iostream>
using namespace std;

int add(int x , int y ){
    int sum=x+y;
    return sum;


}



int main (){
    //bucket banali
    int a = 10 , b=20 ;
    //add function of call krdi and ab add function sum of return kr dega and sum ki value c ko assigne ho jayegi
    int c=add(a,b);


    cout<<"SUM: "<<c<<endl;
    //tertiarty operator
    (c%2==0)? cout<<"SUM IS EVEN" : cout<<"SUM IS ODD";








}