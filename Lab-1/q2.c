// wap to find the position of the character 'C' in the sentence "idea without execution is worthless" using pointers and string.
#include <stdio.h>
int main()
{
    char sentence[] = "idea without execution is worthless";
    char *ptr = sentence;
    int pos = 1;
    while (*ptr != 'c')
    {
        pos++;
        ptr++;
    }
    printf("The position of 'C' in the sentence is %d\n", pos);
    return 0;
}
