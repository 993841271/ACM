#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int num[25];//¼�����������
int ans[25];

int main(){
    int T;
    cin>>T;
    while(T--){
        memset(ans,0,sizeof(ans));
        int n;//nΪ������
        cin>>n;
        int sum=0;
        for(int i=1;i<=n;i++) 
			scanf("%d",&num[i]),sum+=num[i];//���������
        sum/=2;//��������2  
        for(int i=0;i<(1<<n);i++)//iʮ����ֱ�Ӻͺ��߶��������ֱȽ�    ѭ��ȫ��ϴ�
		{
            int add=0;
            for(int j=1;j<=n;j++) //ѭ��n��
				if((i>>(j-1))&1) //��1��nλ�ǲ���1���ǵĻ�add+�Ǹ���������
					add+=num[j];
            if(add>sum){//���add������������һ��
                for(int j=1;j<=n;j++)//��1��n���ж��Ƿ�����ؼ�������
				{
                    if((i>>(j-1))&1 && add-num[j]<=sum) //ĳһ����Ϊ1֤���������ڻ�ʤ�����У��ڶ�������֤��Ϊ�ؼ�������
						ans[j]++;//������ŵ�Ȩ��ָ��+1
                }
            }
        }
        for(int i=1;i<=n;i++) 
			printf("%s%d",i==1?"":" ",ans[i]);
        printf("\n");
    }
}
