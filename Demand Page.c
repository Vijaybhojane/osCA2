#include<stdio.h>
int main()
{
	float eat,psft1,psft2,mat,pft;
	printf("*** ] Enter effective access time: \n");
	scanf("%f",&eat);
	if(eat<=200)
	{
		psft1=14000000;
		psft2=5600000;
		mat=100;
		pft=(psft1+psft2-mat)/(eat-mat);
		printf("%f",pft);
			}
	else
	{
		printf("///---- page can't be generated");
	}
}
