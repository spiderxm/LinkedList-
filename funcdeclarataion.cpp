#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<malloc.h>
struct node
{
 int data;
 struct node *next;
 };
 struct node *start=NULL;
 struct node *create(struct node *);
 struct node *display(struct node *);
 struct node *insert_end(struct node *);
 struct node *delete_end(struct node *);
 struct node *delete_list(struct node *);
 struct node *sort_list(struct node *);