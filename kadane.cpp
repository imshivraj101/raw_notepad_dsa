#include<iostream>
#include<climits>

using namespace std;


int main(){
      
      int arr[]={1, 2, -3, 4, 5};
      int cs=0;
      int maxi = INT_MIN;
      
                 
      for(int start = 0 ; start<5; start++){     
            
            cs = cs+=arr[start];
            if(cs <0 ){
            cs = 0 ;
            }
            maxi = max(cs,maxi);
      
      }
      
      cout<< maxi <<endl;
return 0;
}
