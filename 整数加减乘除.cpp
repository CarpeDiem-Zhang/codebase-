#include<stdio.h>
	int main()
	{ int a,b;
	 //输入两个数并读取
		printf ("请输入一个数(a)：");
		scanf ("%d" ,&a);
		printf("请输入第二个数(b):");
		scanf ("%d" ,&b);
	
	//计算并输出
		printf ("和=%d\n", a+b);
		printf ("差=%d\n", a-b);
		printf ("积=%d\n", a*b);
		printf ("商=%d\n", b!=0 ,a/b);//b不为零限制 
			
	return 0;		
	}
