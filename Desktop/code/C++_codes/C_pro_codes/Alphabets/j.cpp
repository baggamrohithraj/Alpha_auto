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
	int i,j,k,l;
	cout<<"\t";
	for(i=0;i<n;i++) {
		time();
		cout<<"* ";
	}	
	for(i=0;i<n;i++) {
		cout<<endl<<"\t";
		for(j=0;j<4;j++) {
			cout<<" ";
		}
		time();
		cout<<"*";
	}
	cout<<endl<<"\t";
	for(i=0;i<n-2;i++) {
		time();
		cout<<"* ";
	}
	return 0;
}
