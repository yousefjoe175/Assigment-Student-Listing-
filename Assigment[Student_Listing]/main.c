#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"
#include "DynArray.h"

int main()
{
    printf("Welcome\n");
    student parameters;
    parameters.ID = 1;
    //parameters.Name = "Yousef";
    strcpy(parameters.Name, "Yousef");
    parameters.Date[0] = 17;
    parameters.Date[1] = 5;
    parameters.Date[2] = 2000;
    parameters.Score = 80;
    student* Student_List = PsCreateList(parameters);

    parameters.ID = 2;
    //parameters.Name = "Yousef";
    strcpy(parameters.Name, "Adham");
    parameters.Date[0] = 5;
    parameters.Date[1] = 3;
    parameters.Date[2] = 2000;
    parameters.Score = 90;
    vInsertFromBegin(Student_List, parameters);

    vPrintList(Student_List);
    return 0;
}
