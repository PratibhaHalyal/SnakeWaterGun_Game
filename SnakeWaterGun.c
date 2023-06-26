#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int snakeWaterGun(char you,char computer)
{
//return 1 if you win, -1 if lose and 0 if draw
// condition for draw
    if(you==computer)
    {
        return 0;
    }
//non draw conditions
//snake water and water snake covered
    if(you=='s' && computer=='w')
    {
        return 1;
    }
    else if(you=='w' && computer=='s')
    {
        return -1;
    }

// snake gun and gun snake covered
    if(you=='s' && computer=='g')
    {
        return -1;
    }
    else if(you=='g' && computer=='s')
    {
        return 1;
    }


    if(you=='w' && computer=='g')
    {
        return 1;
    }
    else if (you=='g' && computer=='w')
    {
        return -1;
    }
}

int main()
{
    char you, computer;
    int number;
    srand(time(0));
    number=rand()%100+1;
   // printf("%d\n",number);
    if(number<33){
        computer='s';
    }
    else if(number>33 && number<66){
        computer='w';
    }
    else {
        computer='g';
    }
    printf("Enter 's' for Snake, 'w' for water and 'g' for gun\n");
    scanf("%c",&you);
    int result= snakeWaterGun(you,computer);
    printf("you chose %c and computer chose %c.. ",you , computer);
    if(result==0){
        printf("Game Draw..\n");
    }
    else if(result==1){
        printf("You won the Match\n");
    }
    else{
        printf("You lost the match\n");
    }

    return 0;
}
