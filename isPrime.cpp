#include <iostream>
#include<math.h>
using namespace std;
//1 prrime no
//0 not prime number
bool isPrime(int n){
    for(int i = 2; i<n;i++){
        if (n%i==0){
           return 0 ;
           //false
        }}
        
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPrime(n)) {
        cout << n << " is a prime number" << endl;
    } else {
        cout << n << " is not a prime number" << endl;
    }
    return 0;
}
