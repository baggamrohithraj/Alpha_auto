#include<bits/stdc++.h>
using namespace std;
int main() {
	int t = 0,n,j,k,i,l,a,b,c;
	cin>>n;
	int s=n;
	for( j=0;j<n;j++) {
		cout<<endl;
		for( k=0;k<t+5;k++) {
			cout<<" ";
		}
		cout<<"*";
		
		for( l=0;l<2*s-2*t;l++) {
			cout<<" ";
		}
		t++;

		cout<<"*";
		for(int i=0;i<89999900;i++) {
			i++;
			i--;
		}
		
	}
	for(i=0;i<n;i++) {
		cout<<endl;
		for(j=0;j<n+5;j++) {
			cout<<" ";
		}
		cout<<"*";
		for(k=0;k<89999900;k++) {
			k++;
			k--;
		}
	}
}
