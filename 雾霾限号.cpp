#include<stdio.h>
int main()
{
	int x,w,c,w_h;//x:星期  w：雾霾  c：车牌号   w_h：尾号 
	scanf("%d%d%d" ,&x,&w,&c);
	
	w_h=c%10;//求车牌尾号 
	
	if(x>5)
		printf("%d no\n",w_h);
	if(x<=5){
		 
		if(w<200)	//判断雾霾条件	
			printf("%d no\n",w_h);
		 
		else if(w>=200 && w<400){
			switch(x){
				case 1:              //嵌套switch判断车牌尾号 
					switch(w_h){	
					case 1:
					case 6:printf("%d yes\n" ,w_h);break;
					default:printf("no");break;}
				break;
				
				case 2:
					switch(w_h){
					case 2:
					case 7:printf("%d yes\n" ,w_h);break;
					default:printf("%d no\n",w_h);break;
					}
				break;
				
				case 3:
					switch(w_h){
					case 3:
					case 8:printf("%d yes\n" ,w_h);break;
					default:printf("%d no\n",w_h);break;
					}break;
				
				case 4:
					switch(w_h){
					case 4:
					case 9:printf("%d yes\n" ,w_h);break;
					default:printf("%d no\n",w_h);break;
					}break;
				
				case 5:
					switch(w_h){
					case 5:
					case 0:printf("%d yes\n" ,w_h);break;
					default:printf("%d no\n",w_h);break;
					}break;
		        }
		}
		else if(w>=400){
			switch(x){
				case 1:
				case 3:
				case 5:
					switch(w_h){
					case 1:
					case 3:
					case 5: 
					case 7:
					case 9:printf("%d yes\n" ,w_h);break;
					default:printf("%d no\n",w_h);break;
				}break;		
				
				case 2:
				case 4:
					switch(w_h){
					case 0:
					case 2:
					case 4:
					case 6:
					case 8:printf("%d yes\n" ,w_h);break;
					default:printf("%d no\n",w_h);break;}
				break;	
			}
		}
	else
		printf("%d no\n",w_h);
    }
	return 0;
}

