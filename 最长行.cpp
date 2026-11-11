#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[200]={0};
	char maxline[200];
	int maxlen=0;
	while(1)
	{
		fgets(str,200,stdin);
		int len = strlen(str);
		if(str[len-1]=='\n')
		{
			str[len-1]=0;
			len--;
		}	
		if(strcmp(str,"***end***")==0)
		{
			break;
		}
		if(len>maxlen)
		{
			maxlen=len;
			strcpy(maxline,str);
		}
	}
	printf("%d\n" ,maxlen);
	printf("%s\n" ,maxline);
	return 0;
}