
#include"linked_lists.h"


struct node
{
   struct student S;
   struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;
struct node *current = NULL;
struct node *prev = NULL;



// calculate the list size
int sizeOfList(void)
{
   int size = 0;

   // check if the linked list is empty
   if(head==NULL)
   {
      printf("List size : %d ", size);
      return -1;
   }

   current = head;
   size = 1;
   while(current->next != NULL)
   {
      current = current->next;
      size++;
   }
   return size;
}
//to print the list
 void printList(){


	   struct node *ptr = head;


	   //start looping from the head until the last node
	   while(ptr != NULL)
	   {
	 	  printf("%d\t",ptr->S.ID);
       	 printf("%s \t\t",ptr->S.Name);
        printf("%d/%d/%d \t",ptr->S.Date[0],ptr->S.Date[1],ptr->S.Date[2]);
        printf("%d\n",ptr->S.Score);

	      ptr = ptr->next;
	   }




}
// insert the node in the beginning of the list
 void insertInTheBeginning(student s){
	//create a new node
	   struct node *link = (struct node*) malloc(sizeof(struct node));

	   //store data in the node
	   for(int i=0;i<30;i++)
	   {link->S.Name[i] = s.Name[i];}

	   link->S.ID=s.ID;
	   link->S.Date[0]=s.Date[0];
	   link->S.Date[1]=s.Date[1];
	   link->S.Date[2]=s.Date[2];
	   link->S.Score=s.Score;


	   //point the next pointer to the old head node
	      link->next = head;

	      //point the head to the new first node
	      head = link;

}
 // insert the node at the end of the list
  void insertAtTheLast(student s){

 	   // Allocate memory for new node
 	   struct node *link1 = (struct node*) malloc(sizeof(struct node));
 	   //store data in the node
 	   	   for(int i=0;i<30;i++)
 	   	   {link1->S.Name[i] = s.Name[i];}

 	   	   link1->S.ID=s.ID;
 	   	   link1->S.Date[0]=s.Date[0];
 	   	   link1->S.Date[1]=s.Date[1];
 	   	   link1->S.Date[2]=s.Date[2];
 	   	   link1->S.Score=s.Score;


 	   	   link1->next = NULL;


 	   	   // If head is empty, create new list
 	   	   if(head==NULL)
 	   	   {
 	   	      head = link1;
 	   	      return;
 	   	   }

    current = head;

    // loop until reach the last node in the old list
    while(current->next != NULL)
    {
 	   current = current->next;
    }

    // Make the last node in the old list point to new node
    current->next = link1;
 }

// insert depending on the given position
void insertNodeInsideList(student s,int position){

	// Allocate memory for new node;
struct node *link = (struct node*) malloc(sizeof(struct node));
int pos = 0;
	// If head is empty, create new list
	if(head==NULL)
	{
		//store data in the node
		   for(int i=0;i<30;i++)
		   {link->S.Name[i] = s.Name[i];}

		   link->S.ID=s.ID;
		   link->S.Date[0]=s.Date[0];
		   link->S.Date[1]=s.Date[1];
		   link->S.Date[2]=s.Date[2];
		   link->S.Score=s.Score;
		//point the next pointer to NULL
		link->next = NULL;
		//point the head to the first node
		head = link;
		return;
	}
	//check if the array size smaller than in the input position
		if(position > sizeOfList())
		{
			printf("Invalid Index Number\n");
			return;
		}
		//check the first node in the linked list
			if(position == 0)
			{
				link->next = head;
				//store data in the node
						   for(int i=0;i<30;i++)
						   {link->S.Name[i] = s.Name[i];}

						   link->S.ID=s.ID;
						   link->S.Date[0]=s.Date[0];
						   link->S.Date[1]=s.Date[1];
						   link->S.Date[2]=s.Date[2];
						   link->S.Score=s.Score;
				head = link;
				return;
			}
			current = head;
			while(pos < position)
			{
				prev = current;
				current = current->next;
				pos++;
			}
			//store data in the node
			   for(int i=0;i<30;i++)
			   {link->S.Name[i] = s.Name[i];}

			   link->S.ID=s.ID;
			   link->S.Date[0]=s.Date[0];
			   link->S.Date[1]=s.Date[1];
			   link->S.Date[2]=s.Date[2];
			   link->S.Score=s.Score;
			link->next = current;
			prev->next = link;

}
