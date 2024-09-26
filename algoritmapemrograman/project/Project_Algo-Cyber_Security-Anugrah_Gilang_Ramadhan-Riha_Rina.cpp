#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int t;
    char word1[5];
    char word2[5];
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%s", word1);
        scanf("%s", word2);
        char first_name[5] = {word1[0], word1[1], word2[0], word2[1], '\0'};
        char second_name[5] = {word1[2], word1[3], word2[2], word2[3], '\0'};
        printf("Case #%d: %s %s\n", i + 1, first_name, second_name);
    }
    return 0;
}
