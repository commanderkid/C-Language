#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int isPalindrome = 1, iter = 0, ater = 0, preobr = 0;
    char strin[100] = {0}, strinEx[100] = {0}, strinNs[100] = {0};
    printf("Enter a string: ");
    scanf("%[^\n]", strin);
    do{
        if(strin[iter] != ' ' && strin[iter] != '?' && strin[iter] != '.' && strin[iter] != ',')
        {
            if((int)strin[iter] < 97)
            {
                strin[iter] = (int)strin[iter] + 32;
            }
            
            strinEx[ater] = strin[iter];
            ater++;
        }
    iter++;
    }while(strin[iter] != '\0');
    strinEx[ater] = '\0', strinNs[ater] = NULL;
    for(int i = 0; i < ater; i++)
    {
        strinNs[i] = strinEx[ater - 1 - i];
        if (strinNs[i] != strinEx[i])
        {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
        printf("Yes, it is Palindrome!\n");
    else
        printf("No, not a Palindrome!\n");
    return 0;
}
