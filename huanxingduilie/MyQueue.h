

/*
  c++ ���ζ���
*/
#ifndef MYQUEUE_H
#define MYQUEUE_H
class MyQueue
{
public:
     MyQueue(int queueCapacity);         //��������
     virtual ~MyQueue();                  //���ٶ���
     void ClearQueue();                   //��ն���
     bool QueueEmpty() const;             //�пն���
     bool QueueFull() const;               //�ж�Ϊ��
     int QueueLength() const;             //���г���
     bool EnQueue(int element);           //��Ԫ�����
     bool DeQueue(int &element);          //��Ԫ�س���
     void QueueTraverse();                //��������
    private:
      int *m_pQueue;                      //��������ָ��
      int m_iQueueLen;                    //����Ԫ�ظ���
      int m_iQueueCapacity;               //���е���������

      int m_iHead;
      int m_iTail;
};

#endif
