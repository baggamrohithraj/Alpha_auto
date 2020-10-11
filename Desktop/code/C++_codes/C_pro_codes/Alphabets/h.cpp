#include<iostream>
using namespace std;
int main() {
	int n=5;
	int i,j,k;
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
	for(i=0;i<n;i++) {
		for( k=0;k<89999900;k++) {
			k++;
			k--;
		}
		cout<<"* ";
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
}
