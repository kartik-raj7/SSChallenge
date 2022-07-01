#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/

Node *findMiddle(Node *head) {
    ///generic method
    ///finding the number of elements 
//     int n=0;
//     Node* curr=head;
//     while(curr!=NULL){
//         n++;
//         curr=curr->next;
//     }
//     Node* ans = head;
//     if(n%2==0){
//         n=n/2;
//     }
//     else n = n/2;
//     while(n>0){
        
//         head=head->next;
//         n--;
//     }
//     return head;
//////two pointer method using fast and slow pointer
    Node* fast = head;
    Node* slow = head;
    while(fast!=NULL&&fast->next!=NULL){
        fast=fast->next->next;
        slow = slow->next;
    }
    return slow;
}