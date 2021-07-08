#include"linked_lists.h"
#include "struct.h"

struct node
{
   struct student S;
   struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;
struct node *current = NULL;
struct node *prev = NULL;

//function to store the input structure
void StoringData( struct student* input){

	 printf("Enter Name: \n");
	 scanf("%s",input->Name);
	 printf("Enter ID: \n");
	 scanf("%d",&input->ID);
	 printf("Enter Date of birth (Day): \n");
	 scanf("%d",&input->Date[0]);
	 printf("Enter Date of birth (Month): \n");
	 scanf("%d",&input->Date[1]);
	 printf("Enter Date of birth (Year): \n");
	 scanf("%d",&input->Date[2]);
	 printf("Enter score of the last year): \n");
	 scanf("%d",&input->Score);
}

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

	   printf("[head] =>");

	   //start looping from the head until the last node
	   while(ptr != NULL)
	   {

	 	 printf("%s",ptr->S.Name);
	 	 printf("%d",ptr->S.ID);
	 	 printf("%d",ptr->S.Date[0]);
	 	 printf("%d",ptr->S.Date[1]);
	 	 printf("%d",ptr->S.Date[2]);
	 	 printf("%d",ptr->S.Score);

	      ptr = ptr->next;
	   }

	   printf(" [null]\n");


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
	   struct node *link = (struct node*) malloc(sizeof(struct node));
	   //store data in the node
	   	   for(int i=0;i<30;i++)
	   	   {link->S.Name[i] = s.Name[i];}

	   	   link->S.ID=s.ID;
	   	   link->S.Date[0]=s.Date[0];
	   	   link->S.Date[1]=s.Date[1];
	   	   link->S.Date[2]=s.Date[2];
	   	   link->S.Score=s.Score;


	   	   link->next = NULL;
	   	   tail->next=link;
	   	   tail=link;


	   	   // If head is empty, create new list
	   	   if(head==NULL)
	   	   {
	   	      head = link;
	   	      return;
	   	   }

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
		//point the next pointer to the old head node
		link->next = head;
		//point the head to the new first node
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
