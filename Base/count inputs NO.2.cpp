/*****************************************
Problem:输入统计（重定向访问文件版） //文件里有输出内容，控制台不显示内容 ,即将输入输出流全部重新定向到文件 
Copyright: Doux
Author: Pumpkinorth
Date:2017/03/15 
Description:输入几个整数，统计输入个数，求出其中的最大值，最小值和平均数 
*****************************************/
#define LOCAL 
#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
	#ifdef LOCAL
	freopen("data.in","r",stdin);
	freopen("data.out","w",stdout);
	#endif
	const int INF=100000000;
	int a,n,max,min,s; 
	n=0;
	s=0;
	max=-INF;
	min=INF;							
	while(scanf("%d",&a)==1)			
	{								
		s+=a;
		if(a>max)	max=a;
		if(a<min)	min=a;
		n++;
	} 
	printf("intputNum:%d\n",n);
	printf("max=%d,min=%d,ave:%.3lf\n",max,min,(double)s/n);
	printf("time used is %.2lf s",(double)clock()/CLOCKS_PER_SEC);
	return 0;
} 
