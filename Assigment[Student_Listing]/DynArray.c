#include "DynArray.h"

// we need to make it not exclusive for 
static int N = 0;

student* PsCreateList(student parameters){
    //dynamically allocate a new list by allocating the first node
    student* Student_List = (student* ) malloc(sizeof(student));
    //adding the parameters of the first node
    Student_List ->ID = parameters.ID;
    Student_List ->Date = parameters.Date;
    Student_List ->Name = parameters.Name;
    Student_List ->Score = parameters.Score;
    N++;
    return Student_List;
}



