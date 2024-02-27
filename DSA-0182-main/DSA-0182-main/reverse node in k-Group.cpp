#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode *dummy = new ListNode(0);
    dummy->next = head;
    ListNode *prev = dummy, *curr = dummy, *next = dummy;

    int count = 0;
    while (curr->next) {
        curr = curr->next;
        count++;
    }

    while (count >= k) {
        curr = prev->next;
        next = curr->next;
        for (int i = 1; i < k; i++) {
            curr->next = next->next;
            next->next = prev->next;
            prev->next = next;
            next = curr->next;
        }
        prev = curr;
        count -= k;
    }

    return dummy->next;
}

void printList(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // Example usage
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int k = 2;

    std::cout << "Original List: ";
    printList(head);

    head = reverseKGroup(head, k);

    std::cout << "Reversed List in groups of " << k << ": ";
    printList(head);

    return 0;
}

