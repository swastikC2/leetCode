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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr || head->next==nullptr) return nullptr;
        ListNode* temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        count=count-n-1;
        if(count==-1){
            return head->next;
        }
        temp=head;
        while(count--){
            temp=temp->next;
        }
        if(temp->next==nullptr){
            return nullptr;
        }
        temp->next=temp->next->next;
        return head;
    }
};