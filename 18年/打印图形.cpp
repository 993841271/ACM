#include <stdio.h>//A 65  Z 90
int main(void)
{
	int i,j,k,a;
	char zi;
	scanf("%c",&zi);
	a=zi-64;//a��ʾ��ĸ��Ӧ�����֣���A1��B2,ͬʱa��Ӧ��������
	for(i=0;i<a;i++)
	{
		for(j=0;j<i;j++)
			printf(" ");
		for(j=i;j<a;j++)
			printf("%c",zi-j);
		for(j=0;j<a;j++)
			printf("%c",65+j);
		printf("\n");
	}
}

