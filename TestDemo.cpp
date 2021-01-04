//
// Created by Guoheng on 2021/1/4.
//

#include "TestDemo.h"

int* pointerDemo(){
    //测试能否返回一个指向在函数中创建的数组的指针
    // int pointer[10];这种写法错误，这样对象的内存分配在栈（stack）上当函数退出时，该块内存也就被出stack
    int *pointer=new int [10];//正确这样的内存在堆（heap）上分配，函数结束时不会被清理
    for (int i = 0; i <10 ; ++i) {
        pointer[i]=i;
    }
    return pointer;
}
