#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "cricket.h"


int toss()
{
    srand(time(NULL));
    int x;
    printf("Choose 0 for heads and 1 for tails:- ");
    scanf("%d",&x);
    if(x>1)
    {
        printf("Error!");
        _Exit(0);
    }
    int toss = rand() % 2;
    if(x == toss)
    {
        printf("\nYou Won!\n");
        printf("\nChoose 0 for batting and 1 for bowling\n");
        scanf("%d",&x);
        if(x>1)
        {
            printf("Error!");
            _Exit(0);
        }
        if(x==0)
        {
            printf("\nYou chose batting!\n");
        }
        else
        {
            printf("\nYou chose bowling!\n");
        }
    }
    else
    {
        int choice = rand() % 2;
        if(choice == 0)
        {
            x = 2;
            printf("\nOpposition chose batting!\n");
        }
        else 
        {
            x = 3;
            printf("\nOpposition chose bowling!\n");
        }
    }
    return x;
}

void batting(struct team *A, struct team *B)
{
    srand(time(NULL));
    int you,you_runs=0,computer,computer_runs=0,i=0;
    printf("\n1st innings:-\n");
    printf("-------------------------------------\n");
    while(i<6)
    {
        printf("\nball %d:-\n",i+1);
        printf("Enter your choice:-");
        scanf("%d",&you);
        if(you > 6)
        {
            printf("\nError!!! choose numbers from 0 to 6!!\n");
            _Exit(0);
        }
        computer = rand() % 7;
        printf("\n%s:-%d",A->name,you);
        printf("\n%s:-%d",B->name,computer);
        if(you == computer)
        {
            printf("\nYou're Out!\n");
            break;
        }
        else
        {
            you_runs = you_runs + you;
            printf("\nRuns:- %d\n",you_runs);
        }
        i++;
    }
    A->runs = A->runs + you_runs;
    int target = you_runs + 1;
    printf("Target for %s = %d\n",B->name,target);
    i = 0;
    printf("\n2nd innings:-\n");
    printf("-------------------------------------\n");
    while(i<6)
    {
        printf("\nball %d:-\n",i+1);
        printf("Enter your choice:-");
        scanf("%d",&you);
        if(you > 6)
        {
            printf("\nError!!! choose numbers from 0 to 6!!\n");
            _Exit(0);
        }
        computer = rand() % 7;
        printf("\n%s:-%d",B->name,computer);
        printf("\n%s:-%d",A->name,you);
        if(you == computer)
        {
            printf("\n%s is Out!\n", B->name);
            break;
        }
        else
        {
            computer_runs = computer_runs + computer;
            printf("\nRuns:- %d\n",computer_runs);
            if(computer_runs >= target)
            {
                break;
            }
        }
        i++;
    }
    if(computer_runs >= target)
    {
        printf("\n%s Won!\n",B->name);
        B->matches_played = B->matches_played + 1;
        B->matches_won = B->matches_won + 1;
        B->points = B->points + 2;
        A->matches_played = A->matches_played + 1;
        A->matches_lost = A->matches_lost + 1;    
    }
    else
    {
        printf("\n%s Won!\n",A->name);
        A->matches_played = A->matches_played + 1;
        A->matches_won = A->matches_won + 1;
        A->points = A->points + 2;
        B->matches_played = B->matches_played + 1;
        B->matches_lost = B->matches_lost + 1;
    }
    B->runs = B->runs + computer_runs;
    return;
}

void bowling(struct team *A,struct team *B)
{
    srand(time(NULL));
    int you,you_runs=0,computer,computer_runs=0,i=0;
    printf("\n1st innings:-\n");
    printf("-------------------------------------\n");
    while(i<6)
    {
        printf("\nball %d:-\n",i+1);
        printf("Enter your choice:-");
        scanf("%d",&you);
        if(you > 6)
        {
            printf("\nError!!! choose numbers from 0 to 6!!\n");
            _Exit(0);
        }
        computer = rand() % 7;
        printf("\n%s:-%d",B->name,computer);
        printf("\n%s:-%d",A->name,you);
        if(you == computer)
        {
            printf("\n%s is Out!\n",B->name);
            break;
        }
        else
        {
            computer_runs = computer_runs + computer;
            printf("\nRuns:- %d\n",computer_runs);
        }
        i++;
    }
    B->runs = B->runs + computer_runs;
    int target = computer_runs + 1;
    printf("Your Target = %d\n",target);
    i = 0;
    printf("\n2nd innings:-\n");
    printf("-------------------------------------\n");
    while(i<6)
    {
        printf("\nball %d:-\n",i+1);
        printf("Enter your choice:-");
        scanf("%d",&you);
        if(you > 6)
        {
            printf("\nError!!! choose numbers from 0 to 6!!\n");
            _Exit(0);
        }
        computer = rand() % 7;
        printf("\n%s:-%d",A->name,you);
        printf("\n%s:-%d",B->name,computer);
        if(you == computer)
        {
            printf("\nYou're Out!\n");
            break;
        }
        else
        {
            you_runs = you_runs + you;
            printf("\nRuns:- %d\n",you_runs);
            if(you_runs >= target)
            {
                break;
            }
        }
        i++;
    }
    if(you_runs >= target)
    {
        printf("\n%s Won!\n",A->name);
        A->matches_played = A->matches_played + 1;
        A->matches_won = A->matches_won + 1;
        A->points = A->points + 2;
        B->matches_played = B->matches_played + 1;
        B->matches_lost = B->matches_lost + 1;
    }
    else
    {
        printf("\n%s Won!\n",B->name);
        B->matches_played = B->matches_played + 1;
        B->matches_won = B->matches_won + 1;
        B->points = B->points + 2;
        A->matches_played = A->matches_played + 1;
        A->matches_lost = A->matches_lost + 1;
    }
    A->runs = A->runs + you_runs;
    return;
}

