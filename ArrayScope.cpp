#include <iostream>
#include<math.h>
using namespace std;
void update (int arr[],int n ){
    cout<<"inside the function"<<endl;
}
int main()
{ 
    int arr[3] = {1,2,3};
    update(arr,3);
    for(int i = 0 ;i<3;i++){
        cout<<arr[i]<<"";
    }
    return 0 ; 
}