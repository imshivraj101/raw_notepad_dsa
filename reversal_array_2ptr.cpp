#include<iostream>
using namespace std;


void reverseArray(int arr[],int size)
{
      int left = 0;
      int right = size - 1;
      while(left<right){
       
    
      swap(arr[left] , arr[right]);
      left++;
      right--;
}

}

int main(){
      
        int array[]= { 1 , 2 , 3 , 4 , 5 };
       int  size = sizeof(array)/sizeof(int);
        
        reverseArray(array,size);
        for(int i = 0 ; i<size ; i++){
        cout<<array[i];
}
return 0 ;
}https://meet.google.com/zmj-xjfb-mvm
