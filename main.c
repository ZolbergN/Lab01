#include <stdio.h>
#include <string.h>
#define FILE1NAME "FILE1.txt"
#define FILE2NAME "FILE2.txt"
#define STR_SIZE 256
int a=13;
int main()
{
    char str1[STR_SIZE];
    char str2[STR_SIZE];
    FILE* FILE1 = NULL, *FILE2 = NULL;
    FILE1 = fopen(FILE1NAME, "rt");
    FILE2 = fopen(FILE2NAME, "rt");
    if (FILE1 && FILE2) {
 
        while ((!feof(FILE1)) && (!feof(FILE2))) {
            fgets(str1, STR_SIZE, FILE1);
            fgets(str2, STR_SIZE, FILE2);
            if (strcmp(str1, str2)) {
                printf("Различаются по строке %d\n", a);
            }
            a++;
        }
 
        fclose(FILE1);
        FILE1 = NULL;
        fclose(FILE2);
        FILE2 = NULL;
    }
    if (FILE1) fclose(FILE1);
    if (FILE2) fclose(FILE2);
}
