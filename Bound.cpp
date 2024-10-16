#include <iostream>
#include<math.h>
using namespace std;
int firstOccurence(int arr[], int n , int key){
    int start = 0 ; 
    int end = n - 1 ; 
    int mid = start + (end-start)/2;
    int ans  = -1;
    while(start<=end){
        if(arr[mid]==key){
         ans = mid;
         end = mid-1;
        }else if(key>arr[mid]){
        start = mid+1;
        }else if (arr[mid]>key){
        end = mid -1 ;
        }
        mid = start + (end-start)/2;
    }
    return ans ; 
}
//last occurence 
int lastOccurence(int arr[], int n , int key){
    int start = 0 ; 
    int end = n - 1 ; 
    int mid = start + (end-start)/2;
    int ans  = -1;
    while(start<=end){
        if(arr[mid]==key){
         ans = mid;
         start = mid+1;
        }else if(key>arr[mid]){
        start = mid+1;
        }else if (arr[mid]>key){
        end = mid -1 ;
        }
        mid = start + (end-start)/2;
    }
    return ans ; 
}



int main()
{ 
    int even[5]={1,2,3,3,5};
    cout<<"first occurence of 3 is "<<firstOccurence(even,5,3)<<endl;
    cout<<"last occurence of 3 is "<<lastOccurence(even,5,3)<<endl;
}