/*
����u��v��Ȼ����m��
����a��b����������ڣ��ͽ���һ����Ȼ������ϵ
����vis[i]�м��Ϻ��ߵ�j��i��jΪ�����ַ�����Ӧ����ֵ
Ȼ���0��u֮�����ѣ��м���u��u+v֮��ģ��ͼ�¼
Ȼ��洢��set����
ע�⣺����һ��˫��map*/

#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <set>
using namespace std;
map<string,int>m;//
map<int,string>str;
set<string>shu;
vector<int> mapp[400100];//�ǵÿ���
int l,r;
int vis[200100];//��¼ÿ��ֵ�Ƿ񱻷��ʹ�
void dfs(int x)
{
	if(mapp[x].size()==0)
	{
		return;
	}
	for(int i=0;i<mapp[x].size();i++)
	{
		if(vis[mapp[x][i]]==0)
		{
			vis[mapp[x][i]]=1;
			if(mapp[x][i]>=l&&mapp[x][i]<=r)
			{
				shu.emplace(str[mapp[x][i]]);
			}
			dfs(mapp[x][i]);
		}
	}
}
int main()
{
	ios::sync_with_stdio(0),cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		//cout<<t<<endl;
		m.clear();
		str.clear();
		shu.clear();
		for(int i=1;i<=40000;i++)
			mapp[i].clear();
		memset(vis,0,sizeof(vis));
		int u,n,mm;
		string s;
		cin>>u>>n>>mm;
		int cnt=0;//��ÿ��һ�ַ���������ϵ
		for(int i=1;i<=u;i++)
		{cin>>s;cnt++;m[s]=cnt;str[cnt]=s;}
		l=cnt+1;
		for(int i=1;i<=n;i++)
		{	cin>>s;
			if(m[s]!=0)
				shu.insert(s);
			else{cnt++;m[s]=cnt;str[cnt]=s;}
		}
		r=cnt;
		string s1,s2;
		for(int i=1;i<=mm;i++)
		{
			cin>>s1>>s2;
			if(m[s1]==0){cnt++;m[s1]=cnt;str[cnt]=s1;}
			if(m[s2]==0){cnt++;m[s2]=cnt;str[cnt]=s2;}
			mapp[m[s1]].emplace_back(m[s2]);
			//int t=m[s2];
			//cout<<t;
		}//����������ɣ���ʼ����
		//cout<<mapp[1].size();
		for(int i=1;i<=u;i++)
		{
			if(vis[i]==0)
			{
				//printf("ppp");
				vis[i]=1;
				dfs(i);
			}
		}
		set<string>::iterator it1;
		for(it1=shu.begin();it1!=shu.end();it1++)
		{
			cout<<*it1<<" ";
		}
		cout<<endl;
	}
	/*for(int i=tt;i>=0;i--)
	{
		set<string>::iterator it1;
		for(it1=shu[i].begin();it1!=shu[i].end();it1++)
		{
			cout<<*it1<<" ";
		}
		cout<<endl;
	}*/
}