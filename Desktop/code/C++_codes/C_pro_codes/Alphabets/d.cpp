#include<iostream>
using namespace std;
int main() {
	int n=5;
	int i,j,k,l;
	cout<<"\t";
	for(i=0;i<n-1;i++) {
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
		cout<<"\t*";
		for(j=0;j<n+2;j++) {
			cout<<" ";
		}
		cout<<"*";
		cout<<endl;
	}
	cout<<"\t";
	for(i=0;i<n-1;i++) {
		for( k=0;k<89999900;k++) {
			k++;
			k--;
		}
		cout<<"* ";
	}
}
