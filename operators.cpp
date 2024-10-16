
   
   #include <iostream>
#include<math.h>
using namespace std;
int main()
{ int a = 4;
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
    cout<<(--i)<<endl;}