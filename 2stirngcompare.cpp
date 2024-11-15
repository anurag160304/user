#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    string S;
	    cin>>S;
	    string T;
	    cin>>T;
	    string n;
	    for(int i=0;i<5;i++){
	        if(S[i]==T[i]){
	            n=n+'G';
	        } else{n=n+'B';}
	    }
	 cout<<n<<endl;
}
}