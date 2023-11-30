#include <stdio.h>

int convcase(int ch) 
{
    const int diff = 'a' - 'A';
    if (ch >= 'A' && ch <= 'Z')
        return ch + diff;
    else if (ch >= 'a' && ch <= 'z')
        return ch - diff;
    else
        return ch;
}

void convstring(char* str) 
{
    int i = 0;
    while (str[i] != '\0') 
    {
        str[i] = convcase(str[i]);
        i++;
    }
}

int main(void) 
{
    char inputstring[100];

    printf("Input> ");
    fgets(inputstring, sizeof(inputstring), stdin);

    convstring(inputstring);

    printf("Output> %s", inputstring);

    return 0;
}
