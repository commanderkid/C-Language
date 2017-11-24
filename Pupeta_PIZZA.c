/*Write a C Program that will ask for number of neighbour from the user and will print the mood
of 'Pupeta' accordingly. Please note that if the input is invalid, that is < 0 or > 8, then your
program must display error message "Invalid number of neighbours".*/

#include <stdio.h>

int main(void){
    signed int neighbours;
    printf("The amazing creature 'Pupeta' lives in a funny world\n"
            "where is could be surrounded by at most 8 neighbours.\n"
            "The behaviour of our hero 'Pupeta' depends on how many\n"
            "neighbours he has at any moment.\n"
            "You need to lookup for his present behaviour before you could\n"
            "go and deliver his favorite Pizza that he would\n"
            "often order to your famous Pizza shop.\n");
    printf("                                                   \n");        
    printf("---------------------------------------------------\n");
    printf(" Please ENTER number of Pupeta neighbours: (0 - 8)\n");
    printf("---------------------------------------------------\n");
    printf("                                                   \n");
    scanf(" %d", &neighbours);
    printf("                                                   \n");
    printf("---------------------------------------------------\n");

    if (neighbours==0){
        printf("number of neighbours: %d. Behaviour of 'Pupeta': Sad and will force you to listen to his story,\n"
                "will make you late.\n", neighbours);
    }
    else if (neighbours==1){
        printf("number of neighbours: %d. He will ask you to deliver half of the pizza to his only neighbor, \n"
                "you may be late.\n", neighbours);
    }
    else if ((neighbours>=2) && (neighbours<=5)){
        printf("number of neighbours: %d. Behaviour of 'Pupeta': Sad and will force you to listen to his story,\n"
                "will make you late.\n", neighbours);
    }
    else if (neighbours==7){
        printf("number of neighbours: %d. He will be making great drink for his neighbors and will invite you\n"
                "to taste.But will not give you tip.\n", neighbours);
    }
    else if ((neighbours==6) || (neighbours==8)){
        printf("number of neighbours: %d. Too angry and furious, deliver the pizza and leave ASAP.\n", neighbours);
    }
    else{
        printf("Invalid number of neighbours");
    }
    return 0;
}