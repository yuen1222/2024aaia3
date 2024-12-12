class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode*ans=new ListNode();
       ListNode*now=ans;
       int carry=0;
       while(l1!=nullptr||l2!=nullptr){
        if(l1==nullptr){
            int here=l2->val+carry;
            carry=here/10;
            now->next=new ListNode(here%10);
            now=now->next;
            //l1=l1->next;
            l2=l2->next;
        }
        else if(l2==nullptr){
           int here=l1->val+carry;
            carry=here/10;
            now->next=new ListNode(here%10);
            now=now->next;
            l1=l1->next;
           // l2=l2->next;
        }
        else{
            int here=l1->val+l2->val+carry;
            carry=here/10;
            now->next=new ListNode(here%10);
            now=now->next;
            l1=l1->next;
            l2=l2->next;
        }
        if(carry>0)now->next=new ListNode(carry);
        }
       return ans->next;

    }
};
