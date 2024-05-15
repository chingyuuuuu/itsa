#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	int count=0;
	int i=0;
	while(true){
		i=s2.find(s1,i);//from index i=0 start to find->find:retrun index i
		if(i!=string::npos){//find
			i++;
			count++;
		}
		else{
			break;//all not find
		}
	}
	cout<<count<<endl;
}