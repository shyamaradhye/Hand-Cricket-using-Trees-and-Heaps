#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#include "cricket.h"
#include "bst.h"
#include "winner_tree.h"



int main()
{
    struct team *India = (struct team *)malloc(sizeof(struct team));
    strcpy(India->name,"India");
    India->matches_played = 0;
    India->matches_won = 0;
    India->matches_lost = 0;
    India->points = 0;
    India->runs = 0;
    India->NRR = 0.0;

    struct team *Pakistan = (struct team *)malloc(sizeof(struct team));
    strcpy(Pakistan->name,"Pakistan");
    Pakistan->matches_played = 0;
    Pakistan->matches_won = 0;
    Pakistan->matches_lost = 0;
    Pakistan->points = 0;
    Pakistan->runs = 0;
    Pakistan->NRR = 0.0;

    struct team *Australia = (struct team *)malloc(sizeof(struct team));
    strcpy(Australia->name,"Australia");
    Australia->matches_played = 0;
    Australia->matches_won = 0;
    Australia->matches_lost = 0;
    Australia->points = 0;
    Australia->runs = 0;
    Australia->NRR = 0.0;

    struct team *England = (struct team *)malloc(sizeof(struct team));
    strcpy(England->name,"England");
    England->matches_played = 0;
    England->matches_won = 0;
    England->matches_lost = 0;
    England->points = 0;
    England->runs = 0;
    England->NRR = 0.0;

    struct team *West_Indies = (struct team *)malloc(sizeof(struct team));
    strcpy(West_Indies->name,"West Indies");
    West_Indies->matches_played = 0;
    West_Indies->matches_won = 0;
    West_Indies->matches_lost = 0;
    West_Indies->points = 0;
    West_Indies->runs = 0;
    West_Indies->NRR = 0.0;

    struct team *South_Africa = (struct team *)malloc(sizeof(struct team));
    strcpy(South_Africa->name,"South Africa");
    South_Africa->matches_played = 0;
    South_Africa->matches_won = 0;
    South_Africa->matches_lost = 0;
    South_Africa->points = 0;
    South_Africa->runs = 0;
    South_Africa->NRR = 0.0;

    struct team *New_Zealand = (struct team *)malloc(sizeof(struct team));
    strcpy(New_Zealand->name,"New Zealand");
    New_Zealand->matches_played = 0;
    New_Zealand->matches_won = 0;
    New_Zealand->matches_lost = 0;
    New_Zealand->points = 0;
    New_Zealand->runs = 0;
    New_Zealand->NRR = 0.0;

    struct team *Sri_Lanka = (struct team *)malloc(sizeof(struct team));
    strcpy(Sri_Lanka->name,"Sri Lanka");
    Sri_Lanka->matches_played = 0;
    Sri_Lanka->matches_won = 0;
    Sri_Lanka->matches_lost = 0;
    Sri_Lanka->points = 0;
    Sri_Lanka->runs = 0;
    Sri_Lanka->NRR = 0.0;
  

    printf("**************************************************************\n");
    printf("*                                                            *\n");
    printf("*                 Hand-Cricket World Cup                     *\n");
    printf("*                                                            *\n");
    printf("**************************************************************\n");

    int choice;
    printf("Choose your team:-\n");
    printf("1.India\n2.Pakistan\n3.Australia\n4.England\n5.West Indies\n6.South Africa\n7.New Zealand\n8.Sri Lanka\n");
    scanf("%d",&choice);

    int c, d, x;
   
    for (c = 1; c <= 32767; c++)
        for (d = 1; d <= 32767; d++)
            {}

    switch (choice)
    {
    case 1:
        printf("\nMatch 1:-\n");
        printf("India v/s Pakistan\n");
        x = toss();
        match(x,India,Pakistan);
        printf("\nMatch 2:-\n");
        printf("India v/s Australia\n");
        x = toss();
        match(x,India,Australia);
        printf("\nMatch 3:-\n");
        printf("India v/s England\n");
        x = toss();
        match(x,India,England);
        printf("\nMatch 4:-\n");
        printf("India v/s West Indies\n");
        x = toss();
        match(x,India,West_Indies);
        printf("\nMatch 5:-\n");
        printf("India v/s SouthAfrica\n");
        x = toss();
        match(x,India,South_Africa);
        printf("\nMatch 6:-\n");
        printf("India v/s New Zealand\n");
        x = toss();
        match(x,India,New_Zealand);
        printf("\nMatch 7:-\n");
        printf("India v/s Sri Lanka\n");
        x = toss();
        match(x,India,Sri_Lanka);
        
    
        for (c = 1; c <= 32767; c++)
            for (d = 1; d <= 32767; d++)
                {}

        comp_match(8, Pakistan,Australia);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(9, England,Australia);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(10, England,West_Indies);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(11, Pakistan,England);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(12, West_Indies, Pakistan);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(13, West_Indies,South_Africa);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(14, Pakistan,South_Africa);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(15, New_Zealand,Pakistan);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(16, Australia,New_Zealand);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(17, Sri_Lanka,Australia);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(18, Pakistan,Sri_Lanka);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(19, South_Africa,England);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(20, West_Indies,Australia);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(21, England,New_Zealand);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(22, South_Africa,Australia);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(23, England,Sri_Lanka);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(24, West_Indies,New_Zealand);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(25, New_Zealand, South_Africa);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(26, West_Indies,Sri_Lanka);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(27, New_Zealand, Sri_Lanka);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(28, South_Africa,Sri_Lanka);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}


        printf("\n\n");
        printf("**************************************************************\n");
        printf("*                                                            *\n");
        printf("*                       Points Table                         *\n");
        printf("*                                                            *\n");
        printf("**************************************************************\n");

        char *row1[] = {"Team", "M", "W", "L", "Points", "NRR"};

        printf("%15s | %3s | %3s | %3s | %7s | %5s\n",row1[0], row1[1], row1[2], row1[3], row1[4], row1[5]);

        India->NRR = ((float)India->runs / 1000);
        Pakistan->NRR = ((float)Pakistan->runs / 1000);
        Australia->NRR = ((float)Australia->runs / 1000);
        England->NRR = ((float)England->runs / 1000);
        West_Indies->NRR = ((float)West_Indies->runs / 1000);
        South_Africa->NRR = ((float)South_Africa->runs / 1000);
        New_Zealand->NRR = ((float)New_Zealand->runs / 1000);
        Sri_Lanka->NRR = ((float)Sri_Lanka->runs / 1000);

        BST t1;
        initBST(&t1);
        insertNode(&t1,India->points,India->matches_played,India->matches_won,India->matches_lost,India->name,India->NRR);
        insertNode(&t1,Pakistan->points,Pakistan->matches_played,Pakistan->matches_won,Pakistan->matches_lost,Pakistan->name,Pakistan->NRR);
        insertNode(&t1,Australia->points,Australia->matches_played,Australia->matches_won,Australia->matches_lost,Australia->name,Australia->NRR);
        insertNode(&t1,England->points,England->matches_played,England->matches_won,England->matches_lost,England->name,England->NRR);
        insertNode(&t1,West_Indies->points,West_Indies->matches_played,West_Indies->matches_won,West_Indies->matches_lost,West_Indies->name,West_Indies->NRR);
        insertNode(&t1,South_Africa->points,South_Africa->matches_played,South_Africa->matches_won,South_Africa->matches_lost,South_Africa->name,South_Africa->NRR);
        insertNode(&t1,New_Zealand->points,New_Zealand->matches_played,New_Zealand->matches_won,New_Zealand->matches_lost,New_Zealand->name,New_Zealand->NRR);
        insertNode(&t1,Sri_Lanka->points,Sri_Lanka->matches_played,Sri_Lanka->matches_won,Sri_Lanka->matches_lost,Sri_Lanka->name,Sri_Lanka->NRR);
        inorder(t1);

        for (c = 1; c <= 32000; c++)
            for (d = 1; d <= 32000; d++)
                {}

        heap h1;
        init(&h1);
        insert_teams(&h1,3,removeNode(&t1));
        insert_teams(&h1,4,removeNode(&t1));
        insert_teams(&h1,5,removeNode(&t1));
        insert_teams(&h1,6,removeNode(&t1));
        printf("\nSemis:-\n");
        printf("1. %s v/s %s\n",h1.A[3].name,h1.A[5].name);
        printf("2. %s v/s %s\n",h1.A[4].name,h1.A[6].name);
        printf("\n");

        for (c = 1; c <= 32000; c++)
            for (d = 1; d <= 32000; d++)
                {}

        if((strcmp(h1.A[3].name,"India")==0) || (strcmp(h1.A[5].name,"India")==0))
        {
            if(strcmp(h1.A[3].name,"India")==0)
            {
                struct team *Semi1 = (struct team *)malloc(sizeof(struct team));
                struct team *Semi2 = (struct team *)malloc(sizeof(struct team));
                struct team *Final= (struct team *)malloc(sizeof(struct team));
                Semi1 = semi(&h1.A[3],&h1.A[5]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                printf("\nSEMI-FINAL 2\n");
                printf("********************************************\n");
                Semi2 = comp_match2(&h1.A[4],&h1.A[6]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                if(strcmp(Semi1->name,"India")==0)
                {
                    Final = final(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                else
                {
                    Final = comp_match2(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                printf("\n\n\n\n\n%s Wins The CUP!!!!!\n",Final->name);
            }
            else
            {
                struct team *Semi1 = (struct team *)malloc(sizeof(struct team));
                struct team *Semi2 = (struct team *)malloc(sizeof(struct team));
                struct team *Final= (struct team *)malloc(sizeof(struct team));
                Semi1 = semi(&h1.A[5],&h1.A[3]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                printf("\nSEMI-FINAL 2\n");
                printf("********************************************\n");
                Semi2 = comp_match2(&h1.A[4],&h1.A[6]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                if(strcmp(Semi1->name,"India")==0)
                {
                    Final = final(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                else
                {
                    Final = comp_match2(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                printf("\n\n\n\n\n%s Wins The CUP!!!!!\n",Final->name);
            }
        }
        else if((strcmp(h1.A[4].name,"India")==0) || (strcmp(h1.A[6].name,"India")==0))
        {
            if((strcmp(h1.A[4].name,"India")==0))
            {
                struct team *Semi1 = (struct team *)malloc(sizeof(struct team));
                struct team *Semi2 = (struct team *)malloc(sizeof(struct team));
                struct team *Final= (struct team *)malloc(sizeof(struct team));
                printf("\nSEMI-FINAL 1\n");
                printf("********************************************\n");
                Semi2 = comp_match2(&h1.A[3],&h1.A[5]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                Semi1 = semi(&h1.A[4],&h1.A[6]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                if(strcmp(Semi1->name,"India")==0)
                {
                    Final = final(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                else
                {
                    Final = comp_match2(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                printf("\n\n\n\n\n%s Wins The CUP!!!!!\n",Final->name);
            }
            else
            {
                struct team *Semi1 = (struct team *)malloc(sizeof(struct team));
                struct team *Semi2 = (struct team *)malloc(sizeof(struct team));
                struct team *Final= (struct team *)malloc(sizeof(struct team));
                printf("\nSEMI-FINAL 1\n");
                printf("********************************************\n");
                Semi2 = comp_match2(&h1.A[3],&h1.A[5]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                Semi1 = semi(&h1.A[6],&h1.A[4]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                if(strcmp(Semi1->name,"India")==0)
                {
                    Final = final(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                else
                {
                    Final = comp_match2(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                printf("\n\n\n\n\n%s Wins The CUP!!!!!\n",Final->name);
            }
            
        }
        else
        {
            struct team *Semi1 = (struct team *)malloc(sizeof(struct team));
            struct team *Semi2 = (struct team *)malloc(sizeof(struct team));
            struct team *Final= (struct team *)malloc(sizeof(struct team));
            printf("\nSEMI-FINAL 1\n");
            printf("********************************************\n");
            Semi2 = comp_match2(&h1.A[3],&h1.A[5]);
            for (c = 1; c <= 32000; c++)
                for (d = 1; d <= 32000; d++)
                    {}
            printf("\nSEMI-FINAL 2\n");
            printf("********************************************\n");
            Semi1 = comp_match2(&h1.A[6],&h1.A[4]);
            for (c = 1; c <= 32000; c++)
                for (d = 1; d <= 32000; d++)
                    {}
            printf("\nFINAL \n");
            printf("********************************************\n");
            Final = comp_match2(Semi1,Semi2);
            for (c = 1; c <= 32000; c++)
                for (d = 1; d <= 32000; d++)
                    {}
            printf("\n\n\n\n\n%s Wins The CUP!!!!!\n",Final->name);   
        }

        for (c = 1; c <= 32000; c++)
            for (d = 1; d <= 32000; d++)
                {}
            break;
    
    case 2:
        printf("\nMatch 1:-\n");
        printf("India v/s Pakistan\n");
        x = toss();
        match(x,Pakistan,India);
        printf("\nMatch 2:-\n");
        printf("Pakistan v/s Australia\n");
        x = toss();
        match(x,Pakistan,Australia);
        printf("\nMatch 3:-\n");
        printf("Pakistan v/s England\n");
        x = toss();
        match(x,Pakistan,England);
        printf("\nMatch 4:-\n");
        printf("Pakistan v/s West Indies\n");
        x = toss();
        match(x,Pakistan,West_Indies);
        printf("\nMatch 5:-\n");
        printf("Pakistan v/s SouthAfrica\n");
        x = toss();
        match(x,Pakistan,South_Africa);
        printf("\nMatch 6:-\n");
        printf("Pakistan v/s New Zealand\n");
        x = toss();
        match(x,Pakistan,New_Zealand);
        printf("\nMatch 7:-\n");
        printf("Pakistan v/s Sri Lanka\n");
        x = toss();
        match(x,Pakistan,Sri_Lanka);
        
    
        for (c = 1; c <= 32767; c++)
            for (d = 1; d <= 32767; d++)
                {}

        comp_match(8, India,Australia);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(9, England,Australia);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(10, England,West_Indies);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(11, India,England);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(12, West_Indies, India);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(13, West_Indies,South_Africa);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(14, India,South_Africa);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(15, New_Zealand,India);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(16, Australia,New_Zealand);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(17, Sri_Lanka,Australia);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(18, India,Sri_Lanka);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(19, South_Africa,England);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(20, West_Indies,Australia);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(21, England,New_Zealand);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(22, South_Africa,Australia);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(23, England,Sri_Lanka);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(24, West_Indies,New_Zealand);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(25, New_Zealand, South_Africa);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(26, West_Indies,Sri_Lanka);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(27, New_Zealand, Sri_Lanka);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(28, South_Africa,Sri_Lanka);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}


        printf("\n\n");
        printf("**************************************************************\n");
        printf("*                                                            *\n");
        printf("*                       Points Table                         *\n");
        printf("*                                                            *\n");
        printf("**************************************************************\n");

        char *row2[] = {"Team", "M", "W", "L", "Points", "NRR"};

        printf("%15s | %3s | %3s | %3s | %7s | %5s\n",row2[0], row2[1], row2[2], row2[3], row2[4], row2[5]);

        India->NRR = ((float)India->runs / 1000);
        Pakistan->NRR = ((float)Pakistan->runs / 1000);
        Australia->NRR = ((float)Australia->runs / 1000);
        England->NRR = ((float)England->runs / 1000);
        West_Indies->NRR = ((float)West_Indies->runs / 1000);
        South_Africa->NRR = ((float)South_Africa->runs / 1000);
        New_Zealand->NRR = ((float)New_Zealand->runs / 1000);
        Sri_Lanka->NRR = ((float)Sri_Lanka->runs / 1000);

        BST t2;
        initBST(&t2);
        insertNode(&t2,India->points,India->matches_played,India->matches_won,India->matches_lost,India->name,India->NRR);
        insertNode(&t2,Pakistan->points,Pakistan->matches_played,Pakistan->matches_won,Pakistan->matches_lost,Pakistan->name,Pakistan->NRR);
        insertNode(&t2,Australia->points,Australia->matches_played,Australia->matches_won,Australia->matches_lost,Australia->name,Australia->NRR);
        insertNode(&t2,England->points,England->matches_played,England->matches_won,England->matches_lost,England->name,England->NRR);
        insertNode(&t2,West_Indies->points,West_Indies->matches_played,West_Indies->matches_won,West_Indies->matches_lost,West_Indies->name,West_Indies->NRR);
        insertNode(&t2,South_Africa->points,South_Africa->matches_played,South_Africa->matches_won,South_Africa->matches_lost,South_Africa->name,South_Africa->NRR);
        insertNode(&t2,New_Zealand->points,New_Zealand->matches_played,New_Zealand->matches_won,New_Zealand->matches_lost,New_Zealand->name,New_Zealand->NRR);
        insertNode(&t2,Sri_Lanka->points,Sri_Lanka->matches_played,Sri_Lanka->matches_won,Sri_Lanka->matches_lost,Sri_Lanka->name,Sri_Lanka->NRR);
        inorder(t2);

        for (c = 1; c <= 32000; c++)
            for (d = 1; d <= 32000; d++)
                {}

        heap h2;
        init(&h2);
        insert_teams(&h2,3,removeNode(&t2));
        insert_teams(&h2,4,removeNode(&t2));
        insert_teams(&h2,5,removeNode(&t2));
        insert_teams(&h2,6,removeNode(&t2));
        printf("\nSemis:-\n");
        printf("1. %s v/s %s\n",h2.A[3].name,h2.A[5].name);
        printf("2. %s v/s %s\n",h2.A[4].name,h2.A[6].name);
        printf("\n");

        for (c = 1; c <= 32000; c++)
            for (d = 1; d <= 32000; d++)
                {}

        if((strcmp(h2.A[3].name,"Pakistan")==0) || (strcmp(h2.A[5].name,"Pakistan")==0))
        {
            if(strcmp(h2.A[3].name,"Pakistan")==0)
            {
                struct team *Semi1 = (struct team *)malloc(sizeof(struct team));
                struct team *Semi2 = (struct team *)malloc(sizeof(struct team));
                struct team *Final= (struct team *)malloc(sizeof(struct team));
                Semi1 = semi(&h2.A[3],&h2.A[5]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                printf("\nSEMI-FINAL 2\n");
                printf("********************************************\n");
                Semi2 = comp_match2(&h2.A[4],&h2.A[6]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                if(strcmp(Semi1->name,"Pakistan")==0)
                {
                    Final = final(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                else
                {
                    Final = comp_match2(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                printf("\n\n\n\n\n%s Wins The CUP!!!!!\n",Final->name);
            }
            else
            {
                struct team *Semi1 = (struct team *)malloc(sizeof(struct team));
                struct team *Semi2 = (struct team *)malloc(sizeof(struct team));
                struct team *Final= (struct team *)malloc(sizeof(struct team));
                Semi1 = semi(&h2.A[5],&h2.A[3]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                printf("\nSEMI-FINAL 2\n");
                printf("********************************************\n");
                Semi2 = comp_match2(&h2.A[4],&h2.A[6]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                if(strcmp(Semi1->name,"Pakistan")==0)
                {
                    Final = final(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                else
                {
                    Final = comp_match2(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                printf("\n\n\n\n\n%s Wins The CUP!!!!!\n",Final->name);
            }
        }
        else if((strcmp(h2.A[4].name,"Pakistan")==0) || (strcmp(h2.A[6].name,"Pakistan")==0))
        {
            if((strcmp(h2.A[4].name,"Pakistan")==0))
            {
                struct team *Semi1 = (struct team *)malloc(sizeof(struct team));
                struct team *Semi2 = (struct team *)malloc(sizeof(struct team));
                struct team *Final= (struct team *)malloc(sizeof(struct team));
                printf("\nSEMI-FINAL 1\n");
                printf("********************************************\n");
                Semi2 = comp_match2(&h2.A[3],&h2.A[5]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                Semi1 = semi(&h2.A[4],&h2.A[6]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                if(strcmp(Semi1->name,"Pakistan")==0)
                {
                    Final = final(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                else
                {
                    Final = comp_match2(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                printf("\n\n\n\n\n%s Wins The CUP!!!!!\n",Final->name);
            }
            else
            {
                struct team *Semi1 = (struct team *)malloc(sizeof(struct team));
                struct team *Semi2 = (struct team *)malloc(sizeof(struct team));
                struct team *Final= (struct team *)malloc(sizeof(struct team));
                printf("\nSEMI-FINAL 1\n");
                printf("********************************************\n");
                Semi2 = comp_match2(&h2.A[3],&h2.A[5]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                Semi1 = semi(&h2.A[6],&h2.A[4]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                if(strcmp(Semi1->name,"Pakistan")==0)
                {
                    Final = final(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                else
                {
                    Final = comp_match2(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                printf("\n\n\n\n\n%s Wins The CUP!!!!!\n",Final->name);
            }
            
        }
        else
        {
            struct team *Semi1 = (struct team *)malloc(sizeof(struct team));
            struct team *Semi2 = (struct team *)malloc(sizeof(struct team));
            struct team *Final= (struct team *)malloc(sizeof(struct team));
            printf("\nSEMI-FINAL 1\n");
            printf("********************************************\n");
            Semi2 = comp_match2(&h2.A[3],&h2.A[5]);
            for (c = 1; c <= 32000; c++)
                for (d = 1; d <= 32000; d++)
                    {}
            printf("\nSEMI-FINAL 2\n");
            printf("********************************************\n");
            Semi1 = comp_match2(&h2.A[6],&h2.A[4]);
            for (c = 1; c <= 32000; c++)
                for (d = 1; d <= 32000; d++)
                    {}
            printf("\nFINAL \n");
            printf("********************************************\n");
            Final = comp_match2(Semi1,Semi2);
            for (c = 1; c <= 32000; c++)
                for (d = 1; d <= 32000; d++)
                    {}
            printf("\n\n\n\n\n%s Wins The CUP!!!!!\n",Final->name);   
        }

        for (c = 1; c <= 32000; c++)
            for (d = 1; d <= 32000; d++)
                {}
        break;

    case 3:
        printf("\nMatch 1:-\n");
        printf("Australia v/s India\n");
        x = toss();
        match(x,Australia,India);
        printf("\nMatch 2:-\n");
        printf("Pakistan v/s Australia\n");
        x = toss();
        match(x,Australia,Pakistan);
        printf("\nMatch 3:-\n");
        printf("Australia v/s England\n");
        x = toss();
        match(x,Australia,England);
        printf("\nMatch 4:-\n");
        printf("Australia v/s West Indies\n");
        x = toss();
        match(x,Australia,West_Indies);
        printf("\nMatch 5:-\n");
        printf("Australia v/s SouthAfrica\n");
        x = toss();
        match(x,Australia,South_Africa);
        printf("\nMatch 6:-\n");
        printf("Australia v/s New Zealand\n");
        x = toss();
        match(x,Australia,New_Zealand);
        printf("\nMatch 7:-\n");
        printf("Australia v/s Sri Lanka\n");
        x = toss();
        match(x,Australia,Sri_Lanka);
        
    
        for (c = 1; c <= 32767; c++)
            for (d = 1; d <= 32767; d++)
                {}

        comp_match(8, India,Pakistan);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(9, England,Pakistan);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(10, England,West_Indies);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(11, India,England);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(12, West_Indies, India);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(13, West_Indies,South_Africa);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(14, India,South_Africa);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(15, New_Zealand,India);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(16, Pakistan,New_Zealand);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(17, Sri_Lanka,Pakistan);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(18, India,Sri_Lanka);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(19, South_Africa,England);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(20, West_Indies,Pakistan);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(21, England,New_Zealand);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(22, South_Africa,Pakistan);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(23, England,Sri_Lanka);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(24, West_Indies,New_Zealand);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(25, New_Zealand, South_Africa);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(26, West_Indies,Sri_Lanka);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(27, New_Zealand, Sri_Lanka);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(28, South_Africa,Sri_Lanka);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}


        printf("\n\n");
        printf("**************************************************************\n");
        printf("*                                                            *\n");
        printf("*                       Points Table                         *\n");
        printf("*                                                            *\n");
        printf("**************************************************************\n");

        char *row3[] = {"Team", "M", "W", "L", "Points", "NRR"};

        printf("%15s | %3s | %3s | %3s | %7s | %5s\n",row3[0], row3[1], row3[2], row3[3], row3[4], row3[5]);

        India->NRR = ((float)India->runs / 1000);
        Pakistan->NRR = ((float)Pakistan->runs / 1000);
        Australia->NRR = ((float)Australia->runs / 1000);
        England->NRR = ((float)England->runs / 1000);
        West_Indies->NRR = ((float)West_Indies->runs / 1000);
        South_Africa->NRR = ((float)South_Africa->runs / 1000);
        New_Zealand->NRR = ((float)New_Zealand->runs / 1000);
        Sri_Lanka->NRR = ((float)Sri_Lanka->runs / 1000);

        BST t3;
        initBST(&t3);
        insertNode(&t3,India->points,India->matches_played,India->matches_won,India->matches_lost,India->name,India->NRR);
        insertNode(&t3,Pakistan->points,Pakistan->matches_played,Pakistan->matches_won,Pakistan->matches_lost,Pakistan->name,Pakistan->NRR);
        insertNode(&t3,Australia->points,Australia->matches_played,Australia->matches_won,Australia->matches_lost,Australia->name,Australia->NRR);
        insertNode(&t3,England->points,England->matches_played,England->matches_won,England->matches_lost,England->name,England->NRR);
        insertNode(&t3,West_Indies->points,West_Indies->matches_played,West_Indies->matches_won,West_Indies->matches_lost,West_Indies->name,West_Indies->NRR);
        insertNode(&t3,South_Africa->points,South_Africa->matches_played,South_Africa->matches_won,South_Africa->matches_lost,South_Africa->name,South_Africa->NRR);
        insertNode(&t3,New_Zealand->points,New_Zealand->matches_played,New_Zealand->matches_won,New_Zealand->matches_lost,New_Zealand->name,New_Zealand->NRR);
        insertNode(&t3,Sri_Lanka->points,Sri_Lanka->matches_played,Sri_Lanka->matches_won,Sri_Lanka->matches_lost,Sri_Lanka->name,Sri_Lanka->NRR);
        inorder(t3);

        for (c = 1; c <= 32000; c++)
            for (d = 1; d <= 32000; d++)
                {}

        heap h3;
        init(&h3);
        insert_teams(&h3,3,removeNode(&t3));
        insert_teams(&h3,4,removeNode(&t3));
        insert_teams(&h3,5,removeNode(&t3));
        insert_teams(&h3,6,removeNode(&t3));
        printf("\nSemis:-\n");
        printf("1. %s v/s %s\n",h3.A[3].name,h3.A[5].name);
        printf("2. %s v/s %s\n",h3.A[4].name,h3.A[6].name);
        printf("\n");

        for (c = 1; c <= 32000; c++)
            for (d = 1; d <= 32000; d++)
                {}

        if((strcmp(h3.A[3].name,"Australia")==0) || (strcmp(h3.A[5].name,"Australia")==0))
        {
            if(strcmp(h3.A[3].name,"Australia")==0)
            {
                struct team *Semi1 = (struct team *)malloc(sizeof(struct team));
                struct team *Semi2 = (struct team *)malloc(sizeof(struct team));
                struct team *Final= (struct team *)malloc(sizeof(struct team));
                Semi1 = semi(&h3.A[3],&h3.A[5]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                printf("\nSEMI-FINAL 2\n");
                printf("********************************************\n");
                Semi2 = comp_match2(&h3.A[4],&h3.A[6]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                if(strcmp(Semi1->name,"Australia")==0)
                {
                    Final = final(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                else
                {
                    Final = comp_match2(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                printf("\n\n\n\n\n%s Wins The CUP!!!!!\n",Final->name);
            }
            else
            {
                struct team *Semi1 = (struct team *)malloc(sizeof(struct team));
                struct team *Semi2 = (struct team *)malloc(sizeof(struct team));
                struct team *Final= (struct team *)malloc(sizeof(struct team));
                Semi1 = semi(&h3.A[5],&h3.A[3]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                printf("\nSEMI-FINAL 2\n");
                printf("********************************************\n");
                Semi2 = comp_match2(&h3.A[4],&h3.A[6]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                if(strcmp(Semi1->name,"Australia")==0)
                {
                    Final = final(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                else
                {
                    Final = comp_match2(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                printf("\n\n\n\n\n%s Wins The CUP!!!!!\n",Final->name);
            }
        }
        else if((strcmp(h3.A[4].name,"Australia")==0) || (strcmp(h3.A[6].name,"Australia")==0))
        {
            if((strcmp(h3.A[4].name,"Australia")==0))
            {
                struct team *Semi1 = (struct team *)malloc(sizeof(struct team));
                struct team *Semi2 = (struct team *)malloc(sizeof(struct team));
                struct team *Final= (struct team *)malloc(sizeof(struct team));
                printf("\nSEMI-FINAL 1\n");
                printf("********************************************\n");
                Semi2 = comp_match2(&h3.A[3],&h3.A[5]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                Semi1 = semi(&h3.A[4],&h3.A[6]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                if(strcmp(Semi1->name,"Australia")==0)
                {
                    Final = final(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                else
                {
                    Final = comp_match2(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                printf("\n\n\n\n\n%s Wins The CUP!!!!!\n",Final->name);
            }
            else
            {
                struct team *Semi1 = (struct team *)malloc(sizeof(struct team));
                struct team *Semi2 = (struct team *)malloc(sizeof(struct team));
                struct team *Final= (struct team *)malloc(sizeof(struct team));
                printf("\nSEMI-FINAL 1\n");
                printf("********************************************\n");
                Semi2 = comp_match2(&h3.A[3],&h3.A[5]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                Semi1 = semi(&h3.A[6],&h3.A[4]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                if(strcmp(Semi1->name,"Australia")==0)
                {
                    Final = final(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                else
                {
                    Final = comp_match2(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                printf("\n\n\n\n\n%s Wins The CUP!!!!!\n",Final->name);
            }
            
        }
        else
        {
            struct team *Semi1 = (struct team *)malloc(sizeof(struct team));
            struct team *Semi2 = (struct team *)malloc(sizeof(struct team));
            struct team *Final= (struct team *)malloc(sizeof(struct team));
            printf("\nSEMI-FINAL 1\n");
            printf("********************************************\n");
            Semi2 = comp_match2(&h3.A[3],&h3.A[5]);
            for (c = 1; c <= 32000; c++)
                for (d = 1; d <= 32000; d++)
                    {}
            printf("\nSEMI-FINAL 2\n");
            printf("********************************************\n");
            Semi1 = comp_match2(&h3.A[6],&h3.A[4]);
            for (c = 1; c <= 32000; c++)
                for (d = 1; d <= 32000; d++)
                    {}
            printf("\nFINAL \n");
            printf("********************************************\n");
            Final = comp_match2(Semi1,Semi2);
            for (c = 1; c <= 32000; c++)
                for (d = 1; d <= 32000; d++)
                    {}
            printf("\n\n\n\n\n%s Wins The CUP!!!!!\n",Final->name);   
        }

        for (c = 1; c <= 32000; c++)
            for (d = 1; d <= 32000; d++)
                {}
        break;

    case 4:
        printf("\nMatch 1:-\n");
        printf("England v/s India\n");
        x = toss();
        match(x,England,India);
        printf("\nMatch 2:-\n");
        printf("Pakistan v/s England\n");
        x = toss();
        match(x,England,Pakistan);
        printf("\nMatch 3:-\n");
        printf("Australia v/s England\n");
        x = toss();
        match(x,England,Australia);
        printf("\nMatch 4:-\n");
        printf("England v/s West Indies\n");
        x = toss();
        match(x,England,West_Indies);
        printf("\nMatch 5:-\n");
        printf("England v/s SouthAfrica\n");
        x = toss();
        match(x,England,South_Africa);
        printf("\nMatch 6:-\n");
        printf("England v/s New Zealand\n");
        x = toss();
        match(x,England,New_Zealand);
        printf("\nMatch 7:-\n");
        printf("England v/s Sri Lanka\n");
        x = toss();
        match(x,England,Sri_Lanka);
        
    
        for (c = 1; c <= 32767; c++)
            for (d = 1; d <= 32767; d++)
                {}

        comp_match(8, India,Pakistan);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(9, Australia,Pakistan);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(10, Australia,West_Indies);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(11, India,Australia);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(12, West_Indies, India);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(13, West_Indies,South_Africa);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(14, India,South_Africa);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(15, New_Zealand,India);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(16, Pakistan,New_Zealand);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(17, Sri_Lanka,Pakistan);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(18, India,Sri_Lanka);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(19, South_Africa,Australia);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(20, West_Indies,Pakistan);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(21, Australia,New_Zealand);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(22, South_Africa,Pakistan);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(23, Australia,Sri_Lanka);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(24, West_Indies,New_Zealand);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(25, New_Zealand, South_Africa);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(26, West_Indies,Sri_Lanka);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(27, New_Zealand, Sri_Lanka);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(28, South_Africa,Sri_Lanka);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}


        printf("\n\n");
        printf("**************************************************************\n");
        printf("*                                                            *\n");
        printf("*                       Points Table                         *\n");
        printf("*                                                            *\n");
        printf("**************************************************************\n");

        char *row4[] = {"Team", "M", "W", "L", "Points", "NRR"};

        printf("%15s | %3s | %3s | %3s | %7s | %5s\n",row4[0], row4[1], row4[2], row4[3], row4[4], row4[5]);

        India->NRR = ((float)India->runs / 1000);
        Pakistan->NRR = ((float)Pakistan->runs / 1000);
        Australia->NRR = ((float)Australia->runs / 1000);
        England->NRR = ((float)England->runs / 1000);
        West_Indies->NRR = ((float)West_Indies->runs / 1000);
        South_Africa->NRR = ((float)South_Africa->runs / 1000);
        New_Zealand->NRR = ((float)New_Zealand->runs / 1000);
        Sri_Lanka->NRR = ((float)Sri_Lanka->runs / 1000);

        BST t4;
        initBST(&t4);
        insertNode(&t4,India->points,India->matches_played,India->matches_won,India->matches_lost,India->name,India->NRR);
        insertNode(&t4,Pakistan->points,Pakistan->matches_played,Pakistan->matches_won,Pakistan->matches_lost,Pakistan->name,Pakistan->NRR);
        insertNode(&t4,Australia->points,Australia->matches_played,Australia->matches_won,Australia->matches_lost,Australia->name,Australia->NRR);
        insertNode(&t4,England->points,England->matches_played,England->matches_won,England->matches_lost,England->name,England->NRR);
        insertNode(&t4,West_Indies->points,West_Indies->matches_played,West_Indies->matches_won,West_Indies->matches_lost,West_Indies->name,West_Indies->NRR);
        insertNode(&t4,South_Africa->points,South_Africa->matches_played,South_Africa->matches_won,South_Africa->matches_lost,South_Africa->name,South_Africa->NRR);
        insertNode(&t4,New_Zealand->points,New_Zealand->matches_played,New_Zealand->matches_won,New_Zealand->matches_lost,New_Zealand->name,New_Zealand->NRR);
        insertNode(&t4,Sri_Lanka->points,Sri_Lanka->matches_played,Sri_Lanka->matches_won,Sri_Lanka->matches_lost,Sri_Lanka->name,Sri_Lanka->NRR);
        inorder(t4);

        for (c = 1; c <= 32000; c++)
            for (d = 1; d <= 32000; d++)
                {}

        heap h4;
        init(&h4);
        insert_teams(&h4,3,removeNode(&t4));
        insert_teams(&h4,4,removeNode(&t4));
        insert_teams(&h4,5,removeNode(&t4));
        insert_teams(&h4,6,removeNode(&t4));
        printf("\nSemis:-\n");
        printf("1. %s v/s %s\n",h4.A[3].name,h4.A[5].name);
        printf("2. %s v/s %s\n",h4.A[4].name,h4.A[6].name);
        printf("\n");

        for (c = 1; c <= 32000; c++)
            for (d = 1; d <= 32000; d++)
                {}

        if((strcmp(h4.A[3].name,"England")==0) || (strcmp(h4.A[5].name,"England")==0))
        {
            if(strcmp(h4.A[3].name,"England")==0)
            {
                struct team *Semi1 = (struct team *)malloc(sizeof(struct team));
                struct team *Semi2 = (struct team *)malloc(sizeof(struct team));
                struct team *Final= (struct team *)malloc(sizeof(struct team));
                Semi1 = semi(&h4.A[3],&h4.A[5]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                printf("\nSEMI-FINAL 2\n");
                printf("********************************************\n");
                Semi2 = comp_match2(&h4.A[4],&h4.A[6]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                if(strcmp(Semi1->name,"England")==0)
                {
                    Final = final(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                else
                {
                    Final = comp_match2(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                printf("\n\n\n\n\n%s Wins The CUP!!!!!\n",Final->name);
            }
            else
            {
                struct team *Semi1 = (struct team *)malloc(sizeof(struct team));
                struct team *Semi2 = (struct team *)malloc(sizeof(struct team));
                struct team *Final= (struct team *)malloc(sizeof(struct team));
                Semi1 = semi(&h4.A[5],&h4.A[3]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                printf("\nSEMI-FINAL 2\n");
                printf("********************************************\n");
                Semi2 = comp_match2(&h4.A[4],&h4.A[6]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                if(strcmp(Semi1->name,"England")==0)
                {
                    Final = final(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                else
                {
                    Final = comp_match2(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                printf("\n\n\n\n\n%s Wins The CUP!!!!!\n",Final->name);
            }
        }
        else if((strcmp(h4.A[4].name,"England")==0) || (strcmp(h4.A[6].name,"England")==0))
        {
            if((strcmp(h4.A[4].name,"England")==0))
            {
                struct team *Semi1 = (struct team *)malloc(sizeof(struct team));
                struct team *Semi2 = (struct team *)malloc(sizeof(struct team));
                struct team *Final= (struct team *)malloc(sizeof(struct team));
                printf("\nSEMI-FINAL 1\n");
                printf("********************************************\n");
                Semi2 = comp_match2(&h4.A[3],&h4.A[5]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                Semi1 = semi(&h4.A[4],&h4.A[6]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                if(strcmp(Semi1->name,"England")==0)
                {
                    Final = final(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                else
                {
                    Final = comp_match2(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                printf("\n\n\n\n\n%s Wins The CUP!!!!!\n",Final->name);
            }
            else
            {
                struct team *Semi1 = (struct team *)malloc(sizeof(struct team));
                struct team *Semi2 = (struct team *)malloc(sizeof(struct team));
                struct team *Final= (struct team *)malloc(sizeof(struct team));
                printf("\nSEMI-FINAL 1\n");
                printf("********************************************\n");
                Semi2 = comp_match2(&h4.A[3],&h4.A[5]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                Semi1 = semi(&h4.A[6],&h4.A[4]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                if(strcmp(Semi1->name,"England")==0)
                {
                    Final = final(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                else
                {
                    Final = comp_match2(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                printf("\n\n\n\n\n%s Wins The CUP!!!!!\n",Final->name);
            }
            
        }
        else
        {
            struct team *Semi1 = (struct team *)malloc(sizeof(struct team));
            struct team *Semi2 = (struct team *)malloc(sizeof(struct team));
            struct team *Final= (struct team *)malloc(sizeof(struct team));
            printf("\nSEMI-FINAL 1\n");
            printf("********************************************\n");
            Semi2 = comp_match2(&h4.A[3],&h4.A[5]);
            for (c = 1; c <= 32000; c++)
                for (d = 1; d <= 32000; d++)
                    {}
            printf("\nSEMI-FINAL 2\n");
            printf("********************************************\n");
            Semi1 = comp_match2(&h4.A[6],&h4.A[4]);
            for (c = 1; c <= 32000; c++)
                for (d = 1; d <= 32000; d++)
                    {}
            printf("\nFINAL \n");
            printf("********************************************\n");
            Final = comp_match2(Semi1,Semi2);
            for (c = 1; c <= 32000; c++)
                for (d = 1; d <= 32000; d++)
                    {}
            printf("\n\n\n\n\n%s Wins The CUP!!!!!\n",Final->name);   
        }

        for (c = 1; c <= 32000; c++)
            for (d = 1; d <= 32000; d++)
                {}
        break;

    case 5:
        printf("\nMatch 1:-\n");
        printf("West Indies v/s India\n");
        x = toss();
        match(x,West_Indies,India);
        printf("\nMatch 2:-\n");
        printf("Pakistan v/s West Indies\n");
        x = toss();
        match(x,West_Indies,Pakistan);
        printf("\nMatch 3:-\n");
        printf("Australia v/s West Indies\n");
        x = toss();
        match(x,West_Indies,Australia);
        printf("\nMatch 4:-\n");
        printf("England v/s West Indies\n");
        x = toss();
        match(x,West_Indies,England);
        printf("\nMatch 5:-\n");
        printf("West Indies v/s SouthAfrica\n");
        x = toss();
        match(x,West_Indies,South_Africa);
        printf("\nMatch 6:-\n");
        printf("West Indies v/s New Zealand\n");
        x = toss();
        match(x,West_Indies,New_Zealand);
        printf("\nMatch 7:-\n");
        printf("West Indies v/s Sri Lanka\n");
        x = toss();
        match(x,West_Indies,Sri_Lanka);
        
    
        for (c = 1; c <= 32767; c++)
            for (d = 1; d <= 32767; d++)
                {}

        comp_match(8, India,Pakistan);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(9, Australia,Pakistan);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(10, Australia,England);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(11, India,Australia);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(12, England, India);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(13, England,South_Africa);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(14, India,South_Africa);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(15, New_Zealand,India);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(16, Pakistan,New_Zealand);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(17, Sri_Lanka,Pakistan);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(18, India,Sri_Lanka);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(19, South_Africa,Australia);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(20, England,Pakistan);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(21, Australia,New_Zealand);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(22, South_Africa,Pakistan);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(23, Australia,Sri_Lanka);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(24, England,New_Zealand);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(25, New_Zealand, South_Africa);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(26, England,Sri_Lanka);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(27, New_Zealand, Sri_Lanka);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}
        comp_match(28, South_Africa,Sri_Lanka);
        for (c = 1; c <= 24000; c++)
            for (d = 1; d <= 24000; d++)
                {}


        printf("\n\n");
        printf("**************************************************************\n");
        printf("*                                                            *\n");
        printf("*                       Points Table                         *\n");
        printf("*                                                            *\n");
        printf("**************************************************************\n");

        char *row5[] = {"Team", "M", "W", "L", "Points", "NRR"};

        printf("%15s | %3s | %3s | %3s | %7s | %5s\n",row5[0], row5[1], row5[2], row5[3], row5[4], row5[5]);

        India->NRR = ((float)India->runs / 1000);
        Pakistan->NRR = ((float)Pakistan->runs / 1000);
        Australia->NRR = ((float)Australia->runs / 1000);
        England->NRR = ((float)England->runs / 1000);
        West_Indies->NRR = ((float)West_Indies->runs / 1000);
        South_Africa->NRR = ((float)South_Africa->runs / 1000);
        New_Zealand->NRR = ((float)New_Zealand->runs / 1000);
        Sri_Lanka->NRR = ((float)Sri_Lanka->runs / 1000);

        BST t5;
        initBST(&t5);
        insertNode(&t5,India->points,India->matches_played,India->matches_won,India->matches_lost,India->name,India->NRR);
        insertNode(&t5,Pakistan->points,Pakistan->matches_played,Pakistan->matches_won,Pakistan->matches_lost,Pakistan->name,Pakistan->NRR);
        insertNode(&t5,Australia->points,Australia->matches_played,Australia->matches_won,Australia->matches_lost,Australia->name,Australia->NRR);
        insertNode(&t5,England->points,England->matches_played,England->matches_won,England->matches_lost,England->name,England->NRR);
        insertNode(&t5,West_Indies->points,West_Indies->matches_played,West_Indies->matches_won,West_Indies->matches_lost,West_Indies->name,West_Indies->NRR);
        insertNode(&t5,South_Africa->points,South_Africa->matches_played,South_Africa->matches_won,South_Africa->matches_lost,South_Africa->name,South_Africa->NRR);
        insertNode(&t5,New_Zealand->points,New_Zealand->matches_played,New_Zealand->matches_won,New_Zealand->matches_lost,New_Zealand->name,New_Zealand->NRR);
        insertNode(&t5,Sri_Lanka->points,Sri_Lanka->matches_played,Sri_Lanka->matches_won,Sri_Lanka->matches_lost,Sri_Lanka->name,Sri_Lanka->NRR);
        inorder(t5);

        for (c = 1; c <= 32000; c++)
            for (d = 1; d <= 32000; d++)
                {}

        heap h5;
        init(&h5);
        insert_teams(&h5,3,removeNode(&t5));
        insert_teams(&h5,4,removeNode(&t5));
        insert_teams(&h5,5,removeNode(&t5));
        insert_teams(&h5,6,removeNode(&t5));
        printf("\nSemis:-\n");
        printf("1. %s v/s %s\n",h5.A[3].name,h5.A[5].name);
        printf("2. %s v/s %s\n",h5.A[4].name,h5.A[6].name);
        printf("\n");

        for (c = 1; c <= 32000; c++)
            for (d = 1; d <= 32000; d++)
                {}

        if((strcmp(h5.A[3].name,"West Indies")==0) || (strcmp(h5.A[5].name,"West Indies")==0))
        {
            if(strcmp(h5.A[3].name,"West Indies")==0)
            {
                struct team *Semi1 = (struct team *)malloc(sizeof(struct team));
                struct team *Semi2 = (struct team *)malloc(sizeof(struct team));
                struct team *Final= (struct team *)malloc(sizeof(struct team));
                Semi1 = semi(&h5.A[3],&h5.A[5]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                printf("\nSEMI-FINAL 2\n");
                printf("********************************************\n");
                Semi2 = comp_match2(&h5.A[4],&h5.A[6]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                if(strcmp(Semi1->name,"West Indies")==0)
                {
                    Final = final(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                else
                {
                    Final = comp_match2(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                printf("\n\n\n\n\n%s Wins The CUP!!!!!\n",Final->name);
            }
            else
            {
                struct team *Semi1 = (struct team *)malloc(sizeof(struct team));
                struct team *Semi2 = (struct team *)malloc(sizeof(struct team));
                struct team *Final= (struct team *)malloc(sizeof(struct team));
                Semi1 = semi(&h5.A[5],&h5.A[3]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                printf("\nSEMI-FINAL 2\n");
                printf("********************************************\n");
                Semi2 = comp_match2(&h5.A[4],&h5.A[6]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                if(strcmp(Semi1->name,"West Indies")==0)
                {
                    Final = final(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                else
                {
                    Final = comp_match2(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                printf("\n\n\n\n\n%s Wins The CUP!!!!!\n",Final->name);
            }
        }
        else if((strcmp(h5.A[4].name,"West Indies")==0) || (strcmp(h5.A[6].name,"West Indies")==0))
        {
            if((strcmp(h5.A[4].name,"West Indies")==0))
            {
                struct team *Semi1 = (struct team *)malloc(sizeof(struct team));
                struct team *Semi2 = (struct team *)malloc(sizeof(struct team));
                struct team *Final= (struct team *)malloc(sizeof(struct team));
                printf("\nSEMI-FINAL 1\n");
                printf("********************************************\n");
                Semi2 = comp_match2(&h5.A[3],&h5.A[5]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                Semi1 = semi(&h5.A[4],&h5.A[6]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                if(strcmp(Semi1->name,"West Indies")==0)
                {
                    Final = final(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                else
                {
                    Final = comp_match2(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                printf("\n\n\n\n\n%s Wins The CUP!!!!!\n",Final->name);
            }
            else
            {
                struct team *Semi1 = (struct team *)malloc(sizeof(struct team));
                struct team *Semi2 = (struct team *)malloc(sizeof(struct team));
                struct team *Final= (struct team *)malloc(sizeof(struct team));
                printf("\nSEMI-FINAL 1\n");
                printf("********************************************\n");
                Semi2 = comp_match2(&h5.A[3],&h5.A[5]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                Semi1 = semi(&h5.A[6],&h5.A[4]);
                for (c = 1; c <= 32000; c++)
                    for (d = 1; d <= 32000; d++)
                        {}
                if(strcmp(Semi1->name,"West Indies")==0)
                {
                    Final = final(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                else
                {
                    Final = comp_match2(Semi1,Semi2);
                    for (c = 1; c <= 32000; c++)
                        for (d = 1; d <= 32000; d++)
                            {}
                }
                printf("\n\n\n\n\n%s Wins The CUP!!!!!\n",Final->name);
            }
            
        }
        else
        {
            struct team *Semi1 = (struct team *)malloc(sizeof(struct team));
            struct team *Semi2 = (struct team *)malloc(sizeof(struct team));
            struct team *Final= (struct team *)malloc(sizeof(struct team));
            printf("\nSEMI-FINAL 1\n");
            printf("********************************************\n");
            Semi2 = comp_match2(&h5.A[3],&h5.A[5]);
            for (c = 1; c <= 32000; c++)
                for (d = 1; d <= 32000; d++)
                    {}
            printf("\nSEMI-FINAL 2\n");
            printf("********************************************\n");
            Semi1 = comp_match2(&h5.A[6],&h5.A[4]);
            for (c = 1; c <= 32000; c++)
                for (d = 1; d <= 32000; d++)
                    {}
            printf("\nFINAL \n");
            printf("********************************************\n");
            Final = comp_match2(Semi1,Semi2);
            for (c = 1; c <= 32000; c++)
                for (d = 1; d <= 32000; d++)
                    {}
            printf("\n\n\n\n\n%s Wins The CUP!!!!!\n",Final->name);   
        }

        for (c = 1; c <= 32000; c++)
            for (d = 1; d <= 32000; d++)
                {}
        break;

    case 6:
        printf("\nSouth Africa\n");
        break;

    case 7:
        printf("\nNew Zealand\n");
        break;

    case 8:
        printf("\nSri Lanka\n");
        break;

    default:
        printf("\nChoose the correct number!!!!\n");
        _Exit(0);
        break;


    }

    


    printf("\n");
    printf("              ************************             \n");
    printf("                *                  *             \n");
    printf("                *                  *             \n");
    printf("                *                  *             \n");
    printf("                *    WORLD CUP     *             \n");
    printf("                *     WINNER       *             \n");
    printf("                *                  *             \n");
    printf("                  *              *                 \n");
    printf("                    *          *                    \n");
    printf("                      *      *                     \n");
    printf("                        *  *                       \n");
    printf("                        *  *                       \n");
    printf("                        *  *                        \n");
    printf("                        *  *                        \n");
    printf("                        *  *                        \n");
    printf("                       *    *                      \n");
    printf("                     **********                    \n");

    return 0;
}