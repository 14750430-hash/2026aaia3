// week11-1.cpp 學習計畫 Linked List 第1題
// LeeCode 21. Merge Two Sorted Lists
// 想要用一些範例的程式「鷹架」
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(999);
        ListNode* now = ans;
        while (list1 != nullptr || list2 != nullptr){
            if(list1 == nullptr){ //左邊沒有了
                now->next = list2; // 換另一邊(右邊)
                break; // 離開
            } else if (list2 == nullptr){ //右邊沒有了
                now->next = list1; // 換另一邊(左邊)
                break; // 離開
            }else{ // 兩邊都還有, 要比大小, 把小的, 放到now裡面
                if(list1->val < list2->val){ // 左邊小, 放左邊
                    now->next = new ListNode(list1->val);
                    now = now->next;
                    list1 = list1->next;
                }else{ // 否則, 就是右邊小, 放右邊
                    now->next = new ListNode(list2->val);
                    now = now->next;
                    list2 = list2->next;
                }
            }
        }
        return ans->next; //return ans; // 會多帶一個999啊!!
        //ListNode* now = list1; // (2) 怎麼把 Listed List 裡面的數字, 都走過一遍?
        //while (now != nullptr){ // (2) 只要now還有東西
        //    cout << now->val << " "; // (2) 把now 的內容 now->val 印出來
        //    now = now->next; // (2) Listed List 指到下一筆
        //}
        //ListNode* ans = new ListNode(999); // 題目要吐出 ListNode* 我們宣告它
        //return ans; // 先隨便return
    }
};
