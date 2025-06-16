#include<iostream>
#include<climits>

using namespace std;
int main(){
    
    
    	int nums ;
	cout<<"Enter the number of elements you want in ze array"<<endl;
	cin>>nums;
	
	int largest = INT_MIN;
	int array[nums];
	
	cout<<"Enter the "<< nums<<"   elements of the array"<<endl;
	for(int i = 0 ; i<nums; i++){
		
		cin>>array[i];

	}

	for(int i = 0 ; i<nums ; i++){
		largest=max(array[i],largest);
	}
	
	cout<<largest <<endl;
return 0 ;
}

