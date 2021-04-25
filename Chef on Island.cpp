/*https://www.codechef.com/START3C/problems/CCISLAND*/ 

#include <iostream>
using namespace std;
#include<algorithm>
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int x,y,a,b,d;
	cin>>x>>y>>a>>b>>d;
	int water=x/a;
	int food=y/b;
	
	int  mn=min(water,food);
	if(mn>=d)
	cout<<"yes"<<endl;
	else
	cout<<"no"<<endl;
	     
	}
	
	
	return 0;
}
