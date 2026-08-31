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
        int pos=1;
        int first=-1;
        int prev=-1;
        int minDist=INT_MAX;
        ListNode* temp=head;
        while(temp && temp->next && temp->next->next){
            int curr=pos+1;
            if((temp->val<temp->next->val &&
                 temp->next->val>temp->next->next->val)||
                (temp->val>temp->next->val &&
                 temp->next->val<temp->next->next->val)){
                    if(first==-1){
                        first=curr;
                    }
                    if(prev!=-1){
                        minDist=min(minDist,curr-prev);
                    }
                    prev=curr;
                 }
            temp=temp->next;
            pos++;
        }
        if(first==-1||prev==first)
        return {-1,-1};
        int maxDist=prev-first;
        return {minDist,maxDist};
    }
};