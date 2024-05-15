#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		double o=n*1.6;
		cout<<fixed<<setprecision(1)<<o<<endl;
	}
}