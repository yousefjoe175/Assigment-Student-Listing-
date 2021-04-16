#ifndef DYNARRAY_H_
#define DYNARRAY_H_

#include "struct.h"
#include <stdio.h>
#include <stdlib.h>



/**************************************************
 * Function Name:           PsCreateList
 * Function Description:    dynamically allocates a single struct of student
 *                          to initiate a list of students then returns a pointer 
 *                          of type struct student then set the counter N to 1
 * 
 * Arguments:               student parameters (a struct student holds the parameters of the first element)
 * Return:                  pointer to student
 * ***********************************************/
student* PsCreateList(student parameters);




/*************************************************
 * Function Name:           vInsertFromBegin
 * Function Description:    reallocates the size of the list to be n+1 (n is the current size)
 *                          then copies the elements of the list one step forward
 *                          then add the desired element then increment the counter N.
 * 
 * Arguments:               student* Student_List (pointer to the list wanted to be modified)
 *                         ,student parameters (a struct student holds the parameters of the new element)
 * Returns:                 void
 * **********************************************/
void vInsertFromBegin(student* Student_List, student parameters);




/***********************************************
 * Function Name:           vInsertFromMiddle
 * Function Description:    reallocates the size of the list to be n+1 (n is the current size)
 *                          then go to the element (N/2) then pushes every (copy its content)   
 *                          one step forward then add the desired element then increment the counter N.
 * 
 * Arguements:              student* Student_List (pointer to the list wanted to be modified)
 *                         ,student parameters (a struct student holds the parameters of the new element)
 * Returns:                 void
 * *******************************************/
void vInsertFromMiddle(student* Student_List, student parameters);




/***********************************************
 * Function Name:           vInsertFromEnd
 * Function Description:    reallocates the size of the to be n+1 (n is the current size)
 *                          then just go to the last element and then add the desired element
 *                          then increment the counter N.
 * Arguements:              student* Student_List (pointer to the list wanted to be modified)
 *                         ,student parameters (a struct student holds the parameters of the new element)
 * Returns:                 void
 * *******************************************/
void vInsertFromEnd(student* Student_List, student parameters);


/***********************************************
 * Function Name:           vPrintList
 * Function Name:           loop on the list and then print the values in one line 
 *                          and then go to the next node with new line unitl N
 * Arguments:               student* Student_List (pointer to the list wanted to be printed)
 * Returns:                 void
 * ********************************************/
void vPrintList(student* Student_List);


#endif