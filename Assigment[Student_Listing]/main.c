#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "struct.h"
#include "DynArray.h"
#include "linked_lists.h"

int main()
{
    clock_t start, end;
    double  total;
    printf("Welcome\n");
    student parameters;

    strcpy(parameters.Name, "yousef");
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
   insertInTheBeginning(parameters);
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
    printList();

    return 0;
}
