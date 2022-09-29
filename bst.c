#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bst.h"
#include "cricket.h"


void initBST(BST *t)
{
    *t = NULL;
}

node *newNode(BST *t, int m,int a,int b,int c, char *n, float o)
{
    node *nn = (node *)malloc(sizeof(node)); 
    nn->points = m;
    nn->matches = a;
    nn->won = b;
    nn->lost = c;
    strcpy(nn->name, n); 
    nn->NRR = o;
    nn->left = NULL;
    nn->right = NULL;
    return nn;
}

void insertNode(BST *t, int m,int a,int b,int c, char *n, float o)
{

    // check if tree is empty
    if (*t == NULL)
    {
        *t = newNode(t, m, a, b, c, n, o);
        return;
    }

    node *p = *t;

    if (p->points < m)
    {
        insertNode(&(p->right), m, a, b, c, n, o);
    }
    else if (p->points > m)
    {
        insertNode(&(p->left), m, a, b, c, n, o);
    }
    else
    {
        if (p->NRR < o)
        {
            insertNode(&(p->right), m, a, b, c, n, o);
        }
        else
        {
            insertNode(&(p->left), m, a, b, c, n, o);
        }
    }
}


void inorder(BST t)
{
    if (!t)
    {
        return;
    }
    inorder(t->right);
    printf("%15s | %3d | %3d | %3d | %7d | %5f\n",t->name, t->matches, t->won, t->lost,t->points, t->NRR);
    inorder(t->left);
    return;
}



struct team  *removeNode(BST *t)
{
    BST p = *t,q;
    struct team *A = (struct team *)malloc(sizeof(struct team));
    if(!p)
    {
        return NULL;
    }

    while(p->right)
    {
        q = p;
        p = p->right;
    }

    if(!p->left)
    {
        q->right = NULL;
        strcpy(A->name,p->name);
        A->points = p->points;
        A->NRR = p->NRR;
        return A;
    }

    q->right = p->left;
    strcpy(A->name,p->name);
    A->points = p->points;
    A->NRR = p->NRR;
    return A;
}






