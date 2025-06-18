#include<iostream>
#include<climits>

using namespace std;

int main (){

int maxi = INT_MIN;
int array[] = { 1, 2, 3, -4, 5 };


for(int start = 0 ;start < 5 ; start++){
  int currentSum = 0 ;
      
    for(int end = start ; end < 5 ; end++){
           currentSum+= array[end] ;  
           maxi = max(maxi , currentSum);  
    
    }

}

cout<< maxi<<endl;
return 0 ;
}
