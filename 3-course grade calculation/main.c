#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*

        Rules:

    Homework: %9 (3)
    Quiz: %21 (3)
    Midterm: %30 (2)
    Final: %40 (1)


    */

    int H1, H2, H3, Q1, Q2, Q3, M1, M2, F;
    float CourseGrade;

    printf("\n");
    printf("Enter the Grade of Your First Homework: ");
    scanf("%d", &H1);

    printf("\nEnter the Grade of Your Second Homework: ");
    scanf("%d", &H2);

    printf("\nEnter the Grade of Your Third Homework: ");
    scanf("%d", &H3);

    printf("\nEnter the Grade of Your First Quiz: ");
    scanf("%d", &Q1);

    printf("\nEnter the Grade of Your Second Quiz: ");
    scanf("%d", &Q2);

    printf("\nEnter the Grade of Your Third Quiz: ");
    scanf("%d", &Q3);

    printf("\nEnter the Grade of Your First Midterm: ");
    scanf("%d", &M1);

    printf("\nEnter the Grade of Your Second Midterm: ");
    scanf("%d", &M2);

    printf("\nEnter the Grade of Your Final: ");
    scanf("%d", &F);

    CourseGrade=H1*0.03 + H2*0.03 + H3*0.03 + Q1*0.07 + Q2*0.07 + Q3*0.07 + M1*0.15 + M2*0.15 + F*0.40;
    printf("\n\nYour Course Grade: %f", CourseGrade);

    printf("\n");



    return 0;
}
