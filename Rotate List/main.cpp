#include <iostream>
using namespace std;
#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* rotateRight(ListNode* head, int k) {
        if(k == 0 || head == nullptr || head->next == nullptr)
            return head;
        while(k != 0){
            k--;
            ListNode* cur = head;
            ListNode* pre = head;
            while(cur->next != nullptr){
                pre = cur;
                cur = cur->next;
            }
            pre->next = cur->next;
            cur->next = head;
            head = cur;
        }
        return head;
    }

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}