#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

int zhuanhuan(int h,int m)//ʱ��ת������
{
	int a;
	a=h*60+m;
	return a;
}

int main(void)
{
	int n,i,j,k,sum=0,vc[101],m,s,h;
	int a630=6*60+30,a1000=10*60,a1600=16*60,a1900=19*60;//ÿ��ʱ��ָ��Ķ�Ӧ��ֵ
	int kai=0,mo=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d:%d",&h,&m);
		vc[i]=zhuanhuan(h,m);
	}
	sort(vc,vc+n);
	for(i=0;i<n;i++)//��ǰ�����ҵ���һ���㣬���Ҽ�¼��Ӧ��ʱ������
	{
		if(vc[i]<=a1000&&vc[i]>=a630){
			kai=1;break;}
		else if(vc[i]<=a1600&&vc[i]>a630){
			kai=2;break;}
		else if(vc[i]<=a1900&&vc[i]>a1600){
			kai=3;break;}
	}
	for(i=n-1;i>=0;i--)//�Ӻ���ǰ���ҵ���һ���㣬���Ҽ�¼��Ӧ��ʱ������
	{
		if(vc[i]<=a1000&&vc[i]>=a630){
			mo=1;break;}
		else if(vc[i]<=a1600&&vc[i]>a630){
			mo=2;break;}
		else if(vc[i]<=a1900&&vc[i]>a1600){
			mo=3;break;}
	}
	if(kai==1&&mo==1)
		sum=24000;
	else if(kai==1&&mo==2)
		sum=24000;
	else if(kai==1&&mo==3)
		sum=36000;
	else if(kai==2&&mo==2)
		sum=16800;
	else if(kai==2&&mo==3)
		sum=24000;
	else if(kai==3&&mo==3)
		sum=24000;
	printf("%d",sum);
	return 0;
}
