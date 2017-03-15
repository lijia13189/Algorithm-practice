/*****************************************
Problem:Fibonacci数列
Copyright: Doux
Author: Pumpkinorth
Date:2017/02/21
Description:Fibonacci数列的递推公式为：Fn=Fn-1+Fn-2，其中F1=F2=1。
			当n比较大时，Fn也非常大，现在我们想知道，Fn除以10007的余数是多少。
			输入格式：输入包含一个整数n。
			输出格式：输出一行，包含一个整数，表示Fn除以10007的余数。
*****************************************/

#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	if(n>=1&&n<=1000000)
	{
		int f[n]={1,1};
		//f[0]=1;
		//f[1]=1;
		for(i=2;i<n;i++)
		{
			f[i]=(f[i-1]+f[i-2];
		}	
		printf("%d",f[n-1]%10007);	//下面是蓝桥杯系统给出的答案，上面是我自己的 想不明白 
		/*for(i=2;i<n;i++)
		{
			f[i]=(f[i-1]+f[i-2];
		}	
		printf("%d",f[n-1]%10007);
		*/	
	}
	return 0;
}
