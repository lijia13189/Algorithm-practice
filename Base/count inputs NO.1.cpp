/*****************************************
Problem:输入统计（标准输入输出版） 
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
	const int INF=100000000;
	int a,n,max,min,s; 
	n=0;
	s=0;
	max=-INF;
	min=INF;							/*scanf()函数返回的值的意义为：正确按指定格式输入变量的个数；也即能正确接收到值的变量个数。
就是说正确接收值的个数。此时scanf("%d",&i)要求输入一个int数。因此只要按格式输入一个int数，结果都是1.
假如scanf("%d%d%d",&i，&j，&k)。你输入时10 20 d则scanf返回为2 */ 
	while(scanf("%d",&a)==1)			//scanf()函数的返回值是成功输入变量的个数，此处有输入时且为int型时，返回值即为1，否则返回值为0. 
	{									//但是此程序并不能在结束输入时候按Entry ，此时没有输出结果。在执行sacnf()函数时回车 ，一般为结束这一句语句，不代表输入为回车，即无法判断循环条件为否，即不会跳出循环 
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
