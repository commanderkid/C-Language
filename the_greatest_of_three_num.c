#include <stdio.h>

int main(void){
    int a, b, c, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Your numbers are: \na = %d\nb = %d\nc = %d\n", a, b, c);
    printf("Let's calculate the maximum of three: \n");
    
    if ((a>=b) && (a>=c)){
        max = a;
    }
    else if ((b>=a) && (b>=c)){
        max = b;
    }
    else{
        max = c;
    }
    
    printf("The greatest of three is %d\n", max);
    return 0;
    }
    
    printf("The greatest of three is %d\n", max);
    return 0;
    }
