#include <stdio.h>

void menu()
{
    printf("#################\n");
    printf("1. Start game\n");
    printf("2. Exit game\n");
    printf("#################\n");
}
int main()
{
    int input = 0;
    do
    {
        menu();
        scanf("%d", &input);
        printf("Please enter your choice: ");
        switch (input)
        {
        case 1:
            printf("Start game\n");
            break;
        case 2:
            printf("Exit game\n");
            break;
        default:
            printf("Invalid input\n");
            break;
        }
    } while (input);
    return 0;
}