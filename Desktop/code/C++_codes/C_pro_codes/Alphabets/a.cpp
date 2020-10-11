#include<iostream>
using namespace std;
time() {
	for(int i=0;i<8999900;i++) {
			i++;
			i--;
		}
}
int main() {
	int n=5;
	int i,j,k,l;
	int s=n,t=0;
	for(i=0;i<n;i++) {
		cout<<endl<<"\t\t";
		for(j=0;j<s;j++) {
			cout<<" ";
		}
		time();
		cout<<"*";		
		for(k=0;k<2*n-2*s;k++) {
			cout<<" ";
		}
		time();
		cout<<"*";
		s--;
		
	}
	time();
	cout<<endl<<"\t\t*";
			for(i=0;i<n-1;i++) {
				time();
				cout<<" *";
			}
			time();
		 cout<<"  *";
			
			int g=7;
	for(i=0;i<4;i++) {
		cout<<endl<<"\t";
		for(j=0;j<g;j++) {
		cout<<" ";		
	}
	g--;
	time();
	cout<<"*";
	for(k=0;k<13+i*2-1;k++) {
		cout<<" ";
	}
	time();
	cout<<"*";
	}
}

