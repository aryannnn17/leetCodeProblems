#include <bits/stdc++.h>

using namespace std;

// *
//  * Definition for singly-linked list.
struct node
{
    int val;
    node *next;
    node() : val(0), next(nullptr) {}
    node(int x) : val(x), next(nullptr) {}
    node(int x, node *next) : val(x), next(next) {}
};

class Solution
{
public:
    node *modifiedList(vector<int> &nums, node *head)
    {
        node *temp = head;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if(temp->val==nums.at(i)){
                node* to_delete = temp;
                temp=temp->next;

                delete to_delete;
            }
            while (temp->next->val != nums.at(i))
            {
                temp = temp->next;
            }
            node* to_delete = temp->next;
            temp->next = temp->next->next;

            delete to_delete;
        }
        return temp;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1,2,3};
    node* head ;
    // sol.modifiedList()
    return 0;
}