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
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) {
            return nullptr;
        }
        ListNode* temp = head;
        ListNode* temp2 = head;
        ListNode* prev = nullptr;
        while(temp2 && temp2->next){
            prev = temp;
            temp=temp->next;
            temp2=temp2->next->next;
        }
        prev->next=temp->next;
        return head;   
    }
};
