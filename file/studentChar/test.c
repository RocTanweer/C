#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #define NUM_STUDENT 10

typedef struct Student
{
    char *name;
    int roll;
    int class;
    int year;
    int tmarks;
} Student;

// Student students[NUM_STUDENT];

int main()
{
    char name[20];
    int roll;
    int class;
    int year;
    int tmarks;

    char Buffer_out[1000], Buffer_in[1000];

    printf("Enter name: ");
    fgets(name, 20, stdin);

    printf("Enter roll: ");
    scanf("%d", &roll);

    printf("Enter class: ");
    scanf("%d", &class);

    printf("Enter year: ");
    scanf("%d", &year);

    printf("Enter tmarks: ");
    scanf("%d", &tmarks);

    struct Student user = {
        name,
        roll,
        class,
        year,
        tmarks};

    // students[0] = user;

    FILE *studentFile;

    studentFile = fopen("student.txt", "w");

    if (studentFile == NULL)
    {
        fprintf(stderr, "\nError to open the file\n");
        exit(1);
    }

    sprintf(Buffer_out, "username: %sroll: %d\nclass: %d\nyear: %d\ntmarks: %d", user.name, user.roll, user.class, user.year, user.tmarks);

    size_t byte_wrote = fwrite(Buffer_out, sizeof(char), strlen(Buffer_out), studentFile);

    if (byte_wrote != strlen(Buffer_out))
    {
        printf("Error writing to file\n");
        exit(3);
    }

    printf("Contents to file written successfully !\n");

    fclose(studentFile);

    FILE *readSF;
    readSF = fopen("student.txt", "r");

    if (readSF == NULL)
    {
        fprintf(stderr, "\nError to open the file\n");
        exit(1);
    }

    // read file contents till end of file

    fread(Buffer_in, sizeof(char), strlen(Buffer_out), readSF);

    printf("%s\n", Buffer_in);

    // close file
    fclose(readSF);

    return 0;
}