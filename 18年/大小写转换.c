/*
��Ŀ����
����һ���ַ�,�����еĴ�д���Сд������Ϊ��д��ԭ�����
����
�����ַ���(������100����)�Իس���ʾ�������
���
�����еĴ�д �����Ӧ��Сд������Ϊ��д��ԭ�����
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
	int i,a;
	char vc[101];
	gets(vc);
	a=strlen(vc);
	for(i=0;i<a;i++)
	{
		if(vc[i]<='Z'&&vc[i]>='A')
			printf("%c",tolower(vc[i]));
		else
			printf("%c",vc[i]);
	}
}