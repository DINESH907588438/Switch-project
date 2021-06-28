#include <stdio.h>
int main()
{   int choice;
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    //case-1
    case 1:printf("Food item - pizza ");
    printf("\nPrice - Rs 200");
    break;
    //case-2
    case 2:printf("Food item - Chicken rice ");
    printf("\nPrice - Rs 150");
    break;
    //case-3
    case 3:printf("Food item - Burger ");
    printf("\nPrice - Rs 250 ");
    break;
    //case-4
    case 4:printf("Food item - Noodles ");
    printf("\nPrice - Rs 150");
    break;
    //case-5
    case 5:printf("Food item - Curd rice");
    printf("\nPrice - Rs 75");
    break;
    default:
    printf("Sorry,you picked wrong choice");
    }

}
