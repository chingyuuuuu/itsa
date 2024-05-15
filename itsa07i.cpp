#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	   char op;
	   int r1,i1,r2,i2;
	   cin>>op>>r1>>i1>>r2>>i2;	
	   switch(op){
	   	 case '+':
	   	 	cout<<(r1+r2)<<" "<<(i1+i2)<<endl;
	   	 	break;
	   	 case'-':
	   	 	cout<<(r1-r2)<<" "<<(i1-i2)<<endl;
	   	 	break;
	   	 case'*':
	   	 	cout<<(r1*r2-i1*i2)<<" "<<(r1*i2+i1*r2)<<endl;
	   	 	break;
	   }
	}
}
//1+2i + 2-3i
//(1+1i)(1+1i)=1+i+i-1=0+2i