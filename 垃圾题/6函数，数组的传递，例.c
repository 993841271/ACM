#include <stdio.h>
#define NUMBER 6
int max_of(int vc[],int no)
{
	int i;
	int max=vc[0];
	for(i=1;i<no;i++)
		if (vc[i]>max)
			max=vc[i];
		return(max);
}

int main(void)
{
	int i;
	int eng[NUMBER];
	int mat[NUMBER];
	int max_e,max_m;

	printf("������%d��ѧ���ķ���.\n",NUMBER);  
	for (i=0;i<NUMBER;i++){
		printf("[%d]Ӣ��:",i+1);  scanf("%d",&eng[i]);
		printf("   ��ѧ:");   scanf("%d",&mat[i]);
	}
	max_e=max_of(eng[NUMBER],NUMBER);
	max_m=max_of(mat[NUMBER],NUMBER);
	printf("Ӣ�����߷�=%d\n",max_e);
	printf("��ѧ����߷�=%d\n",max_m);
	return(0);
}