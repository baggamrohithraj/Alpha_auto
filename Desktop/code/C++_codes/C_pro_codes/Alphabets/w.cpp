#include<bits/stdc++.h>
using namespace std;
time() {
	for(int i=0;i<89999900;i++) {
			i++;
			i--;
		}
}
int main() {
	int n=2;
	int i,j,k,l,m=3,o=3,t=0;
	for(i=0;i<n;i++) {
		cout<<endl<<"\t";
		time();
		cout<<"*";
		for(j=0;j<8;j++) {
			cout<<" ";
		}
		time();
		cout<<"*";
	}
	for(i=0;i<m;i++) {
		cout<<endl<<"\t";
		time();
		cout<<"*";
		for(j=0;j<o;j++) {
			cout<<" ";		
		}
		time();
		cout<<"*";
		for(k=0;k<2*t;k++) {
			cout<<" ";
		}
		time();
		cout<<"*";
		for(j=0;j<o;j++) {
			cout<<" ";		
		}
		time();
		cout<<"*";
		o--;
		t++;
	}
	time();
	cout<<endl<<"\t"<<"*";
	for(i=0;i<8;i++) {
		cout<<" ";
	}
	time();
	cout<<"*";
	return 0;
}
