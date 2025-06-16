#include<iostream>
using namespace std;




void change( int array[]){
    for(int i=0; i<3; i++){
     array[i]= 2*array[i];
     
}
}

int main(){
  
    int array[] = { 1 , 2 ,3} ;
    int size = 3 ;

    change(array);
  
  for ( int i = 0 ; i< 3 ; i++){
    cout << array [ i ] << endl ; 
    
}


}
