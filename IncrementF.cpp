#include<iostream>
using namespace std;
int main(){
	int array[10];
	int i;
	for(i=0;i<10;i++){
		cout<<"Enter Array Elements:";
		cin>>array[i];
	}
	for(i=0;i<10;i++){
		if(array[i]>=0){
			cout<<array[i]<<" ";
		}
	}
	for(i=0;i<10;i++){
		if(array[i]<0){
			cout<<array[i]<<" ";
		}
	}
	return 0;
}
