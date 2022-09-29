typedef struct node
{
    char name[30];
    int matches;
    int won;
    int lost;
    int points;
    float NRR;
    struct node *left;
    struct node *right;
} node;

typedef node *BST;

#define MAX_SIZE 100

void initBST(BST *t);

node *newNode(BST *t, int m,int a,int b,int c, char *n, float o);

void insertNode(BST *t, int m,int a,int b,int c, char *n, float o);

void inorder(BST t);

struct team *removeNode(BST *t);


