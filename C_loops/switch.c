#include<stdio.h>
void main ()
{
    int choice,i;
    do
    {
        printf("\n 1. Kem cho?\n 2. Chinta nai karvani(:\n 3. Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :
                printf("Kem cho?\n");
                break;
            case 2:
                printf("Chinta nai karvani(:\n");
                break;
            case 3:
                exit(0);
                break;
            default:
                printf("please enter valid choice");
        }
        printf("Do you want to run again?");
        scanf("%d",&i);
    }while(i==1);
}
