#include <stdio.h>

int main()
{
    printf("Enter three three - digit numbers \n");
    int array[3][3];
    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d",&array[i][j]);
        }
    }
	
    for (int i = 0; i < 3; i++) {
        printf("\n");
        for (int j = 0; j < 3 - i; j++) {
            printf("%d",*(&array[i][j]));
        }
    }
}   
