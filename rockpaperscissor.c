#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int choice,computer;
srand(time(0));
printf("\n\t\t\t\t\t\t=====ROCK-PAPER-SCISSORS=====\n");
    printf("GAME RULES:\nRock (1) beats Scissors (3)\nScissors (3) beats Paper (2)\nPaper (2) beats Rock (1)\nSame choice->Draw");
while(1){
        printf("\n\t\t\t\t\t\t!!LETS START THE GAME!!\n");
        printf("\nfor chooising rock->enter '1';\nfor choosing paper->enter '2';\nfor choosing scissors->enter '3';\nto exit->enter 4;\n");
        scanf("%d",&choice);
          computer=rand()%3+1;//generates a random number 1,2,3
          if (choice!=4){
               switch(choice){
                   case 1:printf("you choose ROCK\n");
                          break;
                   case 2:printf("you choose PAPER\n");
                          break;
                   case 3:printf("you choose SCISSORS\n");
                          break;
               }
                switch(computer){
                   case 1:printf("computer  choose ROCK\n");
                          break;
                   case 2:printf("computer choose PAPER\n");
                          break;
                   case 3:printf("computer choose SCISSORS\n");
                          break;
               }}
               if (choice==computer){
                      printf("\n\t\t\t\t\t\t=====THE GAME IS A DRAW=====\n");
                      printf("play again\n");
               }

                if(choice==1)//rock
               {
                    if(computer==3)
                   {

                      printf("\n\t\t\t\t\t\t=====CONGRATS! YOU WIN=====\n");
                      printf("play again\n");
                    }

                  else
                  {
                    printf("\n\t\t\t\t\t\t=====YOU LOSE=====\n");
                  printf("try again!!\n");
                  }

               }
               else  if(choice==2)//paper
               {
                   if(computer==1)
                    {
                       printf("\n\t\t\t\t\t\t=====CONGRATS! YOU WIN=====\n");
                       printf("play again\n");

                      }
                   else
                    {
                        printf("\n\t\t\t\t\t\t=====YOU LOSE=====\n");
                        printf("try again!!\n");
                    }
               }
               else  if(choice==3)//scissor
               {
                   if(computer==2)
                       {
                          printf("\n\t\t\t\t\t\t=====CONGRATS! YOU WIN=====\n");
                          printf("play again\n");
                       }

                  else
                   {
                         printf("\n\t\t\t\t\t\t=====YOU LOSE=====\n");
                         printf("try again!!\n");
                  }

               }
               else if(choice==4)
               {
                       printf("\n\t\t\t\t\t\t=====GAME ENDED=====");
                       break;
               }
               else
                       printf("enter valid choice\n");
}
return 0;
}
