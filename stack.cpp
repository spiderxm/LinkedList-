#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* link;

};
struct node* top;
void push(int data)
{
    struct node* temp;
    temp=new node();
    if(!temp)
    {
        cout<<"HEAP OVERflow";
        exit(1);
    }
    temp->data=data;
    temp->link=top;
    top=temp;

}
int isempty()
{
    return top==NULL;

}
int peek()
{
    if (!isempty()) 
     return top->data;
    else
    {
        exit(1);
    }
    
}
void pop()
{
    struct node* temp;
    if(top==NULL)
    {
        cout<<"stack underflow";
        exit(1);
    }
    else{
        temp=top;
        top=top->link;
        temp->link=NULL;
        free(temp);

    }

}
void display()
{
    struct node* temp;
    if(top==NULL)
    {
        cout<<"stack underflow";
        exit(1);
    }
    else
    {
        temp=top;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->link;
        }
    }
    
}
int main() {
   int ch, val; 
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {   
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4); 
      return 0;
}
