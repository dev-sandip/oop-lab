// store  and retrieve the name of the students and obtained marks in c programming in 1st semester using structure

#include <stdio.h>

struct marks
{
    char name[50];
    int c_marks;
};
int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct marks student[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", student[i].name);
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &student[i].c_marks);
    }
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("Name of student %d: %s\n", i + 1, student[i].name);
        printf("Marks of student %d: %d\n", i + 1, student[i].c_marks);
    }
    return 0;
}