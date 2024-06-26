/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        ListNode *ptr = head;
        vector<int> num;
        while (ptr->next != NULL)
        {
            num.push_back(ptr->val);
            ptr = ptr->next;
            if (ptr->next == NULL)
            {
                num.push_back(ptr->val);
            }
        }
        int end = num.size() - 1;
        for (int i = 0; i < num.size(); i++)
        {
            if (num[i] == num[end])
            {
                end--;
            }
            else
            {
                return 0;
            }
        }
        return 1;
    }
};