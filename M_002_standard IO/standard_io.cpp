/*****************************************
Problem: 从键盘输入两个数  打印显示两者较大值减去较小值的差 
Copyright: Doux
Author: Pumpkinorth
Date:2016/12/25 16:54 
Description:标准输入输出
*****************************************/

#include<iostream>
using namespace std; 
int main()
{
	long a,b,c;
	while(cin>>a>>b)
	{
		if(b>a)
			c=b-a;
		else
			c=a-b;
		cout<<c<<endl;
	}
	return 0;
}
