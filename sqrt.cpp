#include <iostream>
#include<math.h>
using namespace std;
 long long int sqrtInteger(int n ){
        int s = 0 ; 
        int e = n; 
        long long int mid = s + (e-s)/2;
        int ans  =-1 ; 
        
        while(s<=e){
             if (mid*mid==n){
                return mid;
} else  if(n<mid*mid){
                e = mid-1;

            }else if(mid*mid<n) {
                s = mid+1;
               

            }
              
            mid = s + (e-s)/2;  }
         return e;}
    
double morePrec(int n ,  int prec, int tempSoln ){
    double factor = 1 ; 
    double ans = tempSoln; 
    for(int i = 0 ; i<prec;i++){
        factor = factor/10 ; 
        for(double  j = ans   ; j*j<n;j+=factor){
            ans  = j; 
        }

    }
    return ans  ; 
}

int main()
{
    int n ; 
    cout<<"Enter the number "<<endl;
    cin>>n;
    int tempSoln=sqrtInteger(n);
    cout<<"answer is "<<morePrec(n , 3 , tempSoln)<<endl;
    return  0 ; 

}
