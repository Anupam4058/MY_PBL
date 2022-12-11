/*                       Rock, Paper, Scissors Details
This code asks the user to enter  1 , 2 , or 3. Each number stands for a different item; 
Rock, Paper, or Scissors. The code has a random function in it that randomly generates 1, 2 , or 3.
The random function generates an answer for the computer. Then if statements determine who wins the round.
The if statements keep track of the score. Every time the player scores Pscore increases by 1 and every time 
the computer scores Cscore increases by one. The whole system is contained within a for loop. 
The floor loop runs the program five times. After it runs the code five times another set of if statements
determine who won based on the score that was kept during the for loop.
If it's a draw the else statement will print "No winner it's a draw!".
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int R=1;
    int P=2;
    int S=3;
    int i;
    int Pscore =0;
    int Cscore =0;
    int choice;
    srand(time(NULL));
    printf("Rock=1 , Paper= 2, and Scissors= 3\n");

    for(i=0;i<5;i++){
        printf("Enter your choice:");
        scanf("%d",&choice);
            int computer=rand()%3+1;
            if(choice==1){
                if(computer==1){
                    printf("Draw\n");
                }
                if(computer==2){
                    printf("Computer Wins!\n");
                    Cscore= Cscore + 1;
                }
                if(computer==3){
                    printf("Player Wins\n");
                    Pscore = Pscore + 1;
                }
            }
              else  if(choice==2){
                    if(computer==2){
                        printf("Draw\n");
                    }
                    if(computer==3){
                        printf("Player Wins!\n");
                        Pscore = Pscore + 1;
                    }
                    if(computer==1){
                        printf("Computer Wins!\n");
                        Cscore= Cscore + 1;
                    }
                }
                else if(choice==3){
                    if(computer==3){
                        printf("Draw\n");
                    }
                    if(computer==2){
                        printf("Computer Wins!\n");
                        Cscore= Cscore + 1;
                    }
                    if(computer==1){
                        printf("Player Wins!\n");
                        Pscore = Pscore + 1;

                    }
                }
        else{
            printf("Wrong Answer\n");
        }

            }
            if(Cscore > Pscore ){
                printf("Computer wins %d to %d\n",Cscore,Pscore);
            }
            else if(Cscore < Pscore ){
                printf("Player wins %d to %d\n",Pscore,Cscore);
            }
           else if(Cscore = Pscore ){
                printf("No winner it is a draw!\n");
            }



    return 0;
}

