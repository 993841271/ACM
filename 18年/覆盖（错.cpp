#include <stdio.h>
int main(void)
{
	int i,j,k,sum=0,n,m,g,b,vb[5000][2],vg[5000][2],flag=0,sum2=0,vc[5000];
	//freopen("D:\\4.txt","r",stdin);
	for(i=0;i<5000;i++)
		vc[i]=0;
	scanf("%d%d%d%d",&n,&m,&b,&g);
	for(i=0;i<b;i++)
		scanf("%d%d",&vb[i][0],&vb[i][1]);
	for(i=0;i<g;i++)
		scanf("%d%d",&vg[i][0],&vg[i][1]);
	for(i=0;i<b;i++)
		for(j=vb[i][0];j<=vb[i][1];j++)
			vc[j]=1;//ÿ��һ�ű��ϵ��˾�����vc��Ӧ��ֵ=1
	for(i=0;i<5000;i++)
		if(vc[i]==1)
			sum++;//��������
	flag=n-sum;//�����հ�����
	sum*=m;//����������Ŀ
	for(i=0;i<5000;i++)
		vc[i]=0;//��ʽ��
	for(i=0;i<g;i++)
		for(j=vb[i][0];j<=vb[i][1];j++)
			vc[j]=1;//ÿ��һ�ű��ϵ��˾�����vc��Ӧ��ֵ=1
	for(i=0;i<5000;i++)
		if(vc[i]==1)
			sum2++;//Ů������
	sum2*=flag;//Ů���϶�����û�ϵĸ�����
	sum+=sum2;//�ܸ�����

	printf("%d",sum);
}

	



	

