/*****************************************
Problem:aabb问题&&NO.1 (先给出aabb型数，再判断该数字是不是完全平方数)
Copyright: Doux
Author: Pumpkinorth
Date:2017/03/15 
Description:输出所有形如aabb的四位完全平方数 （结果为7744，又称7744问题） 
*****************************************/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,n;
	double m;
	for(a=1;a<=9;a++)
	{
		for(b=0;b<=9;b++)
		{
			n=a*1100+b*11;
			m=sqrt(n);
			if(floor(m+0.5)==m)
				printf("%d\n",n);
		}
	} 
} 
