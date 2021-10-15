/*
【两数之和】
输入
  输入两个整数a, b。

输出
  输出a b相加的和数。

示例
  输入：
	5 3
  输出：
	8
*/

#define JUDGE_MODE
#include "./judge/A002.h"
#include <iostream>

using namespace std;
int main()
{
	/*在此处添加你的代码*/
	cout<<"enter intenge: ";
	int x,y;
	cin>>x;
	cin>>y;
	int c;
	c=x+y;
	cout<<c<<endl;
	return 0;
}
