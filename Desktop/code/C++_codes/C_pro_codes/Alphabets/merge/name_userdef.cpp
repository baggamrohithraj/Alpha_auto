#include<iostream>
using namespace std;
void time() {
	for(int i=0;i<8999900;i++) {
			i++;
			i--;
		}
}
void time_() {
	for(int i=0;i<89999900;i++) {
			i++;
			i--;
		}
}
void a() {
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
void b() {
	int n=5;
	int i,j,k;
	cout<<"\t";
	for(i=0;i<n-1;i++) {
		time();
		cout<<"* ";
			}
	cout<<endl;
	for(i=0;i<n;i++) {
		time();
		cout<<"\t*";
		for(j=0;j<n+2;j++) {
			cout<<" ";		}
		time();
		cout<<"*"<<endl;
	}	cout<<"\t";
	for(i=0;i<n-1;i++) {	
		time();
		cout<<"* ";	}
	cout<<endl;
	for(i=0;i<n;i++) {		
		time();
		cout<<"\t*";
		for(j=0;j<n+2;j++) {
			cout<<" ";		}
		time();
		cout<<"*";
		cout<<endl;	}
	cout<<"\t";
	for(i=0;i<n-1;i++) {		
		time();
		cout<<"* ";	}	
}
void c() {
	int n=5;
	cout<<"\t";
	int x,i,j;
	for(i=0;i<n;i++) {
		time();
		cout<<"*  ";	}
	cout<<endl;
	for(i=0;i<n;i++) {
		time();
		cout<<"\t* "<<endl;	}
	cout<<"\t";
	for(i=0;i<n;i++) {
		time();
		cout<<"*  ";	}
}
void d() {
	int n=5;
	int i,j,k,l;
	cout<<"\t";
	for(i=0;i<n-1;i++) {
		cout<<"* ";
		time();	}
	cout<<endl;
	for(i=0;i<n;i++) {
		time();
		cout<<"\t*";
		for(j=0;j<n+2;j++) {
			cout<<" ";		}
			time();
		cout<<"*";
		cout<<endl;	}
	cout<<"\t";
	for(i=0;i<n-1;i++) {
		time();
		cout<<"* ";	}
}
void e() {
	int n=5;
	int i,j,k,l;
	cout<<"\t";
	for(i=0;i<n;i++) {
		time();
		cout<<"* ";	}
	for(i=0;i<2;i++) {
		time();
		cout<<endl<<"\t*";	}
	cout<<endl<<"\t";
	for(i=0;i<n;i++) {
		time();
		cout<<"* ";	}
	for(i=0;i<2;i++) {
		time();
		cout<<endl<<"\t*";	}
	cout<<endl<<"\t";
	for(i=0;i<n;i++) {
		time();
		cout<<"* ";	}
}
void f() {
	int n=5;
	int i,j,k,l;
	cout<<"\t";
	for(i=0;i<n;i++) {
		time();
		cout<<"* ";	}
	for(i=0;i<3;i++) {
		time();
		cout<<endl<<"\t*";	}
	cout<<endl<<"\t";
	for(i=0;i<n;i++) {
		time();
		cout<<"* ";	}
	for(i=0;i<4;i++) {
		time();
		cout<<endl<<"\t*";	}
}
void g() {
		int n=6;
	int i,j,k,l,m;
	cout<<"\t";
		for(j=0;j<n-1;j++) {
			time();
			cout<<" *";
		}
	for(i=0;i<2;i++) {
		time();
		cout<<endl<<"\t"<<"* ";
	}
	cout<<endl<<"\t";
	time();
	cout<<"*";
	for(i=0;i<3;i++) {
		cout<<" ";
	}
	for(i=0;i<3;i++) {
		time();
		cout<<" *";
	}
	for(i=0;i<2;i++) {
		cout<<endl<<"\t";
		time();
		cout<<"* ";
		for(j=0;j<3;j++) {
			cout<<" ";
		}
		time();
		cout<<"* "<<"  ";
		time();
		cout<<"*";
	}
	cout<<endl<<"\t ";
	for(i=0;i<2;i++) {
		time();
		cout<<"* ";
	}
	for(i=0;i<4;i++) {
		cout<<" ";
	}
	time();
	cout<<"*";
}
void h() {
	int n=5;
	int i,j,k;
	for(i=0;i<n;i++) {
		time();
		cout<<"\t*";
		for(j=0;j<n+2;j++) {
			cout<<" ";	}
		cout<<"*"<<endl;	}
	cout<<"\t";
	for(i=0;i<n;i++) {
		time();
		cout<<"* ";	}
	cout<<endl;
	for(i=0;i<n;i++) {
		time();
		cout<<"\t*";
		for(j=0;j<n+2;j++) {
			cout<<" ";		}
			time();
		cout<<"*"<<endl;	}
}
void i() {
int n=5;
	int i,j,k,l;
	cout<<"\t";
	for(i=0;i<n;i++) {
		time();
		cout<<"* ";	}	
	for(i=0;i<n;i++) {
		cout<<endl<<"\t";
		for(j=0;j<4;j++) {
			cout<<" ";		}
		time();
		cout<<"*";	}
	cout<<endl<<"\t";
	for(i=0;i<n;i++) {
		time();
		cout<<"* ";	}	
}
void j() {
	int i,j,k,l,n=5;
	cout<<"\t";
	for(i=0;i<n;i++) {
		time();
		cout<<"* ";	}	
	for(i=0;i<n;i++) {
		cout<<endl<<"\t";
		for(j=0;j<4;j++) {
			cout<<" ";	}
		time();
		cout<<"*";	}
	cout<<endl<<"\t";
	for(i=0;i<n-2;i++) {
		time();
		cout<<"* ";	}	
}
void k() {
	int n=5;
	int m=n,o=0;
	int i,j,k,l;
	for(i=0;i<n;i++) {
		cout<<endl<<"\t";
		time();
		cout<<"*";
		for(j=0;j<m;j++) {
			cout<<" ";		}
		m--;
		time();
		cout<<"*";	}
	for(i=0;i<n;i++) {
		cout<<endl<<"\t";
		time();
		cout<<"*";
		for(k=0;k<o;k++) {
			cout<<" ";		}
		o++;
		time();
		cout<<"*";	}
}
void l() {
	int n=5;
	int i,j,k;
	for(i=0;i<n;i++) {
		time();
		cout<<endl<<"\t*";	}
	cout<<endl<<"\t";
	for(i=0;i<n-1;i++) {
		time();
		cout<<"* ";	}
}
void m() {
		int n=5;
	int i,j,k,l,t=0,h=0;
	time();
	cout<<"\t*";
	for(int l=0;l<2*n+2;l++) {
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
		
		for(k=0;k<(2*n-2*i);k++) {
			cout<<" ";
		}	time(); cout<<"*";
		for(int z=0;z<h;z++) {
			cout<<" ";
		} time();
		cout<<"*";
		h++;	
	} time();
	cout<<endl<<"\t*";
	for(i=0;i<n;i++) {
		cout<<" ";
	} time();
	cout<<"*";
	for(i=0;i<n+1;i++) {
		cout<<" ";
	} time(); cout<<"*";
}
void n() {
		int n=5;
	int i,j,k,l,t=0;
	time();
	cout<<"\t*";
	for(i=0;i<n;i++) {
		cout<<" ";	}
	time();
	cout<<"*";
	for(i=0;i<n;i++) {
		cout<<endl<<"\t";
		time();
		cout<<"*";
		for(j=0;j<t;j++) {
			cout<<" ";		}
		time();
		cout<<"*";
		t++;
		for(k=0;k<n-t;k++) {
			cout<<" ";		}
		time();
		cout<<"*";
	}	
}
void o() {
	int i,j,k,n=5;
	cout<<"\t ";
	for(i=0;i<n-3;i++) {
		time();
		cout<<" * ";	}
	cout<<endl;
	for(i=0;i<n;i++) {
		time();
		cout<<"\t*";
		for(j=0;j<n+2;j++) {
			cout<<" ";		}
		time();
		cout<<"*"<<endl;	}
	cout<<"\t ";
	for(i=0;i<n-3;i++) {
		time();
		cout<<" * ";	}	
}
void p() {
	int n=5;
	int i,j,k;
	cout<<"\t";
	for(i=0;i<n-1;i++) {
		cout<<"* ";
		time();	}
	cout<<endl;
	for(i=0;i<n;i++) {
		time();
		cout<<"\t*";
		for(j=0;j<n+2;j++) {
			cout<<" ";		}
		cout<<"*"<<endl;	}
	cout<<"\t";
	for(i=0;i<n-1;i++) {
		time();
		cout<<"* ";	}
	cout<<endl;
	for(i=0;i<n;i++) {
		time();
		cout<<"\t*"<<endl;	}
}
void q() {
		int n=5;
	int i,j,k,x,t=0;
	cout<<endl<<"\t ";
	for(i=0;i<5;i++) {
		time();
		cout<<"*";
	}
	cout<<" ";
	for(i=0;i<2;i++) {
		cout<<endl<<"\t";
		time();
		cout<<"*";
		for(j=0;j<5;j++) {
			cout<<" ";
		}time();
		cout<<"*";
	}
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
	cout<<endl<<"\t ";
	for(i=0;i<6;i++) {
		time();
		cout<<"*";
	} int m=7;
	for(i=0;i<2;i++) {
		cout<<endl<<"\t";
		for(j=0;j<m;j++) {
			cout<<" ";
		}time();
		cout<<"*";
		m++;
	}
}
void r() {
	int i,j,k,l,m=0,s=5,n=5;
	cout<<endl<<"\t";
	for(i=0;i<n-1;i++) {
		time(); 
		cout<<"* ";
		time();	}
	cout<<endl;
	for(i=0;i<n;i++) {
		time();
		cout<<"\t*";
		for(j=0;j<n+2;j++) {
			cout<<" ";		}
		time();
		cout<<"*";
		cout<<endl;
	}
	cout<<"\t";
	for(i=0;i<n-1;i++) {
		time();
		cout<<"* ";	}
	for(i=0;i<n;i++) {
		time();
		cout<<endl<<"\t"<<"*";
		for(j=0;j<m+1;j++) {
			cout<<" ";	}
		time();
		cout<<"*";
		m++;	m++;	}
	cout<<endl;
}
void s() {
	int n=5;
	int i,j,k;
	cout<<"\t"<<" ";
	for(i=0;i<n-1;i++) {
		time();
		cout<<"* ";	}
	for(i=0;i<3;i++) {
		time();
		cout<<endl<<"\t*";	}
	cout<<endl<<"\t"<<" ";
	for(i=0;i<n-1;i++) {
		time();
		cout<<"* ";	}
	for(i=0;i<3;i++) {
		cout<<endl<<"\t";
		for(j=0;j<n-1;j++) {
			cout<<"  ";		}
		time();
		cout<<"*";	}
	cout<<endl<<"\t"<<" ";
	for(i=0;i<n-1;i++) {
		time();
		cout<<"* ";	}
}
void t() {
	int n=5;
	int i,j,k,l;
	cout<<"\t";
	for(i=0;i<n;i++) {
		time();
		cout<<"* ";	}	
	for(i=0;i<n;i++) {
		cout<<endl<<"\t";
		for(j=0;j<4;j++) {
			cout<<" ";		}
		time();
		cout<<"*";	}
}
void u() {
		int n=5;
	int i,j,k;
	for(i=0;i<n;i++) {
		time();
		cout<<"\t*";
		for(j=0;j<n+2;j++) {
			cout<<" ";		}
		cout<<"*"<<endl;
	}
	cout<<"\t ";
	for(i=0;i<n-3;i++) {
		time();
		cout<<" * ";	}
}
void v() {
		int t = 0,n=5,j,k,i,l,s=5;
	for( j=0;j<n;j++) {
		cout<<endl<<"\t";
		for( k=0;k<t;k++) {
			cout<<" ";		}
		time();
		cout<<"*";		
		for( l=0;l<2*s-2*t;l++) {
			cout<<" ";		}		 
		t++;
		cout<<"*";
		time();			
	}
	cout<<endl<<"\t";
	for(i=0;i<n;i++) {
		cout<<" ";	}
	time();
	cout<<"*";
}
void w() {
	int n=2;
	int i,j,k,l,m=3,o=3,t=0;
	for(i=0;i<n;i++) {
		cout<<endl<<"\t";
		time();
		cout<<"*";
		for(j=0;j<8;j++) {
			cout<<" ";		}
		time();
		cout<<"*";	}
	for(i=0;i<m;i++) {
		cout<<endl<<"\t";
		time();
		cout<<"*";
		for(j=0;j<o;j++) {
			cout<<" ";				}
		time();
		cout<<"*";
		for(k=0;k<2*t;k++) {
			cout<<" ";		}
		time();
		cout<<"*";
		for(j=0;j<o;j++) {
			cout<<" ";				}
		time();
		cout<<"*";
		o--;		t++;
	}
	time();
	cout<<endl<<"\t"<<"*";
	for(i=0;i<8;i++) {
		cout<<" ";	}
	time();
	cout<<"*";
}
void x() {
	int t = 0,n=5,j,k,i,l,a,b,c,x;
	int s=n;
	for( j=0;j<n;j++) {
		cout<<endl;
		for( k=0;k<t+5;k++) {
			cout<<" ";
		}time();		cout<<"*";		
		for( l=0;l<2*s-2*t;l++) {
			cout<<" ";		}		 
		t++;
		cout<<"*";
		time();			
	}	cout<<endl;
	for(i=0;i<n+5;i++) {
		cout<<" ";
	}time();	cout<<"*";
	for(j=0;j<n;j++) {
		cout<<endl;
		for(k=t+5;k>0;k--) {
			cout<<" ";		}
			time();
		cout<<"*";
		for( l=0;l<2*s-2*t;l++) {
			cout<<" ";		}
		t--;
		time();
		cout<<"*";
		time();	
	}
}
void y() {
	int t = 0,n=5,j,k,i,l,a,b,c; 	int s=n;
	for( j=0;j<n;j++) {
		cout<<endl;
		for( k=0;k<t+5;k++) {
			cout<<" ";		}
		time();
		cout<<"*";		
		for( l=0;l<2*s-2*t;l++) {
			cout<<" ";		}
		t++;
		time();
		cout<<"*";
		time();			}
	for(i=0;i<n;i++) {
		cout<<endl;
		for(j=0;j<n+5;j++) {
			cout<<" ";		}
		time();
		cout<<"*";		
	}
}
void z() {
	int n=5;
	int i,j,k,x=n;
	cout<<"\t";
	for(i=0;i<n-1;i++) {
		time();
		cout<<"* ";	}
	cout<<endl<<"\t";
	for(i=0;i<n-1;i++) {
		for(j=0;j<x;j++) {
			cout<<" ";		}	
		x--;
		time();
		cout<<"*"<<endl<<"\t";	}
	for(i=0;i<n-1;i++) {
		time();
		cout<<"* ";	}
}
int main() {
	char str[100];
	system("cls");
	int i1=0;
	char key;
	int run=1;
	while(run!=0) {
			cin>>str;
			i1=0;
		while(str[i1]!='\0') {
	 	key = str[i1];
	 	i1++;
	 	switch(key) {
	 	case 'a': {
				cout<<endl<<endl<<endl;
				a();
				time_();
				system("cls");
				break;
			}
		case 'b': {
				cout<<endl<<endl<<endl;
				b();
				time_();
				system("cls");
				break;
			}
			case 'c': {
				cout<<endl<<endl<<endl;
				c();
				time_();
				system("cls");
				break;
			}
			case 'd': {
				cout<<endl<<endl<<endl;
				d();
				time_();
				system("cls");
				break;
			}
			case 'e': {
				cout<<endl<<endl<<endl;
				e();
				time_();
				system("cls");
				break;
			}
			case 'f': {
				cout<<endl<<endl<<endl;
				f();
				time_();
				system("cls");
				break;
			}
			case 'g': {
				cout<<endl<<endl<<endl;
				g();
				time_();
				system("cls");
				break;
			}
			case 'h': {
				cout<<endl<<endl<<endl;
				h();
				time_();
				system("cls");
				break;
			}
			case 'i': {
				cout<<endl<<endl<<endl;
				i();
				time_();
				system("cls");
				break;
			}
			case 'j': {
				cout<<endl<<endl<<endl;
				j();
				time_();
				system("cls");
				break;
			}
			case 'k': {
				cout<<endl<<endl<<endl;
				k();
				time_();
				system("cls");
				break;
			}
			case 'l': {
				cout<<endl<<endl<<endl;
				l();
				time_();
				system("cls");
				break;
			}
			case 'm': {
				cout<<endl<<endl<<endl;
				m();
				time_();
				system("cls");
				break;
			}
			case 'n': {
				cout<<endl<<endl<<endl;
				n();
				time_();
				system("cls");
				break;
			}
			case 'o': {
				cout<<endl<<endl<<endl;
				o();
				time_();
				system("cls");
				break;
			}
			case 'p': {
				cout<<endl<<endl<<endl;
				p();
				time_();
				system("cls");
				break;
			}
			case 'q': {
				cout<<endl<<endl<<endl;
				q();
				time_();
				system("cls");
				break;
			}
			case 'r': {
				cout<<endl<<endl<<endl;
				r();
				time_();
				system("cls");
				break;
			}
			case 's': {
				cout<<endl<<endl<<endl;
				s();
				time_();
				system("cls");
				break;
			}
			case 't': {
				cout<<endl<<endl<<endl;
				t();
				time_();
				system("cls");
				break;
			}
			case 'u': {
				cout<<endl<<endl<<endl;
				u();
				time_();
				system("cls");
				break;
			}
			case 'v': {
				cout<<endl<<endl<<endl;
				v();
				time_();
				system("cls");
				break;
			}
			case 'w': {
				cout<<endl<<endl<<endl;
				w();
				time_();
				system("cls");
				break;
			}
			case 'x': {
				cout<<endl<<endl<<endl;
				x();
				time_();
				system("cls");
				break;
			}
			case 'y': {
				cout<<endl<<endl<<endl;
				y();
				time_();
				system("cls");
				break;
			}
			case 'z': {
				cout<<endl<<endl<<endl;
				z();
				time_();
				system("cls");
				break;
			}
			default : {
				return 0;
				break;
			} 
	 }
 }
 cout<<endl<<"Enter 1 to run again 0 to exit ";
 cin>>run;
	}
 	 return 0;
}
