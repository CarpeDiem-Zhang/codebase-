#include<iostream>
using namespace std;
int main()
{   int a,b,c,d,temp;
	cin >> a >> b >> c >> d;
	if(a>b){
		temp=a;
		a=b;
		b=temp;//a,b»»Î» 
	}
		
	if(a>c){	
		temp=a;
		a=c;
		c=temp;
	}
	
	if(a>d){	
		temp=a;
		a=d;
		d=temp;
	}
	
	if(b>c){
		temp=b;
		b=c;
		c=temp;
	}
		
	if(b>d){	
		temp=b;
		b=d;
		d=temp;
	}
	
	if(c>d){
		temp=c;
		c=d;
		d=temp;
	}	
	
		
		cout << a <<" "<< b << " " << c << " " << d;
		
	return 0;
}
