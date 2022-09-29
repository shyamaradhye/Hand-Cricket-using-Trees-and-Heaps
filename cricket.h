struct team
{
    char name[30];
    int matches_played;
    int matches_won;
    int matches_lost;
    int points;
    int runs;
    float NRR;
};

int toss();

void batting(struct team *A, struct team *B);

void bowling(struct team *A,struct team *B);

void match(int x,struct team *A, struct team *B);

void comp_match(int n, struct team *A,struct team *B);

struct team *comp_match2( struct team *A,struct team *B);

void display(struct team *A,struct team *B,struct team *C,struct team *D,struct team *E,struct team *F,struct team *G,struct team *H);

int star_batting(struct team *A, struct team *B);

int star_bowling(struct team *A, struct team *B);

int semi_match(int x,struct team *A, struct team *B);

