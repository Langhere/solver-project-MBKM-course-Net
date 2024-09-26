#include <stdio.h>

int main(int argc, char const *argv[])
{
    puts("Welcome to Course-Net");
    char nim[20];
    char fullname[40];
    int age;
    long gpatarget;

    printf("Enter your nim : ");
    scanf("%19s", nim); 
    getchar(); 

    printf("Enter your full name : ");
    fgets(fullname, sizeof(fullname), stdin);
    fullname[strcspn(fullname, "\n")] = 0; 

    printf("Enter your age : ");
    scanf("%d", &age);
    getchar(); 

    printf("Enter your GPA target : ");
    scanf("%ld", &gpatarget); 
    getchar(); 

    puts("Below is your data:");
    printf("NIM: %s\n", nim);
    printf("Full Name: %s\n", fullname);
    printf("Age: %d\n", age);
    printf("GPA Target: %ld\n", gpatarget);

    return 0;
}
