#include<bits/stdc++.h>
using namespace std;
time() {
	for(int i=0;i<89999900;i++) {
			i++;
			i--;
		}
}
int main() {
	int t = 0,n=5,j,k,i,l;
	int s=n;
	for( j=0;j<n;j++) {
		cout<<endl<<"\t";
		for( k=0;k<t;k++) {
			cout<<" ";
		}
		time();
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
	cout<<endl<<"\t";
	for(i=0;i<n;i++) {
		cout<<" ";
	}
	time();
	cout<<"*";
}
