#include <iostream>
#include<math.h>
using namespace std;
int main()
{ int n ; 
    cout<<"enter value of n "<<endl;
   cin>>n;
   bool isPrime =1 ;
  // rem = 0 ; not a prime number 
   for ( int i = 2 ;i<n;i++){
    if (n%i ==0){}
      //cout <<"not a prime number"<<endl;
      isPrime = 0;
      break;
   }
  if ( isPrime = 0){
    cout<<"is not  prime number"<<endl;

  }else if(isPrime = 1){
    cout<<"is prime number"<<endl;
  }
}