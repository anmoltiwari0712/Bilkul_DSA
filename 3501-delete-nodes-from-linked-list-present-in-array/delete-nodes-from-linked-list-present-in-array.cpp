
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        ListNode* dummy = new ListNode(-1);

        dummy->next = head;

        ListNode* curr = head;
        ListNode* prev = dummy;

        unordered_map<int,int> mp;
        for(int i: nums){
            mp[i]++;
        }

        while(curr!=NULL){

            if(mp.find(curr->val)!=mp.end()){
                ListNode* nextNode = curr->next;

                prev->next = nextNode;
                curr =nextNode;
            }else{
                prev = curr;
                curr =curr->next;
            }

        }

        return dummy->next;
    }
};