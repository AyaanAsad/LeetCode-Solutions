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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        int carry = 0;
        ListNode* node1 = l1;
        ListNode* node2 = l2;
        while(carry!=0 || node1!=nullptr || node2!=nullptr){
            int sum=carry;
            if(node1!=nullptr){
                sum+=node1->val;
                node1=node1->next;
            }
            if(node2!=nullptr){
                sum+=node2->val;
                node2=node2->next;
            }
            carry=sum/10;
            ListNode* newNode = new ListNode(sum%10);
            if(head==nullptr){
                head=newNode;
                tail=newNode;
            }
            else{
                tail->next = newNode;
                tail=newNode;
            }
        }
        return head;
    }
};