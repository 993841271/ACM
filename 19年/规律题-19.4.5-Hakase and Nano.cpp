#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
/*
״̬ת�Ʒ��̣�
״̬��1����1����(״̬2)
A:���Բ�������
B:���Բ���һ��
3A: 1 1 5   1 5 5   5 5 5   1 1 1
Ӯ Ӯ Ӯ ��
4A: 1 1 1 1    1 1 1 5   1 1 5 5    1 5 5 5   5 5 5 5
ȫӮ
5A:1 1 1 1 1  1 1 1 1 5  1 1 1 5 5   1 1 5 5 5  1 5 5 5 5  55555
Ӯ Ӯ Ӯ Ӯ Ӯ Ӯ 
6A:111111 111115 111155 111555 115555  155555 555555
�� Ӯ Ӯ Ӯ Ӯ Ӯ 
B:111155 ->A11115Ӯ->A111115->B111111->A11111Ӯ
3b: 1 1 5  1 5 5   5 5 5   1 1 1
�� Ӯ 
A:3��ȫ1����
B:��ôת�Ƶ�A
3��+1����3���Ķ���1->B���߲���1�ľͿ���
3����-1����1->B����һ�ѱ��1
3B: 1 1 5  1 5 5  5 5 5  1 1 1
�� Ӯ Ӯ Ӯ
*/
int main(void)
{
	int i,j,k,t,n,d,vc[25],z,b,flag,sum;
	scanf("%d",&t);
	memset(vc,0,sizeof(vc));
	for(i=0;i<t;i++)
	{
		flag=0;
		sum=0;
		scanf("%d%d",&n,&z);//n������,z״̬
		if(z==1)//A����
		{
				for(j=0;j<n;j++)
				{
					scanf("%d",&b);//
					if(b!=1)
						flag=1;
				}
				if(flag==0&&n%3==0)//���ȫΪ1������
					vc[i]=1;
				else//����Ӯ
					continue;
		}
		else//A����,3����3��+1����Ŀ���
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&b);
				if(b!=1)
					sum++;
			}
			if(n==1)
				vc[i]=1;
			else if(n==2)
				continue;
			else if(n%3==2)
				continue;
			else if(n%3==0&&sum==1)//��0����ֻ��һ����0
				vc[i]=1;
			else if(n%3==1&&sum<=1)
				vc[i]=1;
		}

	}
		for(i=0;i<t;i++)
	{
		if(vc[i]==1)
			printf("No\n");
		else
			printf("Yes\n");
	}
}