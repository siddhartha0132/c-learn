#include <iostream>
#include<math.h>
using namespace std;
int main()
{
  int n = 10 ;

  int a = 1 ; 
  int b = 2 ;

  for (int i=1 ;i<=n;i++){
    int nextNumber = a + b;
    cout <<nextNumber << " ";
    a= b;
    b = nextNumber;
  }}