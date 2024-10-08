#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
int main()
{
    printf("hello word!\n");
    printf("%ld\n", sizeof(int));
    printf("%ld\n", sizeof(float));
    printf("%ld\n", sizeof(double));
    printf("%ld\n", sizeof(long));
    printf("%ld\n", sizeof(long long));
    return 0;
}
*/
/*
extern int add(int a, int b);
extern int g_table;
int main()
{
    int a = 0;
    printf("%d\n", ~a);
    return 0;
}
*/

/*
int add(int a, int b)
{
    return a + b;
}

int main()
{
    char arr1[] = "welcome to c language";
    char arr2[] = "#####################";
    int left = 0, right = sizeof(arr1) / sizeof(arr1[0]);
    while (left < right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        left++;
        right--;
        printf("%s\n", arr1);
    }
    return 0;
}
*/

int main()
{
    int num = 0;
    int answer = rand() % 100;
    while (scanf("%d", &num) != EOF)
    {
        if (num == answer)
        {
            printf("Congratulations! You are right!\n");
            break;
        }
        else if (num > answer)
        {
            printf("Too big!\n");
        }
        else
        {
            printf("Too small!\n");
        }
    }
    return 0;
}