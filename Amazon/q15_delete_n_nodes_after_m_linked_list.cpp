// { Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }

};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while(node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");

}

void insert(int n1)
{
    int n,value;
    n=n1;
    struct Node *temp;

    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp=start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp=temp->next;
        }
    }
}

 // } Driver Code Ends
/*
delete n nodes after m nodes
  The input list will have at least one element
  Node is defined as

struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }

};

*/
class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here
        int c=M,k=N,count=0;
        struct Node* temp,*temp1;
        temp=head;
        while(temp!=NULL)
        {
            count++;
            temp1=temp;
            if(count==M)
            {
                count=0;
                while(N--&&temp1!=NULL)
                temp1=temp1->next;
                N=k;
                if(temp1!=NULL)
                    temp->next=temp1->next;
                if(temp1==NULL)
                    temp->next=NULL;

            }
             temp=temp->next;
        }
    }
};



// { Driver Code Starts.
int main()
{
    int t,n1;
    cin>>t;
    while (t--) {
        cin>>n1;
        int m,n;
        cin>>m;
        cin>>n;
        insert(n1);
        Solution ob;
        ob.linkdelete(start,m,n);
        printList(start);
    }

    return 0;
}
  // } Driver Code Ends
