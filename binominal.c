#include <stdio.h>
#include <stdlib.h>

int main(void){
    //system("chcp 1251>nul");
    int C, k, n;
    printf("Enter number n for eauquation: ");
    scanf("%d", &n);
    k = 0;
    C = 1;
    printf("|");
    do {
        printf("%d|", C);
        C = C * (n-k)/(k+1);
        k++;
    } while(n>=k);
    
    //system("pause>nul");
    return 0;
}
