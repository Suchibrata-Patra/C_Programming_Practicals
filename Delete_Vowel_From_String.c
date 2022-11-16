#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[100],final[100];
    int i=0, j=0, len = 0;
    system("clear");
    printf("Enter a string : ");
    scanf("%[^\n]s", str);

    len = strlen(str);

 for (i = 0; i < len;)
 {
     if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
         str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') 
    {
        i++;
    }
    else{
        final[j]=str[i];
        i++;
        j++;
    }
 }
   puts(final);
   return 0;
}
