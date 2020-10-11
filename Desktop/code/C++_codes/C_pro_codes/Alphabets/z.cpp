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
	int i,j,k,x=n;
	cout<<"\t";
	for(i=0;i<n-1;i++) {
		time();
		cout<<"* ";
	}
	cout<<endl<<"\t";
	for(i=0;i<n-1;i++) {
		for(j=0;j<x;j++) {
			cout<<" ";
		}	
		x--;
		time();
		cout<<"*"<<endl<<"\t";
	}
	for(i=0;i<n-1;i++) {
		time();
		cout<<"* ";
	}
	return 0;
}
