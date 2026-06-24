#include <stdio.h>

int main()
{

    int choice;
    int hour, minute, total_minutes;

    do
    {
        printf("\n===============================\n");
        printf("       Time Calculator\n");
        printf("===============================\n");
        printf("1. Total Hours & Minutes to minutes\n");
        printf("2. Total Minutes to Hours & Minutes\n");
        printf("3. Exit\n");
        printf("===============================\n");

        printf("Enter your choice 1-3: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\n--- Calculate Total Minute ---\n\n");
            printf("Enter Hours : ");
            scanf("%d", &hour);
            printf("Enter Minute : ");
            scanf("%d", &minute);

            total_minutes = (hour * 60) + minute;
            printf("\n--------- Result ---------\n");
            printf("Total Minutes : %d mins\n", total_minutes);
        }

        else if (choice == 2)
        {
            printf("\n--- Calculate Total Hours ---\n\n");
            printf("Enter Total Minutes: ");
            scanf("%d", &total_minutes);

            hour = total_minutes / 60;
            minute = total_minutes % 60;
            printf("\n----------- Result -----------\n");
            printf("Total Time : %d hour %d minute\n", hour, minute);
        }

        else if (choice == 3)
        {
            printf("\nHave A Nice Day, Goodbye!\n");
        }

        else
        {
            printf("\nInvalid choice! Please enter a number between 1 and 3.\n");
        }

    } while (choice != 3);

    return 0;
}
