/*https://www.codechef.com/LTIME95C/problems/EQUINOX*/ 
#include <iostream>
#include<string.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	     int n;
	     cin>>n;
	     int a,b;
	     cin>>a>>b;
	     long long sar=0; int anu=0;
	     for(int i=0;i<n;i++){
	          string letter;
	          cin>>letter;
	          
	          
	          if(letter[0]=='E'||letter[0]== 'Q'||letter[0]=='U' ||letter[0]== 'I' || letter[0]=='N' ||letter[0]== 'O' ||letter[0]== 'X'){
	               sar+=a;
	               
	          }
	          else
	          {
	               anu+=b;
	          }
	        
	     }
	       if(sar==anu)
	          cout<<"DRAW"<<endl;
	          else if(sar>anu)
	          cout<<"SARTHAK"<<endl;
	          else
	          cout<<"ANURADHA"<<endl;
	}
	return 0;
}
