/*https://www.codechef.com/problems/HIRETEST*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	     int m,n;
	     cin>>n>>m;
	     int x,y;
	     cin>>x>>y;
	     
	     for(int i=0;i<n;i++){
	          int full=0;
	          int partial=0;
	          for(int j=0;j<m;j++){
	               char s;
	               cin>>s;
	               if(s=='F')
	               full++;
	               else if(s=='P')
	               partial++;
	          }
	          if((full>=x)||((full>=x-1)&& (partial>=y))){
	          cout<<"1";
	     }
	     else
	     cout<<"0";
	     
	     }
	     
	     cout<<endl;
	}
	
	return 0;
}
