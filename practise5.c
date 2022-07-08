// https://www.hackerrank.com/challenges/printing-tokens-/problem

#include <stdio.h>

int main()
{
    char str[200];
    gets(str);
    char *token;
    token = strtok(str, " ");
    while (token != NULL)
    {
        printf("%s\n", token);

        token = strtok(NULL, " ");
    }

    return 0;
}

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

//     char *s;
//     s = malloc(1024 * sizeof(char));
//     scanf("%[^\n]", s);
//     s = realloc(s, strlen(s) + 1);
//     //Write your logic to print the tokens of the sentence here.
//     return 0;
// }