#include <stdio.h>
#include <stdlib.h>

int main()
{
    // creating pointer variable of type FILE
    FILE *f1;
    FILE *f2;
    char ch;

    /*
        it's creating a FILE structure in memory containing
        all the information about the file along with a pointer
        that points to the first character in the buffer in memory
        which is linked to the file in the disk.
        And returns pointer to FILE structure.
    */
    f1 = fopen("file1.txt", "r");
    f2 = fopen("file2.txt", "w");

    if (f1 == NULL)
    {
        printf("file1.txt not found!\n");
        fclose(f2);
        exit(1);
    }

    // loop indefinitely
    while (1)
    {
        ch = fgetc(f1); // get the first

        if (ch == EOF)
        {
            break;
        }

        fputc(ch, f2);
    }

    fclose(f1);
    fclose(f2);
    return 0;
}