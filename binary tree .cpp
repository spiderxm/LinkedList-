#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node
{
    int key;
    struct node *left,*right;
};
struct node *newnode(char k)
{
    struct node *node=(struct node*)malloc(sizeof(struct node));
    node->key=k;
    node->right=node->left=NULL;
    return node;

}
bool isfulltree(struct node* root)
{
    if(root==NULL)
       return true;
    if(root->left==NULL&&root->right==NULL)
       return true;
    if((root->left)&&(root->right))
     return(isfulltree(root->left)&&isfulltree(root->right));
    
    return false;


}
int minvalue(struct node* node)
{
    struct node* current=node;
    while(current->left!=NULL)
    {
        current=current->left;

    }
    return(current->key);

}
int sum(struct node* node)
{
    int sum=node->key;
    struct node* current=node;
    while(current->left!=NULL)
    {
        current=current->left;
        sum+=current->key;
    }
    struct node* press=node;
    while(press->right!=NULL)
    {
        press=press->right;
        sum+=press->key;
    }
    return(sum);
}

int main()
{
    struct node* root=NULL;
    root=newnode(100);
    root->left=newnode(1);
    root->right=newnode(6);
    root->left->left=newnode(868);
    root->left->right=newnode(3);
    root->right->right=newnode(67);
    root->right->left=newnode(56);
 
 if(isfulltree(root))
  printf("It is a complete binary tree");
else
{
    printf("It is not a complete binary tree");
}

printf("\nMinimum value of binary tree is %d",minvalue(root));
printf("\nSum of elements of binary tree is %d",sum(root));

return 0;
}
