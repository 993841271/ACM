#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

  
int f(int m,int n)//mΪƻ����nΪ����
{
	if(m<n)//���Ӷ���ƻ��   ȥ�����������
		return f(m,m);
	if(m==0)
		return 1;
	if(n==0)
		return 0;
	//��������ƻ��   1.�п�����   2.�޿����� 
	return f(m,n-1)+f(m-n,n);//���ӿ�һ������������Ӳ�Ϊ�յ����
}

int main(void)
{
	int t,m,n;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		cout<<f(m,n)<<endl;
	}
	return 0;
}
