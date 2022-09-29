#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "winner_tree.h"


void init(heap *h)
{
    h->A = (struct team *)malloc(sizeof(struct team) * 7);
    return;
}

void insert_teams(heap *h, int n,struct team *A)
{
    h->rear = n;
    h->A[h->rear] = *A;
    return;
}

struct team *semi(struct team *A,struct team *B)
{
    int y;
    printf("\nSEMI-FINAL\n");
    printf("********************************************\n");
    printf("%s v/s %s\n",A->name,B->name);
    int x = toss();
    y = semi_match(x,A,B);
    if(y==1)
    {
        return A;
    }
    else
    {
        return B;
    }
}

struct team *final(struct team *A,struct team *B)
{
    int y;
    printf("\nFINAL\n");
    printf("********************************************\n");
    printf("%s v/s %s\n",A->name,B->name);
    int x = toss();
    y = semi_match(x,A,B);
    if(y==1)
    {
        return A;
    }
    else
    {
        return B;
    }
}


