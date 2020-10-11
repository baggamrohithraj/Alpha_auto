#include<bits/stdc++.h>
using namespace std;
time() {
	for(int i=0;i<8999900;i++) {
			i++;
			i--;
		}
}
int main() {
	int n=5;
	int i,j,k,l,t=0,h=0;
	time();
	cout<<"\t*";
	for(int l=0;l<2*n+2;l++) {
		cout<<" ";
	}
	cout<<"*";
	
	for(i=0;i<n;i++) {
		cout<<endl<<"\t";
		time();
		cout<<"*";
		for(j=0;j<t;j++) {
			cout<<" ";
		}
		time();
		cout<<"*";
		t++;
		
		for(k=0;k<(2*n-2*i);k++) {
			cout<<" ";
		}	cout<<"*";
		for(int z=0;z<h;z++) {
			cout<<" ";
		}
		cout<<"*";
		h++;	
	}
	cout<<endl<<"\t*";
	for(i=0;i<n;i++) {
		cout<<" ";
	}
	cout<<"*";
	for(i=0;i<n+1;i++) {
		cout<<" ";
	} cout<<"*";
	return 0;
}
