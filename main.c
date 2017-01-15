#include<stdio.h>
#include "Insertion/insertion.c"
#include "Bubble/bubble.c"

void main() {
    int Limit , List[Limit] , index;
    int choice;

    printf("\nEnter limit of the list\n");
    scanf("%d" , &Limit);
    printf("Enter elements of list\n");
    for (index = 0 ; index < Limit ; index++) {
        scanf("%d" , &List[index]);
    }

     do {
        printf("\n*****MENU*****\n");
        printf("_______________\n");
        printf("1.Insertion sort\n2.Bubble sort\n3.Exit\n");
        printf("Enter option\n");
        scanf("%d" , &choice);
        
        switch(choice) {
            case 1: insertion_sort(List , Limit);
                    main();
            break;

            case 2: bubble_sort(List , Limit);
                    main();
            break;

            case 3: printf("come again\n");
            break;

            default : printf("invalid option\n");
            break;
        }
    } while(choice != 3);
}