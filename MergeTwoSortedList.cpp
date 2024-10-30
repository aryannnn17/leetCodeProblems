#include <bits/stdc++.h>
using namespace std;

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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *sortedList = new ListNode(-1);
        ListNode *head = sortedList;

        vector<int> vec;
        while (list1 != nullptr)
        {
            vec.push_back(list1->val);
            list1 = list1->next;
        }
        while (list2 != nullptr)
        {
            vec.push_back(list2->val);
            list2 = list2->next;
        }
        sort(vec.begin(),vec.end());

        for(int i=0; i<vec.size();i++){
            sortedList->next = new ListNode(vec.at(i));
            sortedList = sortedList->next;
        }
        head = head->next;
        return head;
    }
};

void printlist(ListNode *head)
{
    while (head != NULL)
    {
        cout << " " << head->val;
        head = head->next;
    }
    cout << endl;
}
int main()
{
    Solution sol;
    ListNode *list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);

    ListNode *list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    cout << "SortedList Linkedlist : ";
    printlist(sol.mergeTwoLists(list1, list2));
    // cout << "Linkedlist 2: " ;
    // printlist(list2);
    return 0;
}