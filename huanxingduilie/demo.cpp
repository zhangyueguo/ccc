#include <iostream>
#include <stdlib.h>
#include "MyQueue.h"
#include "MyQueue.cpp"

using namespace std;

/*
  ʵ�ֻ��ζ���
*/
int main()
{
   MyQueue *p = new MyQueue(4);
   p->EnQueue(10);
   p->EnQueue(12);

   p->QueueTraverse();

   delete p;
   p = NULL;

   system("pause");
   return 0;
}
