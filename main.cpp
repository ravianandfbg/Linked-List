#include<iostream>
using namespace std;
class Linkedlist
{
 private:
     struct node
     {
         int info;
         node *link;
     } *start;
 public:
    Linkedlist()
    {
        start=NULL;
    }
    void append(int item);
    void display();
};
void Linkedlist::append(int item)
{
    if(start==NULL)
    {
        start=new node;
       start->link=NULL;
        start->info=item;
    }
    else
    {
     node *ptr;
        ptr=start;
        while(ptr->link!=NULL)
            ptr=ptr->link;
        node *N;
        N=new node;
        N->link=NULL;
        ptr->link=N;
        N->info=item;
    }
}
//Display elements in Linked list
void Linkedlist::display()
{
    if(start==NULL)
        cout<<"no element";
        else
        {


    node *ptr;
    ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->info;
        ptr=ptr->link;
    }
}}
int main()
          {
              Linkedlist l;
              l.append(10);
              l.append(20);
              l.append(30);
              l.display();
              return(0);
              }
