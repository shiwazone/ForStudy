#pragma once

template<typename T>
class Queue
{
#define INVALID_NODE_PTR 0
struct QueueNode
{
    T _data;
    QueueNode* _next;    
    QueueNode():_next(INVALID_NODE_PTR)
    {}
};


private:
    QueueNode* m_pHead;
    QueueNode* m_pTail;
public:
    Queue(/* args */);
    ~Queue();

    bool IsEmpty();
    bool InsertTail(const T& data);
    bool PopHead(T& data);
};


template<typename T>
Queue<T>::Queue()
:m_pHead(INVALID_NODE_PTR),m_pTail(INVALID_NODE_PTR)
{

}

template<typename T>
Queue<T>::~Queue()
{
    while (m_pHead != INVALID_NODE_PTR)
    {
       QueueNode* temp = m_pHead->_next;
       delete m_pHead;
       m_pHead = temp;
    }

    m_pTail = INVALID_NODE_PTR;    
}

template<typename T>
bool Queue<T>::IsEmpty()
{
    return ((INVALID_NODE_PTR == m_pHead)&&(INVALID_NODE_PTR == m_pTail));
}

template<typename T>
bool Queue<T>::InsertTail(const T& data)
{
    QueueNode* pItem = new QueueNode();
    pItem->_data = data;

    if (IsEmpty())
    {
        m_pTail = pItem;
        m_pHead = pItem;
    }
    else
    {
        m_pTail->_next = pItem;
        m_pTail = pItem;
    }
    
    return true;    
}

template<typename T>
bool Queue<T>::PopHead(T& data)
{
    if (IsEmpty())
    {
        return false;
    }
    else
    {
        data = m_pHead->_data;
        QueueNode* pItem = m_pHead->_next;
        delete m_pHead;
        m_pHead = pItem;
        if (INVALID_NODE_PTR == m_pHead)
        {
            m_pTail = INVALID_NODE_PTR;
        }
        
        return true;
    }
}

