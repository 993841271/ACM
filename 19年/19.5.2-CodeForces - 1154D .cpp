#include <cstdio>
#include <algorithm>
using namespace std;
/*
�ж����ݣ�Ϊ0������b��bû������a
Ϊ1������a����ʱa--,b++�����aû������b
*/
int vc[200050];
int main(void)
{
	int n,a,b,sum=0,shangxian;
	scanf("%d%d%d",&n,&a,&b);
	shangxian=b;
	for(int i=0;i<n;i++)
		scanf("%d",&vc[i]);
	for(int i=0;i<n;i++){
		if(vc[i]==0){
			if(b>0)
				b--;
			else if(a>0)
				a--;}
		if(vc[i]==1){
			if(b<shangxian){
				if(a>0){
					a--;b++;}
				else if(b>0)
					b--;}
			else
				b--;}
		sum++;
		if(a==0&&b==0) break;
	}
	printf("%d",sum);
}
			


