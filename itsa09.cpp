#include<iostream>
using namespace std;
int main(){
	int N;
	while(cin>>N){
		int count=0;
		for(int i=1;i<=N;i++){
			if(i%3==0){
				count+=i;
			}
		}
		cout<<count<<endl;
	}
}