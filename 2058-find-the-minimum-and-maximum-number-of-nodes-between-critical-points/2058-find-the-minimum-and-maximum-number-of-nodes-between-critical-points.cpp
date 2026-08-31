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
        vector<int>cp;
        ListNode* temp=head;
        int count=2;
        while(temp && temp->next && temp->next->next){
            ListNode* node=temp->next;
            if(node->next){
                if(temp->val<node->val && node->next->val<node->val){
                cp.push_back(count);
                }
                if(temp->val>node->val && node->next->val>node->val){
                    cp.push_back(count);
                }
            }
            temp=temp->next;
            count++;
        }
        if(cp.size()<2)
        return {-1,-1};
        int minDist=INT_MAX;
        for(int i=1;i<cp.size();i++){
            minDist=min(minDist,cp[i]-cp[i-1]);
        }
        int maxDist=cp.back()-cp.front();
        return {minDist,maxDist};
    }
};