#include <stdio.h>
int main(void)
{
	int a,b,c,d,e,f;//aΪѭ���Ĵ�����cΪa�ĸ�λ����dΪa/10,e�ж�1234567890�����ѭ��������f�жϸ�λ����ѭ������
	scanf("%d",&a);
	b=0;
	if(a<=9)
		while(b<a){
			b++;

			printf("%d",b);
	}
		else{
			c=a/10;
			d=a%10;e=1;f=1;
			while(e<=c){
				printf("1234567890");
				e++;
			}
			while(f<=d){
				printf("%d",f);
				f++;
			}
		}
	return(0);
}


