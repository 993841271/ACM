#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int n,m,w[3403],c[12882],f[12881];//n�����壬m�ǿռ�

int main(void)
{
	int i,j,k;
	memset(f,0,sizeof(f));
	cin>>n>>m;
	for(i=1;i<=n;i++)
		cin>>w[i]>>c[i];
	for(i=1;i<=n;i++)//i������
		for(j=m;j>=0;j--)//j�ǿռ�
		{
			if(j>=w[i])
				f[j]=max(f[j],f[j-w[i]]+c[i]);
		}
	cout<<f[m];
}

