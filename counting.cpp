#include <iostream>
#include<math.h>
using namespace std;
//FUNCTIONS SIGNATURE
void printCounting(int n){
    //function body
    for(int i = 1 ; i<=n;i++){
        cout<<i<<endl;
    }
}

int main()
{
    int n ; 
    cin>>n;
    //functions call
    printCounting(n);

    return 0;
 }