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
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
        class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        vector<int> arr;

        while (temp != NULL) {
            arr.push_back(temp->val);
            temp = temp->next;
        }

        int n = arr.size();
        int i = 0, j = n - 1;

        while (i < j) {
            int x = arr[i];
            arr[i] = arr[j];
            arr[j] = x;

            i++;
            j--;
        }

        ListNode* head1 = NULL;
        ListNode* current = NULL;

        for (int i = 0; i < n; i++) {
            ListNode* newN = new ListNode(arr[i]);

            if (head1 == NULL) {
                head1 = newN;
                current = newN;
            } else {
                current->next = newN;
                current = newN;
            }
        }

        return head1;
    }
};