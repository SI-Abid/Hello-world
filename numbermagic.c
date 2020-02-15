#include<stdio.h>
#include<math.h>
int main()
{
    printf("Choose a number from 1 to 9\n");
    getch();
    printf("Take the same number from your friend and add them\n");
    getch();
    int a=rand()%7;
    printf("I gave you %d now \n make sum and then make it half\n",2*a);
    getch();
    printf("You have %d left\n",a);
    return 0;
}
