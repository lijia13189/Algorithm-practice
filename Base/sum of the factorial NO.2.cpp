/*****************************************
Problem:阶乘之和保留末尾六位数NO.2（在每一步上%1000000） (这两个算法果然是等价的耶，好吧，我自己证明的时候搞错了一个东西，2%10=2的不是0） 
Copyright: Doux
Author: Pumpkinorth
Date:2017/03/15 
Description:求1!+2!+3!+...+n!，并且打印输出结果的后六位如 输入10，则输出37913 
*****************************************/
#include<stdio.h>
#include<math.h>
#include<time.h>
//#define MOD 1000000
int main()
{
	const int MOD=1000000;
	int n,s,i,j,a;
	s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=1;
		for(j=1;j<=i;j++)
		{
			a=(a*j)%MOD;
		}
		s=(s+a)%MOD;
	}
	printf("%d\n",s);
	printf("time used is %.2lf s",(double)clock()/CLOCKS_PER_SEC);
	return 0;
} 
