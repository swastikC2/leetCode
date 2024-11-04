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
class Solution {
public:
    ListNode* revList(ListNode* head){
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* res = revList(head->next);
        head->next->next=head;
        head->next=nullptr;
        return res;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* tail = head;
        int size = 1;
        while (tail->next != nullptr) {
            size++;
            tail = tail->next;
        }
        if (size == 2) return head->val == tail->val;
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode * mid = revList(slow);
        while(mid!=nullptr){
            if(head->val!=mid->val) return false;
            head=head->next;
            mid=mid->next;
        }
        return true;
    }
};