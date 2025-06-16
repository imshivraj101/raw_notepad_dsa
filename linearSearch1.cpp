#include<iostream>
using namespace std;


int linearSearch(int arr[], int target){
      
      
      for(int i = 0 ; i< 5 ; i++){
      
            if(arr[i]==target){
      return i ;
                
         }
      }
      return -1;
      
}

int main(){
    
    int arr[] ={  4 , 3 , 9  , 5 , 10};
    
    int target;
    
    cin>>target;
    int index= linearSearch(arr , target);
    cout<<index;
    return 0 ;   
}
