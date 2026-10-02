#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Password[4]={1,2,3,4};
    int array[4];
    int chanse=0;
    int limit=3;
    int wins=0;
    while (wins<4 && chanse!=limit) {
       wins=0;
       for(int i = 0; i < 4; i++) {
            printf("Enter number %d: ", i + 1);
            scanf("%d", &array[i]);
       }

       for (int x = 0 ; x<4 ; x++) {
            if (Password[x]==array[x]){
                printf("your %d index is right\n", x);
                wins++;
            }else {
                printf("your %d index is wrong\n", x);}
       }
       chanse++;
    }
    if (wins==4 ){
          printf("\n You Win!\n");

    }else{
          printf("\n out of limits\n");}

    return 0;
}
