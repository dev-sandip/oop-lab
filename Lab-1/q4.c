// wap to read name,roll no ,address and phone number of each student in your class using structure . Store the information in file so that you can recover it later . While recovering the information form file ,sort the information alphabetically according to the name of the student.

#include <stdio.h>
#include <string.h>
struct student
{
    char name[50];
    int roll_no;
    char address[50];
    long long int phone_no;
};
int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter the roll no of student %d: ", i + 1);
        scanf("%d", &s[i].roll_no);
        printf("Enter the address of student %d: ", i + 1);
        scanf("%s", s[i].address);
        printf("Enter the phone no of student %d: ", i + 1);
        scanf("%lld", &s[i].phone_no);
    }
    FILE *fptr;
    fptr = fopen("student_info.bin", "w");
    if (fptr == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        fwrite(&s[i], sizeof(struct student), 1, fptr);
    }
    fclose(fptr);
    fptr = fopen("student_info.bin", "r");
    if (fptr == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    struct student temp;
    for (int i = 0; i < n; i++)
    {
        fread(&s[i], sizeof(struct student), 1, fptr);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(s[i].name, s[j].name) > 0)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("Name of student %d: %s\n", i + 1, s[i].name);
        printf("Roll no of student %d: %d\n", i + 1, s[i].roll_no);
        printf("Address of student %d: %s\n", i + 1, s[i].address);
        printf("Phone no of student %d: %lld\n", i + 1, s[i].phone_no);
    }
    fclose(fptr);

    return 0;
}