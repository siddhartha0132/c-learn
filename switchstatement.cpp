#include <iostream>
#include<math.h>
using namespace std;
int main()
{

/*int a , b ; 

cout <<"Enter value of a  "<<endl;
cin>>a;
cout <<"Enter value of  b "<<endl;
cin>>b;
char op;
cout<<"Enter value of operation you want to perform"<<endl;
cin>>op;
switch (op)
{
case  '+': cout<<(a+b)<<endl;
  
  break;
  case  '-': cout<<(a-b)<<endl;
  
  break;
  case  '*': cout<<(a*b)<<endl;
  
  break;
  case  '/': cout<<(a/b)<<endl;
  
  break;
  case  '%': cout<<(a%b)<<endl;
  
  break;

default: "Please enter a valid operation";
  break;
}*/
// char  ch  = 'a';
// switch (ch)
// {
// case 'a' : cout<<"character one "<<endl;
//   /* code */
//   break;

// default:
//   break;
// }
int amount ;
cout<<"Enter amount"<<endl;
cin>>amount;
int num = 0 ; 


switch (1)
{
  
case 1: num = amount/100;
 num =amount/100;
cout<<" You need "<<num<< " notes of 100 "<<endl;


case 2:  num = amount/50;
 cout<< "note of 50 RS  "<<num<<endl;
amount = amount - num*50;

case 3:  num = amount/20;
 cout<< "note of 20 RS  "<<num<<endl;
amount = amount - num*20;


case 4:  num = amount/1;
 cout<< "note of 1 RS  "<<num<<endl;
amount = amount - num*1;
  
  

default: cout<<" Invalid money"<<endl;
  break;}}