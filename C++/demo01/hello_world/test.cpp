#include <iostream> //头文件 (输入输出信息流)_带哪些工具
#include <cmath> //数学函数库
using namespace std; //(使用) 命名空间 (标准)_告诉电脑你要去哪里

int main( )
{
    double yn = sqrt(2);
    //int n = 10;
    for (int i = 1; i < 11; i++)
    {
        yn = 10 * yn - 1;
        cout << "the " << i << " is " << yn << endl;
    }
    
    return 0;
}
