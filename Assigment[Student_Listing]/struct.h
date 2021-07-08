#ifndef STRUCT_H_
#define STRUCT_H_
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct student
{	//Till second name
    char Name[30];
    int ID;
    //Day->Date[0],month->Date[1],year->Date[2]
	int Date[3];
	int Score;
}student;


#endif