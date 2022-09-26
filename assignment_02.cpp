// Name: Jitesh Singla
// Sid  :  21105068(ECE)
// 2nd Assignment (Cicrular linked list)

// **********************************************************************************************************************//
#include<iostream>
using namespace std;

struct node
{
    int data;
    node * next;
};


class circular_linked_list
{
    node* head=NULL;// will point to the first element 
    node* last = NULL; // will point to the last element
   public:
    void insert( int data)
    {  node * temp = new node();
     temp->data= data;
        if(head==NULL)
        {
            head= temp;
            last= temp;
            last->next= head;
        }
        else{
        last->next= temp;
         last= temp;
         temp->next= head;
        }
    }
    void display()
    {   

        node * temp= head;
        cout<<"Head-->";
        while(temp->next!= head)
         /* Answer for Q1( condition that transversing a linked list a element came at the first position) : If I say the first element as head 
         then when my transversing element next which is the pointer vector points to the head then that will be at the last elment so next 
         element will be the first element when my transversing element becomes head the first element. */
        {   

            cout<<temp->data<<"-->";
            temp= temp->next;
        }

        cout<<temp->data<<"-->Head";

    }

};

int main()
{ circular_linked_list a;
 a.insert(0);
 a.insert(100);
 a.insert(1000);
 a.display();

    return 0;
}

/* Q2. Some practical applications of circular linked list:
   1.The real life application where the circular linked list is used is our Personal Computers, where multiple applications are running. All the running applications are kept in a circular linked list and the OS gives a fixed time slot to all for running. The Operating System keeps on iterating over the linked list until all the applications are completed.
   2. In multiplayer  games: All the Players are kept in a Circular Linked List and the pointer keeps on moving forward as a player's chance ends.
   3. Those interfaces where continuosly scrolling after last leads to start of the interface. */