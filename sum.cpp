  #include <iostream>
#include<math.h>
using namespace std;
int main()
{ 
  int n;
   cout<<"enter value of n "<<endl;
   cin>>n;
   int sum=0;

   for(int i= 1;i<=n;i++){
    //sum = sum + i ;
    sum += i;

   }
   int n;
   cout<<"enter value of n "<<endl;
   cin>>n;
   cout << "printing count from 1 to n "<<endl;
   for(int i = 1;i<=n ;i++){
    cout<<i;
   }
   cout<<sum<<endl;}