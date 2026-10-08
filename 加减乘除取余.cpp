#include<stdio.h>
int main ()
{
	int a,b;
	char f;
	scanf("%d%c%d" ,&a,&f,&b);
	
	switch(f){
		case '+': printf("%d%c%d=%d\n" ,a,f,b ,a+b);break;
		case '-': printf("%d%c%d=%d\n" ,a,f,b ,a-b);break;
		case '*': printf("%d%c%d=%d\n" ,a,f,b ,a*b);break;
		case '/': b!=0;
			printf("%d%c%d=%d\n" ,a,f,b ,a/b);break;
		case '%': b!=0;
			printf("%d%c%d=%d\n" ,a,f,b ,a%b);break;
	}
	return 0;
}
