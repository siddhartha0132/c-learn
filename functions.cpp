#include <iostream>
#include<math.h>
using namespace std;
int power(int a , int b){
    int ans  = 1 ; 
    for(int i = 1; i<=b;i++){
        ans = ans*a;
    }
    return ans;
};
int main()
// {
//     int a , b ; 
//     cin>>a >> b;
//     power(a,b);
//     return 0 ;
// int ans = power();
// cout<<""<<ans<<endl;
//  }