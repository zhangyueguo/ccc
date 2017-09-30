#ifndef MYSTACK_H_INCLUDED
#define MYSTACK_H_INCLUDED

class Mystack
{
 public:
    Mystack(int size);       //�����ڴ��ʼ���ռ䣬�趨ջ������ջ��
    ~Mystack();
    bool stackEmpty();
    bool stackFull();
    void clearStack();
    int stackLength();
    bool push(char elem);
    bool pop(char &elem);
    void stackTraverse(bool isFromButtom);

private:
   char *m_pBuffer;  //ջ�ռ�ָ��
   int m_iSize;      //ջ����
   int m_iTop;       //ջ����ջ��Ԫ�ظ���
};


#endif // MYSTACK_H_INCLUDED
