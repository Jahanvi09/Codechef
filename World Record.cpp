#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	double k1,k2,k3,v;
	cin>>k1>>k2>>k3>>v;
	double c=9.58;
	double a=100/(k1*k2*k3*v);
	double b=round(a*100.0)/100.0;
	
     if(b<c)
     cout<<"YES"<<endl;
     else
     cout<<"NO"<<endl;
	
}
	return 0;
}
