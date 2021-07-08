#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "struct.h"
#include "DynArray.h"
#include "linked_lists.h"

extern student parameters;

void storingData(void);


int main()
{
    clock_t start, end;
    double  total;
    printf("Welcome\n");
    student* list = NULL; 

    int choice1, choice2, position;
     printf("1.Linked Lists \n2.Dynamic Array\nChoose an answer: ");
        scanf("%d",&choice1);
    while(1){
       
        if(choice1 == 1){
            printf("1. Insert from The begining\n");
            printf("2. Insert from The ending\n");
            printf("3. Insert inside\n");
            printf("4. print the list\n");
            printf("5. Exit\n");
            printf("Choose an answer: ");
            scanf("%d",&choice2);
            
            switch(choice2){
                case 1:
                    storingData();
                    insertInTheBeginning(parameters);
                    break;
                case 2:
                    storingData();
                    insertAtTheLast(parameters);
                    break;
                case 3:
                    printf("Enter the position: ");
                    scanf("%d", &position);
                    storingData();
                    insertNodeInsideList(parameters,position);
                    break;
                case 4:
                    printList();
                    break;
                case 5:
                    return 0;
                default:
                    printf("Enter a valid number!\n");
                    break;
            }
        }else if (choice1 == 2){
            printf("1. Insert from The begining\n");
            printf("2. Insert from The ending\n");
            printf("3. Insert inside\n");
            printf("4. print the list\n");
            printf("5. Exit\n");
            printf("Choose an answer: ");
            scanf("%d",&choice2);
            
            switch(choice2){
                case 1:
                    storingData();
                    if(list == NULL){
                        list = PsCreateList(parameters);
                    }else{
                        vInsertFromBegin(list, parameters);
                    }
                    break;
                case 2:
                    storingData();
                    if(list == NULL){
                        list = PsCreateList(parameters);
                    }else{
                        vInsertFromEnd(list,parameters);
                    }
                    break;
                case 3:
                    storingData();
                    if(list == NULL){
                        list = PsCreateList(parameters);
                    }else{
                        vInsertFromMiddle(list, parameters);
                    }
                    break;
                case 4:
                    vPrintList(list);
                    break;
                case 5:
                    return 0;
                default:
                    printf("Enter a valid number!\n");
                    break;
            }
        }else{
            printf("Enter a valid number!\n");
        }
    }





   /* strcpy(parameters.Name, "yousef");
    parameters.ID = 1;
    parameters.Date[0] = 17;
    parameters.Date[1] = 5;
    parameters.Date[2] = 2000;
    parameters.Score = 85;

/*
    start = clock();
    student* Student_List = PsCreateList(parameters);
    vPrintList(Student_List);
    end = clock();

    total = (double) (end - start)*1000/CLOCKS_PER_SEC;
    printf("%f",total);
    */
   /*insertInTheBeginning(parameters);
   strcpy(parameters.Name, "eman");
    parameters.ID = 2;
    parameters.Date[0] = 20;
    parameters.Date[1] = 1;
    parameters.Date[2] = 2000;
    parameters.Score = 90;
    insertInTheBeginning(parameters);
    strcpy(parameters.Name, "adham");
    parameters.ID = 5;
    parameters.Date[0] = 30;
    parameters.Date[1] = 9;
    parameters.Date[2] = 2000;
    parameters.Score = 90;
    insertAtTheLast(parameters);
    strcpy(parameters.Name, "mariam");
    parameters.ID = 7;
    parameters.Date[0] = 1;
    parameters.Date[1] = 9;
    parameters.Date[2] = 2000;
    parameters.Score = 95;
    insertNodeInsideList(parameters,2);
    vPrintList();*/

    return 0;
}

void storingData(void){

	 printf("Enter Name: \n");
	 scanf("%s",parameters.Name);
	 printf("Enter ID: \n");
	 scanf("%d",&parameters.ID);
	 printf("Enter Date of birth (Day): \n");
	 scanf("%d",&parameters.Date[0]);
	 printf("Enter Date of birth (Month): \n");
	 scanf("%d",&parameters.Date[1]);
	 printf("Enter Date of birth (Year): \n");
	 scanf("%d",&parameters.Date[2]);
	 printf("Enter score of the last year): \n");
	 scanf("%d",&parameters.Score);	  
}