#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int n;
	if(a>b){
		n=b;
	}
	else{
		n=a;
	}
	int max=0;
	for(int i=1;i<=n;i++){
		if(a%i==0&&b%i==0){
			if(i>max){
				max=i;
			}
		}
	}
	cout<<max<<endl;
}