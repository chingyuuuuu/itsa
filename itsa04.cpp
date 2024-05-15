#include<iostream>
using namespace std;
int main(){
	//5-23+20
	int sh,eh,sm,em;
	int cost=0;
	cin>>sh>>sm;
	cin>>eh>>em;
	int  hr=((eh-sh)*60)-sm+em;
     int min=hr%60;//4
     hr=hr/60;//57
     if(hr>=2){
     	cost+=30*2*2;//120
	}
	if(hr>=4){
		cost+=40*2*2;//160
	}
	if(min>=30){
		cost+=60;
	}
	cout<<cost<<endl;
     
}