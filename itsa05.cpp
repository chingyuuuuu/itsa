#include<iostream>
#include<string>
using namespace std;
void binary(unsigned int n){
     int b[8]={0};
	for(int i=0;i<8;i++){
		b[i]+=n%2;
		n=n/2;
	}
     for(int i=7;i>=0;i--){
     	cout<<b[i];
	}
	cout<<endl;
}
int main(){
	unsigned int n;
	while(cin>>n){
		binary(n);
	}
	
}