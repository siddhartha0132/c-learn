   #include <iostream>
#include<math.h>
using namespace std;
int main()
{
   int a = 4;
    int b = 6;
    cout << "a&B "<<(a & b) << endl; 
    cout << "a|B"<<(a | b) << endl; 
    cout << "`a"<<(~a) << endl; 
    cout << "a^B"<<(a ^ b) << endl; 

    cout << (17>>1)<<endl;
    cout << (17>>2)<<endl;
    cout << (19<<1)<<endl;
    cout << (19<<2)<<endl;
    

    int i = 7 ;

    cout<<(i++)<<endl;
    cout<<(++i)<<endl;
    cout<<(i--)<<endl;
    cout<<(--i)<<endl;
    

   int n;
   cout<<"enter value of n "<<endl;
   cin>>n;
   cout << "printing count from 1 to n "<<endl;
   for(int i = 1;i<=n ;i++){
    cout<<i;
   }
    

   int n;
   cout<<"enter value of n "<<endl;
   cin>>n;
   int sum=0;

   for(int i= 1;i<=n;i++){
    //sum = sum + i ;
    sum += i;

   }
   cout<<sum<<endl;
   

  //fibonacci series 

  int n = 10 ;

  int a = 1 ; 
  int b = 2 ;

  for (int i=1 ;i<=n;i++){
    int nextNumber = a + b;
    cout <<nextNumber << " ";
    a= b;
    b = nextNumber;
  }
  
   int n;
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
  
 for (int i = 0 ; i<5;i++){

  cout<<"HI"<<endl;
  cout<<"hey"<<endl;

  continue;
  cout<<"reply tu karde"<<endl;
 }
 
for (int i = 1 ;i<=15 ; i+=2)
{  cout << i <<" ";
  
  if (i&1){
  continue;
}
i++;
} 
int n ;
cin>>n;
int ans  = 0 ;
int  i = 0 ;
while(n!=0){
  int digit = 1&n;
  ans = (digit * pow(10 , i))+ ans;
  n = n >>1 ;
  i++;
}
cout<<"answer is "<<ans<<endl;

//decimal to binary
// int n   ;
// cout<<"enter value of n "<<endl;
// cin>>n;

// while (n!=0){
//   int digit = n%2;
//   cout<<digit;
//   n = n>>1;
// }

// int n ; 
// cin>>n;
// int ans = 0 ;
// int i = 0;
// while(n!=0){
//   int digit = n%10;
//   if ( digit==1){
//     ans = ans +pow(2 ,i);
//   }
//   n = n/10;
//   i++;
// }
// cout<<ans<<endl; 

}