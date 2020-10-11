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
	int m=n,o=0;
	int i,j,k,l;
	for(i=0;i<n;i++) {
		cout<<endl<<"\t";
		time();
		cout<<"*";
		for(j=0;j<m;j++) {
			cout<<" ";
		}
		m--;
		time();
		cout<<"*";
	}

	for(i=0;i<n;i++) {
		cout<<endl<<"\t";
		time();
		cout<<"*";
		for(k=0;k<o;k++) {
			cout<<" ";
		}
		o++;
		time();
		cout<<"*";
	}
	return 0;
}
