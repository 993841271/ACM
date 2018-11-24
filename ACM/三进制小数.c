/*
题目描述
你的任务呢，是将一个有理数转换成三进制小数。“什么是三进制小数呢？”你一定会问，这很明白，就是以三为基（二进制数以2为基，而十进制数则以10为基）的小数。 
输入
有理数的值都是在0与1之间的，每个有理数都由一个分子和一个分母表示，分子与分母之间隔着一个斜杠。有理数的个数不会超过1000个。 
输出
输出格式见样本输出，它是以小数点开头的具有10位精度的3进制数。 

*/
#include <stdio.h>
int main(void)
{
	int a=0,b=0,i,vc[15];
	double c;
	while(scanf("%d/%d",&a,&b)!=EOF)
	{
		c=(double)a/b;
		for(i=0;i<15;i++)
		{
			c*=3;
			vc[i]=(int)c;
			c-=vc[i];
		}
		if(vc[10]==2)
			vc[9]++;
		for(i=9;i>=0;i--)
		{
			if(vc[i]==3)
			{
				vc[i]=0;
				vc[i-1]++;
			}
		}
		printf(".");
		for(i=0;i<10;i++)
			printf("%d",vc[i]);
		printf("\n");
	}
}