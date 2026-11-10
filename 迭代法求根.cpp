/*#include<stdio.h>
#include<math.h>
int main()
{
	double a;
	scanf("%lf" ,&a);
	if(a<0)
	{
		return 0;
	}
	
	double x1=0,x2=a;
	
	do
	{	
		x1=x2;
		x2=0.5*(x1+(a/x1));
		
    }while(fabs(x1-x2)>1e-5);
    
    printf("%.5lf" ,x1);
    
    return 0;

}*/



#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    scanf("%f", &a);
    double x0, x1;
    x0 = a / 2;  // 设置初值
    x1 = (x0 + a / x0) / 2;
    do
    {
        x0 = x1;
        x1 = (x0 + a / x0) / 2;
    } while(fabs(x0 - x1) >= 1e-5); // 不满足精度就继续循环
    
    printf("%.5f", x1);
    return 0;
}