void match(int x,struct team *A, struct team *B)
{
    if(x == 0 || x == 3)
    {
        batting(A,B);
    }
    else if(x == 1 || x == 2)
    {
        bowling(A,B);
    }
    return;
}

void comp_match(int n, struct team *A,struct team *B)
{
    srand(time(NULL));
    int x = rand() % 9;
    int y = rand() % 30;
    int z = rand() % 30;
    printf("\nMatch %d:-\n",n);
    printf("%s v/s %s\n",A->name,B->name);
    if(x == 0 || x == 2 || x == 4 || x == 6 || x== 8)
    {
        A->matches_played = A->matches_played + 1;
        A->matches_won = A->matches_won + 1;
        A->points = A->points + 2;
        B->matches_played = B->matches_played + 1;
        B->matches_lost = B->matches_lost + 1;
        A->runs = A->runs + y;
        B->runs = B->runs + z;
        printf("\n%s Won!\n",A->name);
    }
    else
    {
        B->matches_played = B->matches_played + 1;
        B->matches_won = B->matches_won + 1;
        B->points = B->points + 2;
        A->matches_played = A->matches_played + 1;
        A->matches_lost = A->matches_lost + 1;
        A->runs = A->runs + y;
        B->runs = B->runs + z;
        printf("\n%s Won!\n",B->name);
    }
    return;
}

struct team *comp_match2(struct team *A,struct team *B)
{
    srand(time(NULL));
    int x = rand() % 9;
    if(x == 0 || x == 2 || x == 4 || x == 6 || x== 8)
    {
        printf("\n%s Won!!!\n",A->name);
        return A;
    }
    else
    {
        printf("\n%s Won!!!\n",B->name);
        return B;  
    }
}

void display(struct team *A,struct team *B,struct team *C,struct team *D,struct team *E,struct team *F,struct team *G,struct team *H)
{
    printf("\n%s M:-%d W:-%d L:-%d P:-%d NRR:-%f\n",A->name,A->matches_played,A->matches_won,A->matches_lost,A->points,A->NRR);
    printf("%s M:-%d W:-%d L:-%d P:-%d NRR:-%f\n",B->name,B->matches_played,B->matches_won,B->matches_lost,B->points,B->NRR);
    printf("%s M:-%d W:-%d L:-%d P:-%d NRR:-%f\n",C->name,C->matches_played,C->matches_won,C->matches_lost,C->points,C->NRR);
    printf("%s M:-%d W:-%d L:-%d P:-%d NRR:-%f\n",D->name,D->matches_played,D->matches_won,D->matches_lost,D->points,D->NRR);
    printf("%s M:-%d W:-%d L:-%d P:-%d NRR:-%f\n",E->name,E->matches_played,E->matches_won,E->matches_lost,E->points,E->NRR);
    printf("%s M:-%d W:-%d L:-%d P:-%d NRR:-%f\n",F->name,F->matches_played,F->matches_won,F->matches_lost,F->points,F->NRR);
    printf("%s M:-%d W:-%d L:-%d P:-%d NRR:-%f\n",G->name,G->matches_played,G->matches_won,G->matches_lost,G->points,G->NRR);
    printf("%s M:-%d W:-%d L:-%d P:-%d NRR:-%f\n",H->name,H->matches_played,H->matches_won,H->matches_lost,H->points,H->NRR);
}

