/*****************************************
Problem:输入统计（一般访问文件版） //输入输出到文件还是控制台由所写语句决定 
Copyright: Doux
Author: Pumpkinorth
Date:2017/03/15 
Description:输入几个整数，统计输入个数，求出其中的最大值，最小值和平均数 
*****************************************/
#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
	FILE *fin,*fout;
	fin=fopen("data.in","rb");
	fout=fopen("data.out","wb"); 
	const int INF=100000000;
	int a,n,max,min,s; 
	n=0;
	s=0;
	max=-INF;
	min=INF;							
	while(fscanf(fin,"%d",&a)==1)			
	{								
		s+=a;
		if(a>max)	max=a;
		if(a<min)	min=a;
		n++;
	} 
	fprintf(fout,"intputNum:%d\n",n);
	fprintf(fout,"max=%d,min=%d,ave:%.3lf\n",max,min,(double)s/n);
	printf("time used is %.2lf s",(double)clock()/CLOCKS_PER_SEC);
	fclose(fin);
	fclose(fout);
	return 0;
} 
