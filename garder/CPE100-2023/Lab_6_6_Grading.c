#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int input[n][3];
    int grade[4];
    for(int i = 0; i < n; i++){
      //  printf("1");
        for(int j = 0; j < 3; j++){
            scanf("%d", &input[i][j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
       // printf("2");
        scanf("%d", &grade[i]);
    }

    for (int i = 0; i < n; i++)
    {
       // printf("3");
        int count = 0;
        count = input[i][0]+input[i][1]+input[i][2];
        if (count >= grade[0])
        {
            printf("A\n");
        }else if (count >= grade[1])
        {
            printf("B\n");
        }else if (count >= grade[2]){
            printf("C\n");
        }else if (count >= grade[3]){
            printf("D\n");
        }else{
            printf("F\n");
        }
        
        
        
    }
    
    


    
    
    return 0;
}