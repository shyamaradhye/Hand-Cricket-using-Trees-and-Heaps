# Hand-Cricket-using-Trees-and-Heaps

****************Hand-Cricket Tournament using C by Shyam Aradhye***********************

-You can choose any team to play with from-
    1.Pakistan
    2.Australia
    3.England
    4.WestIndies
    5.SouthAfrica
    6.NewZealand
    7.SriLanka
    
***IN-GAME RULES***    
-Every match consists of 6-balls per innings.
-You have to choose 0 or 1 for heads or tails respectively and if you win, you get to choose whether you want to bowl or bat.
-You can choose a number from 0 to 6.
-Choosing any number out of bounds, will result to termination of program.
-If the computer chooses the same number, you are Out!
-Otherwise, runs will be added
-same rule stands for when you are bowling.
-After playing all the matches, the computer will play the remaining matches on its own and display the results.
-At the end, a points table will be printed to display the winner at the top!
-the table is made via the concept of Binary Search Tree.


Data structures used for project - Binary Search Tree, Winner Heap
-By using the structure team, every Team keeps track of its points,NRR,etc. while playing the game.
-After every match is played, all the Teams in form of nodes are added onto to the tree.
-The reversal of the inorder traversal (Right-Root-Left) prints the Points Table.
-Top 4 teams from the Points Table are imprinted onto a winner tree(Heap) with 7 nodes.
                          
                                WINNER
                               /      \ 
                              /        \
                     SEMI 1 WINNER     SEMI 2 WINNER
                     /        \            /     \
                    /          \          /       \
                 TEAM 1       TEAM 2   TEAM 3    TEAM 4
-following matches in bottom up fashion, the winner is decided at the topmost node.

Files included-
-cricket.h
-cricket.c
-bst.h
-bst.c
-main.c
-Makefile
-winner_tree.c
-winner_tree.h

Installation-
-go to project directory
-run "make" command in terminal to compile all files.
-run the command "./F" to play the game on terminal.


**************************************THANKYOU********************************************

