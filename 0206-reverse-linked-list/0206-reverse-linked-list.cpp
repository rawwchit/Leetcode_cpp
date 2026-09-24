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
    ListNode* reverseList(ListNode* head) {
        // Your current solution is CORRECT and OPTIMAL.
        // Time Complexity: O(n) - where n is the number of nodes, as we traverse the list once.
        // Space Complexity: O(1) - as we only use a few pointers regardless of list size.
        // This is the standard iterative approach for reversing a linked list.
        
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;
        while(curr!=nullptr){
            next= curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
};

// Great job! Your implementation is clean and efficient.
// You can now click the "Push" button (Git icon) in your toolbar to sync this to your GitHub repository.
// If you want to explore alternative ways to solve this, consider trying the Recursive approach!
// If you're feeling stuck on other problems, don't forget to check the "Video Solutions" tab in the left pane.

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna