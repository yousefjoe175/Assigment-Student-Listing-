#include "DynArray.h"


// we need to make it not exclusive for 
static int N = 0;

student* PsCreateList(student parameters){

    //dynamically allocate a new list by allocating the first node
    student* Student_List = (student* ) malloc(sizeof(student));

    //adding the parameters of the first node
    Student_List ->ID = parameters.ID;
    Student_List ->Date[0] = parameters.Date[0];
    Student_List ->Date[1] = parameters.Date[1];
    Student_List ->Date[2] = parameters.Date[2];
    //Student_List ->Name = parameters.Name;
    strcpy(Student_List->Name, parameters.Name);
    Student_List ->Score = parameters.Score;

    //increment the counter
    N++;
    return Student_List;
}

void vInsertFromBegin(student* Student_List, student parameters){
    if(Student_List == NULL){
        Student_List = PsCreateList(parameters);
        return;
    }
    realloc( Student_List, (N+1) * sizeof(student));
    N++;
    for(int i=N-1; i>0; i--){
        Student_List[i].ID = Student_List[i-1].ID;
        Student_List[i].Date[0] = Student_List[i-1].Date[0];
        Student_List[i].Date[1] = Student_List[i-1].Date[1];
        Student_List[i].Date[2] = Student_List[i-1].Date[2];
        //Student_List[i].Name = Student_List[i-1].Name; 
        strcpy(Student_List[i].Name, Student_List[i-1].Name);
        Student_List[i].Score = Student_List[i-1].Score;
    }
    Student_List[0].ID = parameters.ID;
    Student_List[0].Date[0] = parameters.Date[0];
    Student_List[0].Date[1] = parameters.Date[1];
    Student_List[0].Date[2] = parameters.Date[2];
    //Student_List[0].Name = parameters.Name;
    strcpy(Student_List[0].Name, parameters.Name);
    Student_List[0].Score = parameters.Score;
}

void vInsertFromEnd(student* Student_List, student parameters){
    /* if(Student_List == NULL){
        Student_List = PsCreateList(parameters);
        return;
    }*/
    realloc( Student_List, (N+1) * sizeof(student));
    
    Student_List[N].ID = parameters.ID;
    Student_List[N].Date[0] = parameters.Date[0];
    Student_List[N].Date[1] = parameters.Date[1];
    Student_List[N].Date[2] = parameters.Date[2];
    //Student_List[0].Name = parameters.Name;
    strcpy(Student_List[N].Name, parameters.Name);
    Student_List[N].Score = parameters.Score;
    N++;
}

void vInsertFromMiddle(student* Student_List, student parameters){
    int i;
    /* if(Student_List == NULL){
        Student_List = PsCreateList(parameters);
        return;
    }*/
    realloc( Student_List, (N+1) * sizeof(student));
    if(N == 1){ //I have only one node, so it will put the new node at the end 
        Student_List[N].ID = parameters.ID;
        Student_List[N].Date[0] = parameters.Date[0];
        Student_List[N].Date[1] = parameters.Date[1];
        Student_List[N].Date[2] = parameters.Date[2];
        //Student_List[0].Name = parameters.Name;
        strcpy(Student_List[N].Name, parameters.Name);
        Student_List[N].Score = parameters.Score;
        
    }else{
        for(i=N; i>N/2; i--){
            Student_List[i].ID = Student_List[i-1].ID;
            Student_List[i].Date[0] = Student_List[i-1].Date[0];
            Student_List[i].Date[1] = Student_List[i-1].Date[1];
            Student_List[i].Date[2] = Student_List[i-1].Date[2];
            //Student_List[i].Name = Student_List[i-1].Name; 
            strcpy(Student_List[i].Name, Student_List[i-1].Name);
            Student_List[i].Score = Student_List[i-1].Score;
        }
        Student_List[i].ID = parameters.ID;
        Student_List[i].Date[0] = parameters.Date[0];
        Student_List[i].Date[1] = parameters.Date[1];
        Student_List[i].Date[2] = parameters.Date[2];
        //Student_List[0].Name = parameters.Name;
        strcpy(Student_List[i].Name, parameters.Name);
        Student_List[i].Score = parameters.Score;
    }
    N++;
}


void vPrintList(student* Student_List){
    for(int i = 0; i<N; i++){
        printf("%d\t",Student_List[i].ID);
        printf("%s \t\t",Student_List[i].Name);
        printf("%d/%d/%d \t",Student_List[i].Date[0],Student_List[i].Date[1],Student_List[i].Date[2]);
        printf("%d\n",Student_List[i].Score);
    }
}

