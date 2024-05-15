#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int x,y;
	while(cin>>x>>y){
		//can use area to compare
		//or use the distance of(0,0)
		int area=pow(x,2)+pow(y,2);
		if(area>pow(100,2)){//area
			cout<<"outside"<<endl;
		}
		else{
			cout<<"inside";
		}
		
	}
}