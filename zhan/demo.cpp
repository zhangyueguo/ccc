#include <iostream>
#include "stdlib.h"
#include "MyStack.h"

using namespace std;

/*
  栈类
  要求: MyStack(int size);    //分配内存初始化栈空间，设定栈容量，栈顶

        ~MyStack();           //回收栈空间内存
        bool stackEmpty();    //判断栈是否为空，为空返回true，非空返回false
        bool stackFull();     //判断栈是否已满，为满返回true，不满返回false
        void clearStack();    //清空栈
        int stackLength();    //已有元素的个数
        void push(char elem)  //元素入栈，栈顶上升
        char pop(char &elem); //元素出栈，栈顶下降
        void stackTraverse(); //遍历栈中所有元素

        目的：掌握栈的实现原理和运行机制
*/
