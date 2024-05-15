#include<iostream>
using namespace std;
int main(){
	int col,row;
	while(cin>>row>>col){
		int n[col][row];
	     for(int i=0;i<row;i++){
		    for(int j=0;j<col;j++){
			   cin>>n[i][j];
		     }
	     }
	     for(int i=0;i<col;i++){//0 1
	     	for(int j=0;j<row;j++){//0 1 2
	     		cout<<n[j][i]<<" ";
			}
			cout<<endl;
		}
	     
	
	}
}
//00
//10
//20

//00 01 02