#include <bits/stdc++.h> 
#define pb push_back
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

int findIntersection(Node *firstHead, Node *secondHead)
{
    ///using vectors
//     vector<int> v1,v2;
//     Node* f = firstHead;
//     Node* s = secondHead;
//     c = 0;
//     while(f!=NULL){
//         v1.pb(f->data);
//         f = f->next;
//     }
//     while(s!=NULL){
//         v2.pb(s->data);
//         s = s->next;
//     }
//     sort(v1.begin(),v)
//     for(int  i = 0;i<v1.size();i++){
//         if(v1[i]==v2[i])c++;
//     }
//     if(c==0)return -1;
//     else return v[c]
   /////
    Node *head1 = firstHead;
    Node *head2 = secondHead;
    unordered_set<Node*>ln;
        for(Node *head1=firstHead;head1!=NULL;head1=head1->next){       
          ln.insert(head1);      
       }
    for(Node *head2=secondHead;head2!=NULL;head2=head2->next){       
           if(ln.find(head2)!=ln.end()){
               return head2->data;
            } 
       }      
        return -1;
}