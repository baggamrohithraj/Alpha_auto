#include<bits/stdc++.h>
using namespace std;
time() {
	for(int i=0;i<89999900;i++) {
			i++;
			i--;
		}
}
int main() {
	int n=5;
	int i,j,k,l,t=0;
	time();
	cout<<"\t*";
	for(i=0;i<n;i++) {
		cout<<" ";
	}
	time();
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
		for(k=0;k<n-t;k++) {
			cout<<" ";
		}
		time();
		cout<<"*";
	}
	return 0;
}
