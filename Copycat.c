#include<stdio.h>

int main()
{
    int i;
    char a[100];  //initialize 1 dimensional array
    printf("You:");
    for (i=0;i<100;i++)
    {
        scanf("%c",&a[i]);    //take every single input and put it in a[i]
        if (a[i]=='\n') break;   //if enter is pressed loop will break
    }
    printf("Computer:");
    for (i=0;i<100;i++)
    {
        printf("%c",a[i]);      //show all input taken
        if (a[i]=='\n') break;  //again loop break
    }
    return main();              // the whole code will be looped so user can give as much input as will
}
