#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[15][15]={0};
    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};
    int x=0,y=0,dir=0;
    for(int num=1;num<=n*n;num++)
    {
        a[x][y]=num;
        int nx=x+dx[dir];
        int ny=y+dy[dir];
        if(nx<0||nx>=n||ny<0||ny>=n||a[nx][ny]!=0)
        {
            dir=(dir+1)%4;
            nx=x+dx[dir];
            ny=y+dy[dir];
        }
        x=nx;
        y=ny;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%-4d",a[i][j]); // 左对齐，占4字符宽度，正好符合题目要求
        }
        printf("\n");
    }
    return 0;
}
