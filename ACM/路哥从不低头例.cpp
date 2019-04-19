
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
const int maxn = 1e3 + 5;
typedef long long ll;
int w,h,n;
vector <int> vec[maxn];
int vis[maxn],f[4];
struct fun
{
    int x1,x2,y1,y2;
}z[maxn];
int check(fun a, fun b, int i)//aΪ�����ģ�
{
    bool flag = 1;
    if (a.x2 > b.x1 && a.x2 <= b.x2 && a.y2 > b.y1 && a.y2 <= b.y2)
        f[1] = i;
    if (a.x1 >= b.x1 && a.x1 < b.x2 && a.y2 > b.y1 && a.y2 <= b.y2)
        f[2] = i;
    if (a.x1 >= b.x1 && a.x1 < b.x2 && a.y1 >= b.y1 && a.y1 < b.y2)
        f[3] = i;
    if (a.x2 > b.x1 && a.x2 <= b.x2 && a.y1 >= b.y1 && a.y1 < b.y2)
        f[4] = i;
    if (a.x2 <= b.x1 || a.y1 >= b.y2 || a.x1 >= b.x2 || a.y2 <= b.y1)
        flag = 0;
    return flag;
}
int main()
{
    while(~scanf("%d%d%d", &w, &h, &n))
    {
        memset(f, 0, sizeof f);
        int ans = 0;
        int ansi = 0;
        for (int i = 1; i <= n; ++i)
            scanf("%d%d%d%d", &z[i].x1, &z[i].y1, &z[i].x2, &z[i].y2);//���벢�洢ÿһ������
        for (int i = n; i >= 1; --i)//�����һ������ʼ���
        {
            memset(vis, 0, sizeof vis);//��vis���
            int cnt = 1;//cntһ��ʼΪ1
            for (int j = n; j > i; --j)//�����һ��ֽ���i�ſ�ʼ�Ա�
                if (check(z[i], z[j], i))//��������ǣ��򽫸���i���±�j����vec
                    vec[i].emplace_back(j);//vec[i]����洢��ĳ��ֽ�����ֽ��
            int ff = 0;
            for (int j = 1; j <= 4; ++j)
                if (f[j] == i)//ÿ��һ���Ǳ����ǣ���ff++
                    ++ff;
            if (ff == 4)//����ĸ��Ƕ������ǣ���contniue
                continue;
            queue <int> q;//����н�¶��������
            q.emplace(i);//��q�м���iֽ��
            vis[i] = 1;
            while (!q.empty())//����
            {
                int t = q.front();//tΪq�Ķ�ͷ
                q.pop();//������ͷ
                for (int j = 0; j < vec[t].size(); ++j)//���ڸ�������ֽ�ſ�ʼ����
                {
                    int tt = vec[t][j];
                    if (!vis[tt])//�������ֽ����0����û��������
                    {
                        q.emplace(tt);//�ڶ����м�������ֽ
                        vis[tt] = 1;//��ǣ�����
                        ++cnt;//ͳ������+1
                    }
                }
            }
            if (cnt >= ans)
            {
                ans = cnt;
                ansi = i;
            }
        }
        for (int i = 1; i <= n; ++i)
            vec[i].clear();
        printf("%d %d\n", ans, ansi);
    }
    return 0;
}
