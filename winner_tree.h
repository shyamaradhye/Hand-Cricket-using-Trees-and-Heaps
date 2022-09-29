#include "cricket.h"

typedef struct 
{
    struct team *A;
    int rear;
}heap;

void init(heap *h);

void insert_teams(heap *h, int n,struct team *A);

struct team *semi(struct team *A,struct team *B);

struct team *final(struct team *A,struct team *B);