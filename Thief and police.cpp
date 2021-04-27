/*https://www.codechef.com/problems/TANDP*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	     int n,m;
	     cin>>n>>m;
	     
	     int x,a;
	     cin>>x>>a;
	     int y,b;
	     cin>>y>>b;
	     
	     int thief=(n-x)+(m-y);
	     int police=(n-a)+(m-b)- min((n-a),(m-b));
	     
	     if(thief<=police)
	     cout<<"yes\n";
	     else 
	     cout<<"no\n";
	     
	}
	return 0;
}
