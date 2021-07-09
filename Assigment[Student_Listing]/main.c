/***************************************************
* Authors:
*   يوسف خالد محمد عبد المجيد (sec : 4) (B.N.: 54)
*   أدهم محمد أحمد عبد الرحيم (sec : 1) (B.N.: 23)
*   ايمان زكريا شعبان عرفه    (sec : 1) (B.N.: 36)
*
*****************************************************/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "struct.h"
#include "DynArray.h"
#include "linked_lists.h"

extern student parameters;
student *list = NULL;
void storingData(void);
/*void size_time(int M);*/
int main()
{
    /*clock_t start[6], end;
    double total;*/
    printf("Welcome\n");
    student *list = NULL;

    int choice1, choice2, position, M;
    loop:
    printf("1.Linked Lists \n2.Dynamic Array\n3.Exit\nChoose an answer: ");
    scanf("%d", &choice1);
    while (1)
    {

        if (choice1 == 1)
        {
            printf("1. Insert from The begining\n");
            printf("2. Insert from The ending\n");
            printf("3. Insert inside\n");
            printf("4. print the list\n");
            printf("5. print the size information\n");
            printf("6. back to main menu\n");
            printf("Choose an answer: ");
            scanf("%d", &choice2);

            switch (choice2)
            {
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
                insertNodeInsideList(parameters, position);
                break;
            case 4:
                printList();
                break;
                break;
            case 5:
                printf("The size of a single struct = %d\n",sizeof(parameters));
                printf("The size of a single node in the linked list = %d\n",sizeof(Node));
                break;
            case 6:
                goto loop;
            default:
                printf("Enter a valid number!\n");
                break;
            }
        }
        else if (choice1 == 2)
        {
            printf("1. Insert from The begining\n");
            printf("2. Insert from The ending\n");
            printf("3. Insert right in the middle\n");
            printf("4. print the list\n");
            printf("5. print the size information\n");
            printf("6. back to main menu\n");
            printf("Choose an answer: ");
            scanf("%d", &choice2);

            switch (choice2)
            {
            case 1:
                storingData();
                if (list == NULL)
                {   
                    list = PsCreateList(parameters);

                }
                else
                { 
                    vInsertFromBegin(list, parameters);
                }
                break;
            case 2:
                storingData();
                if (list == NULL)
                {
                    list = PsCreateList(parameters);
                }
                else
                {
                    vInsertFromEnd(list, parameters);
                }
                break;
            case 3:
                storingData();
                if (list == NULL)
                {
                    list = PsCreateList(parameters);
                }
                else
                {
                    vInsertFromMiddle(list, parameters);
                }
                break;
            case 4:
                vPrintList(list);
                break;
            case 5:
                printf("The size of a single struct = %d\n",sizeof(parameters));
                printf("The size of a single node in the linked list = %d\n",sizeof(Node));
                break;
            case 6:
                goto loop;
            default:
                printf("Enter a valid number!\n");
                break;
            }
        }else if (choice1 == 3){
            return 0;
        }
        else
        {
            printf("Enter a valid number!\n");
        }
    }
label:

    return 0;
}

void storingData(void)
{

    printf("Enter Name: \n");
    scanf("%s", parameters.Name);
    printf("Enter ID: \n");
    scanf("%d", &parameters.ID);
    printf("Enter Date of birth (Day): \n");
    scanf("%d", &parameters.Date[0]);
    printf("Enter Date of birth (Month): \n");
    scanf("%d", &parameters.Date[1]);
    printf("Enter Date of birth (Year): \n");
    scanf("%d", &parameters.Date[2]);
    printf("Enter score of the last year): \n");
    scanf("%d", &parameters.Score);
}



/*
void size_time(int M)
{
    clock_t start, end;
    double total;
    storingData();

    //WORK ON dynamic
    printf("Calculating the dynamic array operations:\n");
    start = clock();
    int i;
    for ( i= 0; i < M; i++)
    {
        insertInTheBeginning(parameters);
    }
    end = clock();
    total = (double)(end - start);
    printf("i = %d\n",i);
    printf("The spent time of insert in the beginning = %f ms\n", total);
/*
    start = clock();
    for (int i = 0; i < M; i++)
    {
        vInsertFromEnd(list, parameters);
    }
    end = clock();
    total = (double)(end - start);
    printf("The spent time of insert in the end = %f ms\n", total);

    start = clock();
    for (int i = 0; i < M; i++)
    {
        vInsertFromMiddle(list, parameters);
    }
    end = clock();
    total = (double)(end - start) * 1000;
    total = total / 1000;
    printf("The spent time insert in the middle = %f ms\n", total);

    //Work on linked lists
    printf("Calculating the linked lists operations:\n");
    start = clock();
    for (int i = 0; i < M; i++)
    {
        insertInTheBeginning(parameters);
    }
    end = clock();
    total = (double)(end - start) * 1000;
    total = total / 1000;
    printf("The spent time of insert in the beginning = %f ms\n", total);

    start = clock();
    for (int i = 0; i < M; i++)
    {
        insertAtTheLast(parameters);
    }
    end = clock();
    total = (double)(end - start) * 1000;
    total = total / 1000;
    printf("The spent time of insert in the ending = %f ms\n", total);

    start = clock();
    for (int i = 0; i < M; i++)
    {
        insertNodeInsideList(parameters, 1);
    }
    end = clock();
    total = (double)(end - start) * 1000;
    total = total / 1000;
    printf("The spent time of insert in the middle = %f ms\n", total);
}
*/