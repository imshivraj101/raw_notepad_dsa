#include<iostream>
using namespace std;


void reverseArray(int arr[],int size)
{
        for(int i = 0 ; i< size/2 ;i++)
      {
        int temp = arr[i];
          arr [ i ] = arr[size - i- 1];
          arr [ size - i - 1] =temp;
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
}
