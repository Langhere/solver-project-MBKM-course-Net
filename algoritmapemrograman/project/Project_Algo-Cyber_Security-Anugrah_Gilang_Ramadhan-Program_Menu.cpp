#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void clear_input_buffer()
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
        ;
    // EOF for file, getchar for all input
}

char random_capital()
{
    return 'A' + (rand() % 26);
}

void grade()
{
    int grade;
    bool check = false;
    do
    {
        printf("Insert your algo score : ");
        scanf("%d", &grade);
        clear_input_buffer();
        if (grade >= 0 && grade < 100)
        {
            if (grade >= 90 && grade <= 100)
            {
                puts("Your grade : A");
            }
            else if (grade >= 85 && grade <= 89)
            {
                puts("Your grade : A-");
            }
            else if (grade >= 80 && grade <= 84)
            {
                puts("Your grade : B+");
            }
            else if (grade >= 75 && grade <= 79)
            {
                puts("Your grade : B");
            }
            else if (grade >= 70 && grade <= 74)
            {
                puts("Your grade : B-");
            }
            else if (grade >= 65 && grade <= 69)
            {
                puts("Your grade : C");
            }
            else if (grade >= 50 && grade <= 64)
            {
                puts("Your grade : D");
            }
            else if (grade >= 0 && grade <= 49)
            {
                puts("Your grade : E");
            }
            check = true;
        }
    } while (check == false);
}

void triangle()
{
    int height;
    printf("Inser triangle height : ");
    scanf("%d", &height);
    clear_input_buffer();
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < (2 * i) + 1; j++)
        {
            printf("*");
        }
        puts("");
    }
}

void initialname()
{
    char name[70];
    printf("Insert name [5..50] : ");
    scanf("%[^\n]", name);
    clear_input_buffer();
    printf("%c", random_capital());
    printf("%c", random_capital());
    for (int i = 0; i < strlen(name); i++)
    {
        if (i == 0 || (name[i - 1] == ' ' && name[i] != ' '))
        {
            if (name[i] >= 'a' || name[i] <= 'z')
            {
                name[i] -= 32;
                printf("%c", name[i]);
            }
            else
            {
                printf("%c", name[i]);
            }
        }
    }
    puts("");
}

void looping_number()
{
    int a, b;
    printf("Insert 2 number (a b) : ");
    scanf("%d %d", &a, &b);
    clear_input_buffer();
    int curent = 1;
    for (int i = 1; i <= a; i++)
    {
        printf("%d ", curent);
        curent += b;
    }
    puts("");
}

void menu()
{
    puts("Menu:");
    puts("1. Looping number");
    puts("2. Initial Name");
    puts("3. Triangle");
    puts("4. Grade");
    puts("5. Exit");
    puts("Choose menu [1..5] : ");
}

int main(int argc, char const *argv[])
{
    srand(time(0));
    int choose;
    do
    {
        menu();
        scanf("%d", &choose);
        clear_input_buffer();
        switch (choose)
        {
        case 1:
            looping_number();
            break;
        case 2:
            initialname();
            break;
        case 3:
            triangle();
            break;
        case 4:
            grade();
            break;
        }
    } while (choose != 5);
    puts("Thankyou!");
    return 0;
}
