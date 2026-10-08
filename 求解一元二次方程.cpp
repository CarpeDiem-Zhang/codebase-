#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,delta,res_1,res_2; 
	scanf("%lf%lf%lf" ,&a,&b,&c);
	
	delta=b*b-4.0*a*c;  //不能写成1/2 
	
	if(delta>0) 
	{	
	res_1=(-b+pow(delta,0.5))/(2.0*a);//考虑答案为小数 
		res_2=(-b-pow(delta,0.5))/(2.0*a);
		printf("%.2lf %.2lf" ,res_1 ,res_2);
			
	}
	
	else if(delta==0)
	{	res_1=-b/(2.0*a);
		printf("%.2lf" ,res_1);
	}
	
			
	else
		printf("No real root");
		
	return 0;
}
