#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* mergeKLists(vector<ListNode*>& lists) {
    vector<int> values;
    
    for (ListNode* list : lists) {
        while (list) {
            values.push_back(list->val);
            list = list->next;
        }
    }
    
    sort(values.begin(), values.end());
    
    ListNode* dummy = new ListNode(0);
    ListNode* current = dummy;
    for (int val : values) {
        current->next = new ListNode(val);
        current = current->next;
    }
    
    return dummy->next;
}

int main() {
    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(5);

    ListNode* l2 = new ListNode(1);
    l2->next = new ListNode(3);
    l2->next->next = new ListNode(4);

    ListNode* l3 = new ListNode(2);
    l3->next = new ListNode(6);

    vector<ListNode*> lists = {l1, l2, l3};

    ListNode* mergedList = mergeKLists(lists);

    while (mergedList) {
        cout << mergedList->val << " ";
        mergedList = mergedList->next;
    }
    cout << endl;

    return 0;
}

