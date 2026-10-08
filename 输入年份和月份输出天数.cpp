#include<stdio.h>
int main()
{
	int y,m;
	scanf("%d%d" ,&y,&m);
	
	if((y%400==0||(y%4==0&&y%100!=0))&&m==2)
		printf("29\n");
		
	else if(m==2)
		printf("28\n");
	
    else{
    	switch(m)
		{	case 1:
    		case 3:
    		case 5:
    		case 7:
    		case 8:
    		case 10:
    		case 12:printf("31\n");break;
    		default:printf("30\n");break;}
	}
	
	return 0;
}
