#include <stdio.h>
#include <stdlib.h>

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
    char username[20];
    int roll;
    int class;
    int year;
    int tmarks;

    struct Student input;

    printf("Enter name: ");
    fgets(username, sizeof(username), stdin);

    printf("Enter roll: ");
    scanf("%d", &roll);

    printf("Enter class: ");
    scanf("%d", &class);

    printf("Enter year: ");
    scanf("%d", &year);

    printf("Enter tmarks: ");
    scanf("%d", &tmarks);

    struct Student user = {
        username,
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

    fwrite(&user, sizeof(struct Student), 1, studentFile);

    if (fwrite != 0)
    {
        printf("Contents to file written successfully !\n");
    }
    else
    {

        printf("Error writing file !\n");
    }

    fclose(studentFile);

    FILE *readSF;
    readSF = fopen("student.txt", "r");

    if (studentFile == NULL)
    {
        fprintf(stderr, "\nError to open the file\n");
        exit(1);
    }

    // read file contents till end of file
    while (fread(&input, sizeof(struct Student), 1, studentFile))
        printf("name = %s roll = %d class = %d year = %d tmarks = %d\n", input.name,
               input.roll, input.class, input.year, input.tmarks);

    // close file
    fclose(readSF);

    return 0;
}