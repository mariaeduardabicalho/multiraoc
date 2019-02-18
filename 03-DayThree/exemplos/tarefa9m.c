#include <stdio.h>

#define MAXW 512
#define MAXH 512




int main(){
	char t[4];
	int w;
	int h;
	int p;
	
	fgets(t,4,stdin);
	scanf("%d",&w);
	scanf("%d",&h);
	scanf("%d",&p);
	
	printf("width: %d",w);
	printf("height: %d",h);
		
return 0;	
	
}
