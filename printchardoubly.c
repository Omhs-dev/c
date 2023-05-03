#include <stdio.h>

//print each character of the string with first character as a variable i 
//and the second as a variable J
int main() {
    char *s;
    int i;
    int j;
    
    s = "abcdefghiklm";
    i = 0;
    j = 1;
    while (s[i])
    {
        while (s[i] != NULL && s[j])
        {
            printf("%c\n", s[i]);
            i = i + 1;
            printf("%c\n", s[j]);
            j = j + 1;
            i++;
            j++;
        }
    }

    return 0;
}
