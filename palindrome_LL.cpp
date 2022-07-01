#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head) {
    LinkedListNode<int> *end = head;
        vector<int> v;
        while(end!=NULL){
            v.push_back(end->data);
            end=end->next;
        }
        int r = v.size()-1;
        for(int i=0;i<v.size();i++){
            if(v[i]!=v[r-i]){
                return false;
                break;
            }
        }
        return true;

}