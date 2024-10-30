#include <bits/stdc++.h>
using namespace std;

//   Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *temp = head;
        ListNode *prev = head;
        while (temp->next != NULL)
        {
            if (prev->val == temp->next->val)
            {
                ListNode *deleteNode = temp->next;
                prev = deleteNode->next;
                if (temp->next->next != NULL)
                {
                    temp = temp->next->next;
                }
                else
                {
                    temp = temp->next;
                }
                delete deleteNode;
            }
            else
            {
                if (temp->next->next != NULL)
                {
                    temp = temp->next->next;
                }
                else
                {
                    temp = temp->next;
                }
                // temp = temp->next->next;
                prev = prev->next;
            }
        }
        return head;
    }
};

int main()
{
    Solution sol;
    ListNode *temp = new ListNode(1);
    temp = new ListNode(1);
    temp = new ListNode(2);
    ListNode *ans = sol.deleteDuplicates(temp);
    while (ans->next != NULL)
    {
        cout<<"hi"<< " ";
        cout << ans->val << " ";
        ans = ans->next;
    }
    return 0;
}