#include <stdio.h>
#include <stdlib.h>

int get_line_len(char *line)
{
    int i = 1;
    while (line[i] != '\n')
    {
        i++;
    }
    return i;
}

int main(int argc, char *argv[])
{
    FILE *fptr;
    fptr = fopen(argv[1], "r");

    if (fptr == NULL)
    {
        printf("invalid file\n");
        return 0;
    }

    char ch;
    while ((ch = fgetc(fptr)) != EOF)
    {
        printf("0x%x, ", ch);
        if (ch == '\n')
        {
            printf("\n");
        }
    }

    fclose(fptr);
    return 0;
}
