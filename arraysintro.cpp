#include <iostream>
#include<math.h>
using namespace std;
void printArray (int arr[] , int size){
 cout<<"Printing the array"<<endl;
    //print the array 
    for(int i = 0 ; i<size;i++){
        cout<<arr[i]<<""<<endl;
    }
}
int main()
{    //declare
     int number[15];
    //acessing an array
    cout<<"value at 0 index"<<number[0]<<endl;

    //imitializing an array
    int second[3]={5,7,11};
    //accessing an elemet
    printArray(second,3);
   
    //cout<<"value at 2 index"<<second[2]<<endl;
    int third[15]={2,7};
    int n = 15 ; 
    cout<<"Printing the array"<<endl;
    //print the array 
    for(int i = 0 ; i<n;i++){
        cout<<third[i]<<""<<endl;
    }
    int fifth[10]={1};
    n=10;
    printArray(fifth,  10);
    int fifthSize = sizeof(fifth)/sizeof(int); 

    char ch[5]={'a','b','c','d','e'};
    cout<<ch[3]<<endl;
    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];

    
    cout<<endl<<"Everything is fine"<<endl<<endl;
    return 0 ; 
}