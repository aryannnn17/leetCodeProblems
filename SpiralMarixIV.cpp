// #include <bits/stdc++.h>
// using namespace std;

// struct ListNode
// {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
// void makeSpiral(ListNode *head, int m, int n)
// {
//     // int left, counter = 1, right, outter, top, bot;
//     int left = 0, counter = 1, right = n - 1, dir = 0, top = 0, bot = m - 1;
//     vector<vector<int>> matrix(m, vector<int>(n));

//     while (left <= right && top <= bot)
//     {
//         if (dir == 0)
//         {
//             for (int k = left; k <= right; k++)
//             {
//                 if (head->val == NULL)
//                 {
//                     matrix[top][k] = -1;
//                 }
//                 else
//                 {
//                     matrix[top][k] = head->val;
//                 }
//                 head = head->next;
//                 //*(pa + rows * top + k) = counter;
//                 // a[top][k] = counter;
//                 // cout << counter << " at: " << top << '\t' << k << "\n";
//                 // counter++;
//             }
//             top++;
//             dir++;
//         }
//         else if (dir == 1)
//         {
//             for (int k = top; k <= bot; k++)
//             {
//                 //*(pa + rows * k + right) = counter;
//                 if (head->val == NULL)
//                 {
//                     matrix[k][right] = -1;
//                 }
//                 else
//                 {
//                     matrix[k][right] = head->val;
//                 }
//                 head = head->next;
//             }
//             right--;
//             dir++;
//         }
//         else if (dir == 2)
//         {
//             for (int k = right; k >= left; k--)
//             {
//                 //*(pa + rows * bot + k) = counter;
//                 if (head->val == NULL)
//                 {
//                     matrix[bot][k] = -1;
//                 }
//                 else
//                 {
//                     matrix[bot][k] = head->val;
//                 }
//                 head = head->next;
//                 // a[bot][k] = counter;
//                 // cout << counter << " at: " << bot << '\t' << k << "\n";
//                 // counter++;
//             }
//             bot--;
//             dir++;
//         }
//         else if (dir == 3)
//         {
//             for (int k = bot; k >= top; k--)
//             {
//                 if (head->val == NULL)
//                 {
//                     matrix[k][left] = -1;
//                 }
//                 else
//                 {
//                     matrix[k][left] = head->val;
//                 }
//                 head = head->next;
//                 //*(pa + rows * k + left) = counter;
//                 // a[k][left] = counter;
//                 // cout << counter << " at: " << k << '\t' << left << "\n";
//                 // counter++;
//             }
//             left++;
//             dir++;
//         }
//         dir %= 4;
//     }
//     for (int i = 0; i < m; ++i)
//     {
//         for (int j = 0; j < n; ++j)
//         {
//             cout << matrix[i][j] << '\t';
//         }
//         cout << endl;
//     }
//     // return matrix;
// }

// int getnum(ListNode *head)
// {
//     int num;
//     if (head == NULL)
//     {
//         head->next->val = -1;
//     }
//     else
//     {
//         num = head->val;
//     }
//     return num;
// }
// class Solution
// {
// public:
//     void spiralMatrix(int m, int n, ListNode *head)
//     {
//         // makeSpiral(head,m,n);
        
        
//     }
// };

// void printlist(ListNode *head)
// {
//     while (head != NULL)
//     {
//         cout << " " << head->val;
//         head = head->next;
//     }
//     cout << endl;
// }


// // void printSpiral(vector<vector<int>> matrix(int m, vector<int> n), int m, int n)
// // {
// //     for (int i = 0; i < maxRow; ++i)
// //     {
// //         for (int j = 0; j < maxCol; ++j)
// //         {
// //             cout << a[i][j] << '\t';
// //         }
// //         cout << endl;
// //     }
// //     return;
// // }
// int main()
// {
//     Solution sol;
//     int m = 3, n = 5;
//     ListNode *head = new ListNode(3);
//     head->next = new ListNode(0);
//     head->next->next = new ListNode(2);
//     head->next->next->next = new ListNode(6);
//     head->next->next->next->next = new ListNode(8);
//     head->next->next->next->next->next = new ListNode(1);
//     head->next->next->next->next->next->next = new ListNode(7);
//     head->next->next->next->next->next->next->next = new ListNode(9);
//     head->next->next->next->next->next->next->next->next = new ListNode(4);
//     head->next->next->next->next->next->next->next->next->next = new ListNode(2);
//     head->next->next->next->next->next->next->next->next->next->next = new ListNode(5);
//     head->next->next->next->next->next->next->next->next->next->next->next = new ListNode(5);
//     head->next->next->next->next->next->next->next->next->next->next->next->next = new ListNode(0);
//     // printlist(head);
//     makeSpiral(head,3,5);
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

void makeSpiral(ListNode* head, int m, int n) {
    int left = 0, right = n - 1, dir = 0, top = 0, bot = m - 1;
    vector<vector<int>> matrix(m, vector<int>(n));

    while (left <= right && top <= bot) {
        if (dir == 0) {
            for (int k = left; k <= right; k++) {
                if (head == nullptr) {
                    matrix[top][k] = -1;
                } else {
                    matrix[top][k] = head->val;
                    head = head->next;
                }
            }
            top++;
        } else if (dir == 1) {
            for (int k = top; k <= bot; k++) {
                if (head == nullptr) {
                    matrix[k][right] = -1;
                } else {
                    matrix[k][right] = head->val;
                    head = head->next;
                }
            }
            right--;
        } else if (dir == 2) {
            for (int k = right; k >= left; k--) {
                if (head == nullptr) {
                    matrix[bot][k] = -1;
                } else {
                    matrix[bot][k] = head->val;
                    head = head->next;
                }
            }
            bot--;
        } else if (dir == 3) {
            for (int k = bot; k >= top; k--) {
                if (head == nullptr) {
                    matrix[k][left] = -1;
                } else {
                    matrix[k][left] = head->val;
                    head = head->next;
                }
            }
            left++;
        }
        dir = (dir + 1) % 4;
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << '\t';
        }
        cout << endl;
    }
}

class Solution {
public:
    void spiralMatrix(int m, int n, ListNode* head) {
        makeSpiral(head, m, n);
    }
};

int main() {
    Solution sol;
    int m = 3, n = 5;
    ListNode* head = new ListNode(3);
    head->next = new ListNode(0);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(6);
    head->next->next->next->next = new ListNode(8);
    head->next->next->next->next->next = new ListNode(1);
    head->next->next->next->next->next->next = new ListNode(7);
    head->next->next->next->next->next->next->next = new ListNode(9);
    head->next->next->next->next->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next->next->next->next->next = new ListNode(2);
    head->next->next->next->next->next->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next->next->next->next->next->next->next = new ListNode(0);

    sol.spiralMatrix(m, n, head);

    // Clean up memory
    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