int star_batting(struct team *A, struct team *B)
{
    int win;
    srand(time(NULL));
    int you,you_runs=0,computer,computer_runs=0,i=0;
    printf("\n1st innings:-\n");
    printf("-------------------------------------\n");
    while(i<6)
    {
        printf("\nball %d:-\n",i+1);
        printf("Enter your choice:-");
        scanf("%d",&you);
        if(you > 6)
        {
            printf("\nError!!! choose numbers from 0 to 6!!\n");
            _Exit(0);
        }
        computer = rand() % 7;
        printf("\n%s:-%d",A->name,you);
        printf("\n%s:-%d",B->name,computer);
        if(you == computer)
        {
            printf("\nYou're Out!\n");
            break;
        }
        else
        {
            you_runs = you_runs + you;
            printf("\nRuns:- %d\n",you_runs);
        }
        i++;
    }
    A->runs = A->runs + you_runs;
    int target = you_runs + 1;
    printf("Target for %s = %d\n",B->name,target);
    i = 0;
    printf("\n2nd innings:-\n");
    printf("-------------------------------------\n");
    while(i<6)
    {
        printf("\nball %d:-\n",i+1);
        printf("Enter your choice:-");
        scanf("%d",&you);
        if(you > 6)
        {
            printf("\nError!!! choose numbers from 0 to 6!!\n");
            _Exit(0);
        }
        computer = rand() % 7;
        printf("\n%s:-%d",B->name,computer);
        printf("\n%s:-%d",A->name,you);
        if(you == computer)
        {
            printf("\n%s is Out!\n", B->name);
            break;
        }
        else
        {
            computer_runs = computer_runs + computer;
            printf("\nRuns:- %d\n",computer_runs);
            if(computer_runs >= target)
            {
                break;
            }
        }
        i++;
    }
    if(computer_runs >= target)
    {
        printf("\n%s Won!\n",B->name);
        win = 2;
        B->matches_played = B->matches_played + 1;
        B->matches_won = B->matches_won + 1;
        B->points = B->points + 2;
        A->matches_played = A->matches_played + 1;
        A->matches_lost = A->matches_lost + 1;    
    }
    else
    {
        printf("\n%s Won!\n",A->name);
        win = 1;
        A->matches_played = A->matches_played + 1;
        A->matches_won = A->matches_won + 1;
        A->points = A->points + 2;
        B->matches_played = B->matches_played + 1;
        B->matches_lost = B->matches_lost + 1;
    }
    B->runs = B->runs + computer_runs;
    return win;
}

int star_bowling(struct team *A,struct team *B)
{
    int win;
    srand(time(NULL));
    int you,you_runs=0,computer,computer_runs=0,i=0;
    printf("\n1st innings:-\n");
    printf("-------------------------------------\n");
    while(i<6)
    {
        printf("\nball %d:-\n",i+1);
        printf("Enter your choice:-");
        scanf("%d",&you);
        if(you > 6)
        {
            printf("\nError!!! choose numbers from 0 to 6!!\n");
            _Exit(0);
        }
        computer = rand() % 7;
        printf("\n%s:-%d",B->name,computer);
        printf("\n%s:-%d",A->name,you);
        if(you == computer)
        {
            printf("\n%s is Out!\n",B->name);
            break;
        }
        else
        {
            computer_runs = computer_runs + computer;
            printf("\nRuns:- %d\n",computer_runs);
        }
        i++;
    }
    B->runs = B->runs + computer_runs;
    int target = computer_runs + 1;
    printf("Your Target = %d\n",target);
    i = 0;
    printf("\n2nd innings:-\n");
    printf("-------------------------------------\n");
    while(i<6)
    {
        printf("\nball %d:-\n",i+1);
        printf("Enter your choice:-");
        scanf("%d",&you);
        if(you > 6)
        {
            printf("\nError!!! choose numbers from 0 to 6!!\n");
            _Exit(0);
        }
        computer = rand() % 7;
        printf("\n%s:-%d",A->name,you);
        printf("\n%s:-%d",B->name,computer);
        if(you == computer)
        {
            printf("\nYou're Out!\n");
            break;
        }
        else
        {
            you_runs = you_runs + you;
            printf("\nRuns:- %d\n",you_runs);
            if(you_runs >= target)
            {
                break;
            }
        }
        i++;
    }
    if(you_runs >= target)
    {
        printf("\n%s Won!\n",A->name);
        win = 1;
        A->matches_played = A->matches_played + 1;
        A->matches_won = A->matches_won + 1;
        A->points = A->points + 2;
        B->matches_played = B->matches_played + 1;
        B->matches_lost = B->matches_lost + 1;
    }
    else
    {
        printf("\n%s Won!\n",B->name);
        win = 2;
        B->matches_played = B->matches_played + 1;
        B->matches_won = B->matches_won + 1;
        B->points = B->points + 2;
        A->matches_played = A->matches_played + 1;
        A->matches_lost = A->matches_lost + 1;
    }
    A->runs = A->runs + you_runs;
    return win;
}

int semi_match(int x,struct team *A, struct team *B)
{
    int win;
    if(x == 0 || x == 3)
    {
        win = star_batting(A,B);  
    }
    else if(x == 1 || x == 2)
    {
        win = star_bowling(A,B);
    }
    return win;
}


