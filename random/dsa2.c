#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "stddef.h"
#define SIZE 500

int arr[SIZE]={};
int cnt=0;

int getr()
{
    return ((size_t)(rand() * rand())%9000)+1000; //get a 4 digit number
}

void gen_id()
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        if(arr[i])
            continue;
        else
        {
            arr[i]=getr();
            cnt++;
            printf("Registration done! ID is: %d\n", arr[i]);
            break;
        }
    }
}

void src_id()
{
    int q, i;
    printf("Enter the ID to be searched: ");
    scanf("%d", &q);
    for(i=0;i<SIZE;i++)
    {
        if(arr[i]==q)
        {
            printf("ID found at location %d\n", i);
            return;
        }
    }
    puts("ID not found!");
}

void rmv_id()
{
    int q, i;
    printf("Enter the ID to withdraw registration: ");
    scanf("%d", &q);
    for(i=0; i<SIZE; i++)
    {
        if(arr[i]==q)
        {
            arr[i]=0;
            cnt--;
            break;
        }
    }
    puts("Registration withdrawal is done, ID is removed!");
}

void display()
{
    int i, c=cnt;
    printf("Number of registered student for the program = %d\n", cnt);
    printf("Registered IDs are: ");
    for(i=0;c;i++)
    {
        if(arr[i]!=0)
        {
            printf("%d", arr[i]);
            c--;
        }
        printf((c>0)?", ":"\n");
    }
}

int main()
{
    srand(time(0));
    int choice;
    while(1)
    {
        puts("Please select-\n1.Reg ID\n2.Src ID\n3.Withdraw ID\n4.Display\n5.Exit");  //edit this line
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            gen_id();
            break;
        case 2:
            src_id();
            break;
        case 3:
            rmv_id();
            break;
        case 4:
            display();
            break;
        case 5: exit(1);
        default:
            break;
        }
    }
}