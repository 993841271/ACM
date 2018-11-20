/*
题目描述
ACM公司生产金币的设备出了问题，使得最近生产的10批金币的重量出现了波动：本来金币的标准重量是10克，但现在有的可能是11克，有的可能9克，也有可能是10克。 
现在只知道同一批金币的重量是相同的，你的任务是要把每批的单枚金币的重量找出来。 
你的设备有一个电子秤，但只允许称量一次！ 
你从第1批中取1枚金币，第2批取3枚，...第i批取3^(i?1)枚...，第10批取3^9枚，总共29524枚。将这29524枚金币放在电子秤上，得到了总重量，就交给你的程序去！ 
输入
有多个测试序列，每个测试序列一行，包含一个6位的正整数W(265716≤W≤324764)，表示29524枚金币的总重量 
输出
每个测试序列输出一行，包含10个用空格分开的正整数，分别表示10批金币的单枚重量，注意行尾没有空格。
*/


#include <stdio.h>
int main(void)
{
	long int i,a,b,n,vc[11],vb[11],j,k,sum;
	while(scanf("%d",&n)!=EOF)
	{
		a=1;vc[0]=1;
		sum=0;
		for(i=1;i<10;i++)
		{
			a*=3;
			vc[i]=a;
		}
		for(vb[0]=9;vb[0]<12;vb[0]++)
		for(vb[1]=9;vb[1]<12;vb[1]++)
		for(vb[2]=9;vb[2]<12;vb[2]++)
		for(vb[3]=9;vb[3]<12;vb[3]++)
		for(vb[4]=9;vb[4]<12;vb[4]++)
		for(vb[5]=9;vb[5]<12;vb[5]++)
		for(vb[6]=9;vb[6]<12;vb[6]++)
		for(vb[7]=9;vb[7]<12;vb[7]++)
		for(vb[8]=9;vb[8]<12;vb[8]++)
		for(vb[9]=9;vb[9]<12;vb[9]++)
		{
			sum=0;
			for(k=0;k<10;k++)
			{
				sum+=vc[k]*vb[k];
			}
			if(sum==n)
			{
				printf("%d",vb[0]);
				for(k=1;k<10;k++)
					printf(" %d",vb[k]);
				printf("\n");
			}
		}
	}
}







