#include <iostream> //头文件 (输入输出信息流)_带哪些工具
#include <cmath> //数学函数库
using namespace std; //(使用) 命名空间 (标准)_告诉电脑你要去哪里

double root(double x, double y) //求 x-y 的平方根 
{
	if(x >= y) return sqrt(x - y); //square root
	else return 0;
}

int main() //主程序
{
	cout << "HelloWorld!" << endl; //end line 结束这一行(会换行)
	
	int a, b, sum;
	cin >> a >> b; //输入两个数
	sum = a + b;
	cout << "a+b=" << sum << endl;
	
	double c, d;
	cin >> c >> d;
	cout << root(c, d) <<endl;	
	
	return 0;
}