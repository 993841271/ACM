#include <cstdio>
#include <algorithm>
using namespace std;
//�ҵ�һ�����֣�ȷ��ǰ���������������
int main(void)
{
	int n,vc[200050];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&vc[i]);
	int flag=vc[n-1],sum;
	for(int i=n-2;i>=0;i--){
		if(vc[i]!=flag){
			sum=i;break;}}
	printf("%d",sum+1);
}


