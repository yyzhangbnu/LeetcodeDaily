#include <iostream>
using namespace std;

typedef struct ListNode
        {
                int m_nKey;
                ListNode* m_pNext;
        }ListNode;
void CreateList(ListNode* & head, int data)
{
        ListNode* p = (ListNode*)malloc(sizeof(ListNode));
        p->m_nKey = data;
        p->m_pNext = NULL;

        if(head==NULL)
        {
                head=p;
                return;
        }
        p->m_pNext=head;
        head=p;
}
void printList(ListNode* head)
{
        ListNode* p = head;
        while(p!=NULL)
        {
                cout<<p->m_nKey<< " ";
                p=p->m_pNext;
        }
        cout<<endl;
}



ListNode* ReverseList(ListNode* head)
        {
                if(head == NULL || head->m_pNext == NULL)
                {
                        return head;
                }
                else
                {
                        ListNode* newhead = ReverseList(head->m_pNext);
                        head->m_pNext->m_pNext = head;
                        head->m_pNext = NULL;
                        return newhead;
                }

        }
int main()
{

        ListNode* Head = NULL;
        for(int i=0; i<10; i++)
        {
                CreateList(Head, i);
        }
        printList(Head);
        Head = ReverseList(Head);
        printList(Head);

        return 0;
}
