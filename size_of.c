
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("chcp 1251>null");
    printf("Размер в байтах, для разных типов данных\n");
    printf("Тип данных int:\t%d\n",sizeof(int));
    printf("Тип данных char:\t%d\n",sizeof(char));
    printf("Символьный литерал\'А\':\t%c\n",sizeof('А'));
    printf("Тип данных float:\t%d\n",sizeof(float));
    printf("Тип данных double:\t%d\n",sizeof(double));
    printf("Текст\"мой текст\":\t%d\n",sizeof("мой текст"));
    system("pause>null");
return 0;
}
