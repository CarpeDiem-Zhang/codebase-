#include<iostream>
using namespace std;

int main()
{
	int a,result=0;
	cin >> a;
	
	for(int i=1;i<a;i++)
		if(a%i==0)
		{
			result += i; 
		}
		
	if(result=a)
		cout << "完数\n";
	
	else
		cout << "非完数\n";
		 
	return 0;
}

