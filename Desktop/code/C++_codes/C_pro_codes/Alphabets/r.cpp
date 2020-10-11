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
	int s=n;
	int i,j,k,l,m=0;
	cout<<endl<<"\t";
	for(i=0;i<n-1;i++) {
		time(); 
		cout<<"* ";
		for( k=0;k<89999900;k++) {
			k++;
			k--;
		}
	}
	cout<<endl;
	for(i=0;i<n;i++) {
		for( k=0;k<89999900;k++) {
			k++;
			k--;
		}
		time();
		cout<<"\t*";
		for(j=0;j<n+2;j++) {
			cout<<" ";
		}
		time();
		cout<<"*";
		cout<<endl;
	}
	cout<<"\t";
	for(i=0;i<n-1;i++) {
		for( k=0;k<89999900;k++) {
			k++;
			k--;
		}
		time();
		cout<<"* ";
	}
	for(i=0;i<n;i++) {
		time();
		cout<<endl<<"\t"<<"*";
		for(j=0;j<m+1;j++) {
			cout<<" ";
		}
		time();
		cout<<"*";
		m++;
		m++;
	}
	cout<<endl;
	return 0;
}
