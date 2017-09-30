#ifndef MYSTACK_H_INCLUDED
#define MYSTACK_H_INCLUDED

class Mystack
{
 public:
    Mystack(int size);       //分配内存初始化空间，设定栈容量，栈顶
    ~Mystack();
    bool stackEmpty();
    bool stackFull();
    void clearStack();
    int stackLength();
    bool push(char elem);
    bool pop(char &elem);
    void stackTraverse(bool isFromButtom);

private:
   char *m_pBuffer;  //栈空间指针
   int m_iSize;      //栈容量
   int m_iTop;       //栈顶，栈中元素个数
};


#endif // MYSTACK_H_INCLUDED
