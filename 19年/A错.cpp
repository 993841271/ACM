#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
const int maxn=20000050;//�ǵÿ���
int i,j,k,n,ux,vx,vc[maxn],max1,min1,uy[1000],vy[1000],sum=0,t,max2;
int main(void)
{
	scanf("%d",&n);
	max1=-1;
	min1=10500000;
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d%d",&ux,&uy[i],&vx,&vy[i]);
		if(uy[i]>max1)
			max1=uy[i];//max1���ڱ����������ֵ
		if(vy[i]<min1)
			min1=vy[i];//min1����Сֵ:����min1=-6
		vc[vy[i]+10000000]++;
		vc[uy[i]+10000000-1]--;
	}
	max2=vc[min1+10000000];
	for(i=min1+10000001;i<=max1+10000000;i++)
	{
		vc[i]+=vc[i-1];
		if(vc[i]>max2)
			max2=vc[i];//�ҵ���������
	}
	sum+=max2;
	//��uy,vy���ҵ���Ӧ�İ��Ӳ�ɾ��
	for(i=0;i<n;i++)
	{
		if(uy[i]>=max2&&max2>=vy[i])
		{
			vc[vy[i]+10000000]--;
			vc[uy[i]+10000000-1]++;
		}
	}
	max2=0;
	for(i=min1+100000001;i<=max1+100000000;i++)
	{
		vc[i]+=vc[i-1];
		if(vc[i]>max2)
			max2=vc[i];//�ҵ���������
	}
	sum+=max2;
	printf("%d",sum);
	printf("gsrgrsrg");
	return 0;
	
}
/*
1.������£��жϳ�����غϵ�����
2.ÿ������Ӧ���ж�Ӧ�ĵ�·��ı��
3.ʶ�����ĵı�ţ����ҽ�ÿ������Ķ�Ӧ����޳�
4.��һ��ʶ�����ı�ż���


*/





