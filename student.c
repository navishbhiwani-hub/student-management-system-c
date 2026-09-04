#include <stdio.h>

int main() {
    int choice;
    char name[50];
    int roll;
    float marks;

    while(1) {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Student\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Name: ");
                scanf("%s", name);

                printf("Enter Roll Number: ");
                scanf("%d", &roll);

                printf("Enter Marks: ");
                scanf("%f", &marks);

                printf("\nStudent Added Successfully!\n");
                break;

            case 2:
                printf("\n--- Student Details ---\n");
                printf("Name : %s\n", name);
                printf("Roll No : %d\n", roll);
                printf("Marks : %.2f\n", marks);

                if(marks >= 40)
                    printf("Result : PASS\n");
                else
                    printf("Result : FAIL\n");
                break;

            case 3:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
