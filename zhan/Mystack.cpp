include "Mystack.h";

Mystack::Mystack(int size)
{
    m_iSize = size;
    m_pBuffer = new char[size];
    m_iTop = 0;
}

Mystack::~Mystack()
{
    delete []m_pBuffer;
}

bool Mystack::stackEmpty()
{
    if(m_iTop == 0)//if(0 == m_iTop)
    {
        return true;
    }
    return false;
}

bool Mystack::stackFull()
{
    if(m_iTop == m_iSize)
    {
        return true;
    }
    return false;
}

void Mystack::clearStack()
{
   m_iTop = 0;
}

int Mystack::stackLength()
{
    return m_iTop;
}

bool Mystack::pop(char &elem)
{
    if(stackEmpty())
    {
        return false;
    }
    m_iTop--;
    elem = m_pBuffer[m_iTop];
    return true;
}

bool Mystack::push(char elem)
{
    if(stackFull())
    {
       //throw
       return false;
    }
    m_pBuffer[m_iTop] = elem;
    m_iTop++;

    return true;
}

void Mystack::stackTraverse(bool isFromButtom)
{
    if(isFromButtom)
    {
        for(int i=0;i < m_iTop;i++)
        {
            cout << m_pBuffer[i] << endl;
        }
    }else{

       for(int i = m_iTop-1;i>=0;i--)
       {
           cout << m_pBuffer[i] << endl;
       }
    }

}



