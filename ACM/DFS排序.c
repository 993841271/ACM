/*��Ŀ����
Ray�ֶ����ֵ��в�������Ȥ: �������ſ�Ƭ���������ſ�Ƭ�����г��ܶ಻ͬ��4λ����Ҫ�󰴴�С�����˳�������Щ4λ���� 
����
��һ����һ������N����ʾ���ݵ�������ÿ������ռһ�У��������ſ�Ƭ�ϵ����֣���֤�ĸ����ֶ���ͬ����0<����<10���� 
���
��ÿ�鿨Ƭ����С�����˳������������������ſ�Ƭ��ɵ�4λ����ǧλ������ͬ����ͬһ�У�ͬһ����ÿ����λ�����ÿո�ָ���ÿ��������ݼ��һ�У����һ�����ݺ���û�п���
*/
#include <stdio.h>
int main(void)
{
	int n=0,vc[4],i,j,k,b,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(b=0;b<4;b++)
			scanf("%d",&vc[b]);
		for(b=3;b>0;b--)
			for(j=0;j<b;j++)
			if(vc[j]>vc[j+1])
			{
				k=vc[j];
				vc[j]=vc[j+1];
				vc[j+1]=k;
			}
		printf("%d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d\n%d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d\n%d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d\n%d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d",\
		vc[0],vc[1],vc[2],vc[3],vc[0],vc[1],vc[3],vc[2],vc[0],vc[2],vc[1],vc[3],\
		vc[0],vc[2],vc[3],vc[1],vc[0],vc[3],vc[1],vc[2],vc[0],vc[3],vc[2],vc[1],\
		vc[1],vc[0],vc[2],vc[3],vc[1],vc[0],vc[3],vc[2],vc[1],vc[2],vc[0],vc[3],\
		vc[1],vc[2],vc[3],vc[0],vc[1],vc[3],vc[0],vc[2],vc[1],vc[3],vc[2],vc[0],\
		vc[2],vc[0],vc[1],vc[3],vc[2],vc[0],vc[3],vc[1],vc[2],vc[1],vc[0],vc[3],\
		vc[2],vc[1],vc[3],vc[0],vc[2],vc[3],vc[0],vc[1],vc[2],vc[3],vc[1],vc[0],\
		vc[3],vc[0],vc[1],vc[2],vc[3],vc[0],vc[2],vc[1],vc[3],vc[1],vc[0],vc[2],\
		vc[3],vc[1],vc[2],vc[0],vc[3],vc[2],vc[0],vc[1],vc[3],vc[2],vc[1],vc[0]);
		if(i<n-1)
			printf("\n\n");
	}
}