#include<stdio.h>
int main()
{
	int x,w,c,w_h;//x:ÐÇÆÚ  w£ºÎíö²  c£º³µÅÆºÅ   w_h£ºÎ²ºÅ 
	scanf("%d%d%d" ,&x,&w,&c);
	
	w_h=c%10;//Çó³µÅÆÎ²ºÅ 
	
	if(x>5)
		printf("%d no\n",w_h);
	if(x<=5){
		 
		if(w<200)	//ÅÐ¶ÏÎíö²Ìõ¼þ	
			printf("%d no\n",w_h);
		 
		else if(w>=200 && w<400){
			switch(x){
				case 1:              //Ç¶Ì×switchÅÐ¶Ï³µÅÆÎ²ºÅ 
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

