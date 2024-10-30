#include <bits/stdc++.h>
using namespace std;

// void printAll(ListNode *&head){
//     Listno
// }

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void printAll(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return;
}
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *temp = head;
        if (temp == NULL)
            return head;
        // if(temp->next == NULLL )
        while (temp->next != NULL)
        {
            if (temp->val == temp->next->val)
            {
                if (temp->next->next == NULL)
                {
                    temp->next = NULL;
                    temp = temp->next;
                    break;
                }
                else
                {
                    temp->next = temp->next->next;
                }
            }
            else
            {
                temp = temp->next;
            }
        }
        printAll(head);
        return head;
    }
};

int main()
{
    Solution sol;
    ListNode *temp = new ListNode(1);
    ListNode *head = temp;

    // temp->next = new ListNode(1);
    // temp = temp->next;

    // temp->next = new ListNode(1);
    // temp = temp->next;

    // temp->next = new ListNode(3);
    // temp = temp->next;

    // temp->next = new ListNode(3);
    // temp = temp->next;

    sol.deleteDuplicates(head);
    // printAll(head);
    return 0;
}