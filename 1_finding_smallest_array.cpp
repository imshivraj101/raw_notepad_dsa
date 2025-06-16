#include<iostream>
#include<climits>
using namespace std;

int main(){

int nums;
cout<<"ENTER THE NUMBER OF ELEMENTS OF THE ARRAY:"<<endl;
cin>>nums;
int array[nums] ;
int smallest = INT_MAX;
cout<<"ENTER THE "<<nums <<"   " << "ELEMENTS OF THE ARRAY:"<<endl;
for(int i= 0 ; i <nums ; i++ ){
    cin>> array[i];
      }



for(int i = 0 ; i<nums;i++){

    smallest=min(array[i],smallest);

}

cout << smallest<<endl;;

return 0 ;
}
