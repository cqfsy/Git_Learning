/*
 * 作者：冯甚尧
 * 邮箱：fengshenyao@foxmail.com
 * 简介：这是一个学习Git的代码
 * */

#include <iostream>


int count(){
    int a = 0;
    static int b = 0;
    ++a;
    ++b;
    std::cout << "a: " << a << ", b: " << b << std::endl;
    return 0;
}

int main() {
    std::cout << "【这是一个体现静态变量特性的例子】" << std::endl;
    for(int i = 0; i < 3; ++i){
        count();
    }
    std::cout << "结束了" << std::endl;
    return 0;
}