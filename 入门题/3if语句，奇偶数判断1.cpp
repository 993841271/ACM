#include <stdio.h>
int main(void)
{
	int a,b;
	puts("������������");
	scanf("%d%d",&a,&b);
	if (a%b)
		printf("%d����%d��Լ��",b,a);
	else
		printf("%d��%d��Լ��",b,a);
	return(0);
}
