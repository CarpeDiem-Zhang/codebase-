#include<stdio.h>
#include<string.h>
int main()
{
	char str[50]={0};
	fgets(str,50,stdin);
	int len=strlen(str);
	if(str[len-1]=='\n')
	{
		str[len-1]=0;
		len--;
	}
	
	int i=0;
	int num=0;
	while(str[i]!=0)
	{
		char ch=str[i];
		i++;
		while(str[i]>='0'&&str[i]<='9')
		{
			num=num*10+(str[i]-'0');
			i++;
		}
		if(num==0)
		{
			printf("%c" ,ch);
		}
		else
		{
			int k;
			for(k=0;k<num;k++)
			{
				printf("%c",ch);
			}
		}	
		num=0;
	}
	printf("\n");
	
	return 0;
}