#include <stdio.h>
int main(void)
{
	int a,b,c;
	b=0;
	do{
		printf("������\n");
		scanf("%d",&a);
		if (a<0)
			printf("������Ǹ���");
	}while(a<0);
	c=a;

	do{
		a=a/10;
		b=b+1;
	}while(a>0);
	printf("%d",b);
	printf("%d",c);
	return(0);
}
