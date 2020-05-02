#pragma once

template <typename T>
class Stack
{
#define INVALID_STACK_PTR 0
    struct StackNode
    {
        T _data;
        StackNode* _next;
        StackNode(const T& data):_data(data),_next(INVALID_STACK_PTR)
        {

        }
    };
    
private:
    StackNode* m_pStackTop;
public:    
    Stack():m_pStackTop(INVALID_STACK_PTR)
    {

    }
    ~Stack()
    {
        StackNode* pItem = m_pStackTop;
        while (pItem != INVALID_STACK_PTR)
        {
            StackNode* pCur = pItem;            
            pItem = pItem->_next;       
            delete pCur;     
        }
        m_pStackTop = INVALID_STACK_PTR;
    }
    bool Push(const T& data)
    {
        StackNode* pItem = new StackNode(data);
        pItem->_next = m_pStackTop;
        m_pStackTop = pItem;
        return true;
    }
    bool Pop(T& data)
    {
        if (m_pStackTop != INVALID_STACK_PTR)
        {
            data = m_pStackTop->_data;
            StackNode* pItem = m_pStackTop->_next;
            delete m_pStackTop;
            m_pStackTop = pItem;
            return true;
        }
        else
        {
            return false;
        }     
    }
    bool IsEmpty()
    {
        return (m_pStackTop == INVALID_STACK_PTR);
    }
    bool Top(T& data)
    {
         if (m_pStackTop != INVALID_STACK_PTR)
        {
            data = m_pStackTop->_data;
            return true;
        }
        else
        {
            return false;
        }  
    }
};

