#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstdlib>
#include <cstring>
using namespace std;
const int maxn = 1e3 + 5;
vector<int> fu[maxn];//�ǵÿ���
int w,h,n;
int vis[maxn],f[4];
//int vis[maxn],f[4];
int i,j,k,t,ans,cnt,ansi,next1,now;
//int i,j,k,w,h,n,f[4],t,vis[maxn],now,next1,cnt,ans,ansi;//f��¼�ĸ��Ǳ�����
struct zbb//zb=����
{
	int x1,x2,y1,y2;//1��ʾ���½����꣬2��ʾ���Ͻ�����
}zb[maxn];
int pan(struct zbb a,struct zbb b,int k)//�ж��Ƿ񱻸��ǣ���һ���Ǳ�����
{
	bool flag=1;
	if(a.x2>b.x1&&a.x2<=b.x2&&a.y2>b.y1&&a.y2<=b.y2)f[1]=k;//���ϽǱ�����
	if(a.x1>=b.x1&&a.x1<b.x2&&a.y2>b.y1&&a.y2<=b.y2)f[2]=k;//����
	if(a.x1>=b.x1&&a.x1<b.x2&&a.y1>=b.y1&&a.y1<b.y2)f[3]=k;//����
	if(a.x2>b.x1&&a.x2<=b.x2&&a.y1>=b.y1&&a.y1<b.y2)f[4]=k;//����
	if(a.x2<=b.x1||a.y1>=b.y2||a.x1>=b.x2||a.y2<=b.y1) flag=0;//����ס�ǣ����Ǹ���
	return flag;//����������򷵻�1
}
int main(void)
{
	while(~scanf("%d%d%d",&w,&h,&n))
	{
		memset(f,0,sizeof(f));
		ans=0;
		ansi=0;
		for(i=1;i<=n;i++)
			scanf("%d%d%d%d",&zb[i].x1,&zb[i].y1,&zb[i].x2,&zb[i].y2);
		for(i=n;i>=1;i--)//�����һ��ֽ��ʼ����
		{
			//printf("i=%d\n",i);
			cnt=1;
			memset(vis,0,sizeof(vis));
			for(j=n;j>i;j--)
				if(pan(zb[i],zb[j],i))
					fu[i].emplace_back(j);//�ǵø���ֽ���±�
			t=0;
			for(j=1;j<=4;j++)//�жϼ����Ǳ�����
				if(f[j]==i)
					t++;
			if(t==4)
				continue;//����ĸ��Ƕ�������
			queue<int> q;
			q.emplace(i);
			vis[i]=1;//�����һ��ֽ������
			while(!q.empty())//��ʼ����
			{
				now=q.front();
				q.pop();
				for(j=0;j<fu[now].size();j++)
				{
					next1=fu[now][j];
					if(!vis[next1])//����ֽ��û���ѹ�
					{
						q.emplace(next1);
						vis[next1]=1;
						cnt++;
					}
				}
			}
			if(cnt>=ans)
			{
				ans=cnt;
				ansi=i;
			}
		}
		for(i=1;i<=n;i++)
			fu[i].clear();
		printf("%d %d\n",ans,ansi);
	}
	return 0;
}
