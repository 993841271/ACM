//Dijkstra
/*Dijkstra���ȶ��е��Ż������������غ�����������ʹ���ֵ������Сֵ
�����е�ԭ������Ż�����ʡ�˴����Ŀռ��ʱ�䣬����˼·Ϊ��vector�ֱ�
�洢�ߺ�Ȩ���ýṹ���е�Ԫ�������壬��������Ϊ���Ƚ����������ȶ��У��ȷŵ��ṹ���У��� 
Ȼ�Ӹõ㿪ʼ���������ɳڵĵ㣬Ȼ��ȫ����ʱ�浽�ṹ���У�Ȼ��������ȶ����У�
Ȼ������ó������ȶ����Զ����Ż����С���ó��������ɳڣ�ֱ������Ϊ�գ�
ע�⣬һ����ֻ�����һ��*/ 
#include<algorithm>
#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<vector>
#include<queue>
#include<set>
#include<map>
using namespace std;
const int size=105;
const int inf=0x3f3f3f3f;
struct Edge{
	int u,v,w;
	Edge(int u=0,int v=0,int w=0):u(u),v(v),w(w){} //���棺��㣬�յ㣬Ȩֵ
}; 
struct node{
	int id,w;
	node(int id=0,int w=0):id(id),w(w){}//���棺ÿ���������������С·��
	friend bool operator<(node a,node b)
	{
		return a.w>b.w;//�Զ���ṹ������ȼ�
	} 
};
priority_queue<node> q;//����һ����������
vector<Edge> edge[size];//ͼ
int dis[size],vis[size];
void Dijkstra(int beg)
{
	memset(dis,inf,sizeof(dis));
	memset(vis,0,sizeof(vis));//��ʼ��vis��dis
	while(!q.empty()) 
		q.pop();//����������q��ʼ��
	q.push(node(beg,0)),dis[beg]=0;//�����м���beg,����
	while(!q.empty())
	{
		node s=q.top();//ÿ��ȡ�����������ĵ� 
		q.pop();//�������Ԫ��
		int id=s.id;
		if(dis[id]!=s.w)//???//dis[1]=0,s.w=0,
			continue;
		for(int i=0;i<edge[id].size();i++)
		{
			if(dis[edge[id][i].v]>dis[id]+edge[id][i].w)//��һ�������dis���ڵ�ǰ�����dis+�¸������w
			{
				dis[edge[id][i].v]=dis[id]+edge[id][i].w;
				q.push(node(edge[id][i].v,dis[edge[id][i].v]));
			}
		}
	}
}
int main()
{
	int n,m;
	while(cin>>n>>m&&n)
	{
		int i,u,v,w;
		for(i=1;i<=n;i++) edge[i].clear(); //
		for(i=0;i<m;i++)
		{
			scanf("%lld%lld%lld",&u,&v,&w);
			edge[u].push_back(Edge(u,v,w));//Ϊÿ��edge[���]���һ����
			edge[v].push_back(Edge(v,u,w));//����������һ��
		}
		Dijkstra(1);//��1Ϊ��㿪ʼ����
		cout<<dis[n]<<endl;
	}
	return 0;
}