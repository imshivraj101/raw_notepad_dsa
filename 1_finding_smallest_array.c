#include<iostream>
using namespace std;

int main(){

int nums;
cin>>nums;
int array[] ;
int smallest = INT MAX;
for(int i= 0 ; i <nums ; i++ ){
    cin>> array[i];
      }



for(int i = 0 ; int<nums;i++){

    smallest=min(array[i],smallest);

}

cout << smallest;

return 0 ;
}
