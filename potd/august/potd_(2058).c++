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
        vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>res;
        ListNode* curr=head->next;
        ListNode* prev=head;
        ListNode* next=NULL;
        int count=2;
        vector<int>ans(2,-1);
        if(curr->next==NULL){
           return ans;
        }
        while(curr->next!=NULL){
            next=curr->next;
            if(prev->val>curr->val && curr->val<next->val) res.push_back(count);
            if(prev->val<curr->val && curr->val>next->val) res.push_back(count);
            prev=curr;
            curr=next;
            count++;
        }
        int minval=INT_MAX;
        if(res.size()>=2){
        for(int i=0;i<res.size()-1;i++){
            int sub=abs(res[i]-res[i+1]);
            if(sub<minval) minval=sub;
        }
        ans[0]=minval;
        ans[1]=abs(res[res.size()-1]-res[0]);
        }
        return ans;
    }
};
