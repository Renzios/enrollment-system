#include <stdio.h>

void studentMenu();
void enrollCourses(int studentID);

int main(void)
{
    int answer;

    do
    {
        printf("Main Menu\n");
        printf("1] Student\n");
        printf("2] Faculty\n");
        printf("3] Academic Assistant\n");


        printf("Answer: ");
        scanf("%d", &answer);

        switch (answer)
        {
            case 1:
                studentMenu();
                break;
                
            case 2:
                break;

            case 3:
                break;

            default:
                break;
        }
    }
    while (true);


    return 0;
}

void studentMenu()
{
    int studentID;

    do
    {
        printf("Enter Student ID: ");
        scanf("%d", &studentID);
    }
    while (studentID < 0);

    int answer;

    do
    {
        printf("Choose your transaction:\n");
        printf("1] Enroll Courses\n");
        printf("2] Print EAF\n");
        printf("3] Exit to Return to Main Menu\n");


        printf("Answer: ");
        scanf("%d", &answer);

        switch (answer)
        {
            case 1:
                enrollCourses(studentID);
                break;

            case 2:
                break;

            case 3:
                break;

            default:
                break;
        }
    }
    while (transaction != 3);
}

void enrollCourses(int studentID)
{
    int answer;

    do
    {
        printf("Enroll Courses\n");
        printf("1] Add Courses\n");
        printf("2] Edit Courses\n");
        printf("3] Delete Courses\n");


        printf("Answer: ");
        scanf("%d", &answer);

        switch (answer)
        {
            case 1:
                break;

            case 2:
                break;

            case 3:
                break;

            default:
                break;
        }
    }
    while (transaction <= 1 || transaction >= 3);
}