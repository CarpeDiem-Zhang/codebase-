#include<stdio.h>
#include<string.h>
int main()
{
	char c;
	int n;
	scanf("%c%d" ,&c,&n);
	getchar();
	
	char str[105]={0};
	fgets(str,105,stdin);
	int len=strlen(str);
	if(str[len-1]=='\n')
	{
		str[len-1]=0;
		len--;
	}
	
	int cnt=0;
	int i;
	for(i=0;i<len;i++)
	{
		if(n==0)
		{
			char s = str[i];
			char target = c;
			// 统一转大写
			if(s >= 'a' && s <= 'z') s -= 32;
			if(target >= 'a' && target <= 'z') target -= 32;
			if(s == target)
				cnt++;
		}
		if(n==1)
		{
			if(str[i]==c)
				cnt++;
		}
	}
	printf("%d\n" ,cnt);
	return 0;
}
