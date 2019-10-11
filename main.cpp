int main()
 {
 int option;
 do{
 printf("\n\n ***********Main Menu****************");
 printf("\n1.)Create a list ");
 printf("\n2.)Display the list ");
 printf("\n3.)Add a node at the end ");
 printf("\n4.)Delete a node from the end ");
 printf("\n5.)Delete the list");
 printf("\n6.)Sort the list");
 printf("\n7.)Exit");
printf("\nEnter your option:");
scanf("%d",&option);
switch(option){
case 1: start=create(start);
                 printf("LINKED LIST CREATED");
                 break;
case 2: start=display(start);
              break;
case 3: start=insert_end(start);
              break;
case 4:start=delete_end(start);
           break;
case 5: start=delete_list(start);
            break;
case 6:start=sort_list(start);
          break;
}

 }while(option!=7);
getch();
return 0;

 }