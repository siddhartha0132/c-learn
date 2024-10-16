#include <iostream>
#include<math.h>
using namespace std;
bool search (int arr[], int n,int key){
 for (int i = 0 ; i<n;i++){
    if (arr[i]==key){
        // cout<<"yes"<<endl;
        return 1 ; 
    }
    return 0; 
 };
}
int main()
{ 
    int arr[]={5,7,-2,10,22,-2,0,5,22,1};
    //wheather 1 is present is in or not
    int key;
    cin>>key;
    bool found = search(arr,10,key);
    if(found){
        cout<<"key is present "<<endl;
    } else {
        cout<<"key is absent"<<endl;
    }
}