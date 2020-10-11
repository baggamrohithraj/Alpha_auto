#include<iostream>
using namespace std;
time() {
	for(int k=0;k<89999900;k++) {
			k++;
			k--;
		}
}
int main() {
	int n=5;
	int i,j,k;
	cout<<"\t ";
	for(i=0;i<n-3;i++) {
		time();
		cout<<" * ";
	}
	cout<<endl;
	for(i=0;i<n;i++) {
		time();
		cout<<"\t*";
		for(j=0;j<n+2;j++) {
			cout<<" ";
		}
		time();
		cout<<"*";
		cout<<endl;
	}
	cout<<"\t ";
	for(i=0;i<n-3;i++) {
		time();
		cout<<" * ";
	}
}
