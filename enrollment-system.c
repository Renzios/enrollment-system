#include <stdio.h>

int main(void)
{
    int user;

    do
    {
        printf("Main Menu\n");
        printf("1] Student\n");
        printf("2] Faculty\n");
        printf("3] Academic Assistant\n");
        printf("Answer: ");
        scanf("%d", &user);

        switch (user)
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
    while (true);


    return 0;
}