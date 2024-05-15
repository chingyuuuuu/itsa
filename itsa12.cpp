#include<iostream>
using namespace std;
int recursive(int n){
	if(n==0||n==1){
		return n+1;
	}
	else{
		int r=recursive(n-1)+recursive(n/2);
		return r;
	}
}
int main(){
	int n;
	cin>>n;
	int a=recursive(n);
	cout<<a<<endl;
	
}
//f(2)=f(1)+f(1)