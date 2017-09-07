#include <iostream>
#include <stdlib.h>
#include "MyQueue.h"
#include "MyQueue.cpp"

using namespace std;

/*
  实现环形队列
*/
int main()
{
   MyQueue *p = new MyQueue(4);
   p->EnQueue(10);
   p->EnQueue(12);
   p->EnQueue(16);
   p->EnQueue(18);
   //p->EnQueue(20);

   p->QueueTraverse();

//第一次删除
   int e = 0;
   p->DeQueue(e);
   cout << endl;
   cout << e << endl;
//第二次删除
   p->DeQueue(e);
   cout << endl;
   cout << e << endl;

   //遍历一次
   cout<<endl;
   p->QueueTraverse();

   p->ClearQueue();
   p->QueueTraverse();



   p->EnQueue(22);
   p->EnQueue(29);
 p->QueueTraverse();

   delete p;
   p = NULL;

   system("pause");
   return 0;
}
