/*
��Ŀ����
��֤��Ƴ�˹���������κ�һ��������������������д��һ�����������ĺ͡� 
����
��һ������ n<=100 

���
�����������ֽ�Ϊһ�����������ĺ� 
*/

#include <stdio.h>
int main(void)
{
	long int n,vc[500],i,a,b,sum,k;
	scanf("%ld",&n);
	a=n*n*n;
	b=n*n-n+1; 
	sum=vc[0]=b;
	if(n==1)
		printf("1*1*1=1=1");
	else 
	{
	for(i=1;i<500;i++)
	{
		vc[i]=vc[i-1]+2;
		sum+=vc[i];
		if(sum==a)
			break;
	}
	printf("%ld*%ld*%ld=%ld=%ld",n,n,n,a,vc[0]);
	for(k=1;k<=i;k++)
		printf("+%ld",vc[k]);
	}
}

