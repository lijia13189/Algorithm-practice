/*****************************************
Problem: �Ӽ�������������  ��ӡ��ʾ���߽ϴ�ֵ��ȥ��Сֵ�Ĳ� 
Copyright: Doux
Author: Pumpkinorth
Date:2016/12/25 16:54 
Description:��׼�������
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
