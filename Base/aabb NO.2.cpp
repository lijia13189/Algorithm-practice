/*****************************************
Problem:aabb问题&&NO.2 (枚举平方根，判断该数的平方是aabb形式)
Copyright: Doux
Author: Pumpkinorth
Date:2017/03/15 
Description:输出所有形如aabb的四位完全平方数（结果为7744，又称7744问题） 
*****************************************/
#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
	int x,n,a,b;
	for(x=1;;x++)				//从1到无穷，其实可以人为加上范围，但是这点数据对计算机而言微不足道 
	{
		n=x*x;
		if(n<1000)	continue;
		if(n>9999)	break;
		a=n/100;
		b=n%100;
		if(a/10==a%10&&b/10==b%10)
		printf("%d\n",n);
	} 
		// clock()是C语言里的计时函数以毫秒为单位 （要应用time.h头文件），除以CLOCKS_PER_SEC 则变换成以秒为单位的程序运行时间  
	printf("time used is %.2lf s",(double)clock()/CLOCKS_PER_SEC);		
	return 0;
} 
