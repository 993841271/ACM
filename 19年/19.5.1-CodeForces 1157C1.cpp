#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int vc[200005];
vector<int> cuozuo;
int main(void)
{
	int n,zhong=-99999999;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&vc[i]);
	int zuo=0,you=n-1;
	//1.��������С�ı�2.�ô�ı�3.��������break
	while(zuo<=you){
		int flag=0;
		if(vc[zuo]<vc[you]){//1��ʾ��2��ʾ��
			if(vc[zuo]>zhong){
				zhong=vc[zuo];zuo++;flag=1;cuozuo.push_back(1);}
			else if(vc[you]>zhong){
				zhong=vc[you];you--;flag=1;cuozuo.push_back(2);}}
		else{
			if(vc[you]>zhong){
				zhong=vc[you];you--;flag=1;cuozuo.push_back(2);}
			else if(vc[zuo]>zhong){
				zhong=vc[zuo];zuo++;flag=1;cuozuo.push_back(1);}}
		if(flag==0) break;}
	printf("%d\n",cuozuo.size());
	for(int i=0;i<cuozuo.size();i++){
		if(cuozuo[i]==1)
			printf("L");
		else
			printf("R");}

}





