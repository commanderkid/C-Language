    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
     
    int HeightFinder(int, double);
    double GradRadConv(double);
    void *printerFunc(int, int*);
    int lineScaner(void);
     
    int main(void)
    {
        int variants;
        scanf("%d", &variants);
        int * masHolder = (int *)malloc(sizeof(int) * variants);
        printerFunc(variants, masHolder);
        return 0;
    }
     
    int *printerFunc(int variants, int *addresOfMass)
    {
        for(int i = 0 ; i < variants; i++)
        {
            *(addresOfMass + i) = lineScaner();
        }
     
        for(int i = 0; i < variants; i++)
        {
            printf("%d ", *(addresOfMass + i));
        }
        return 0;
    }
     
     
    int lineScaner(void) 
    {
        int D;
        double B;
        scanf("%d %lf", &D, &B);
        return HeightFinder(D, B);
    }
     
    int HeightFinder(int D, double B)
    {
        int A = ceil(D * tan(GradRadConv(B)));
        return A;
    }
     
    double GradRadConv(double grad)
    {
        double pi = 3.1415;
        double rad = (grad - 90) * (pi / 180);
        return rad;
    }
