#include<bits/stdc++.h>
using namespace std;

bool strongCharacter(string s, int n, int k){

    int count=0;
    for(int i=0; i<n; i++){
        if(s[i] ==  '*'){
            count++;
        }
        if(s[i]!='*'){
            count = 0;
        }
        if(count == k){
            return true;
        }
    }
    return false;
} 

int main(){
    int t;
    cin>>t;

    while(t--){
        int N, K;
        string s;

        cin>>N>>K;
        cin>>s;

        if(strongCharacter(s,N,K)==true){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }

    }
    return 0;
}