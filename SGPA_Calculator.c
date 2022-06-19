#include <stdio.h>
int main()
{   int courses, j = 0, temp1, k = 0, credit_total = 0, cred_grade = 0;
    printf("\n=========== SGPA Calculator ===========\n\n\nEnter the number of credit courses: ");
    scanf("%d", &temp1);
    if (temp1 > 0 && temp1 <= 10) {
        courses = temp1;
        int credits[courses], marks[courses], grade[courses], credgrade[courses];
        for (j = 0; j < courses; j++){
            printf("\nEnter the number of credits for course %d: ", j+1);
            scanf("%d", &credits[j]);
            printf("Enter the marks (out of 100) for course %d: ", j+1);
            scanf("%d", &marks[j]);
            if (marks[j] >= 90) {
                grade[j] = 10;
            }
            else if (marks[j] > 80) {
                grade[j] = 9;
            }
            else if (marks[j] > 75) {
                grade[j] = 8;
            }
            else if (marks[j] > 70) {
                grade[j] = 7;
            }
            else if (marks[j] > 65) {
                grade[j] = 6;
            }
            else if (marks[j] > 60) {
                grade[j] = 5;
            }
            else if (marks[j] > 50) {
                grade[j] = 4;
            }
            else {
                grade[j] = 0;
            }
        }
        for (j = 0; j < courses; j++){
                credit_total += credits[j];
                credgrade[j] = credits[j] * grade[j];
                cred_grade += credgrade[j];
            }
        float SGPA = (float)cred_grade / (float)credit_total;
        printf("\nYour SGPA is %.2f", SGPA);
    }
    else {
        printf("\nEnter a valid number of courses");
        }
    printf("\n\nPress any key to exit...");
    getch();
    return 0;
    }
