#include <iostream>
#include "stdlib.h"
#include "MyStack.h"

using namespace std;

/*
  ջ��
  Ҫ��: MyStack(int size);    //�����ڴ��ʼ��ջ�ռ䣬�趨ջ������ջ��

        ~MyStack();           //����ջ�ռ��ڴ�
        bool stackEmpty();    //�ж�ջ�Ƿ�Ϊ�գ�Ϊ�շ���true���ǿշ���false
        bool stackFull();     //�ж�ջ�Ƿ�������Ϊ������true����������false
        void clearStack();    //���ջ
        int stackLength();    //����Ԫ�صĸ���
        void push(char elem)  //Ԫ����ջ��ջ������
        char pop(char &elem); //Ԫ�س�ջ��ջ���½�
        void stackTraverse(); //����ջ������Ԫ��

        Ŀ�ģ�����ջ��ʵ��ԭ������л���
*/
