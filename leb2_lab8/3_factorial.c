#include <stdio.h>

int factorial(int form, int to){

    if (form == to)
    {
        return form;
    }else{
        return to * factorial(form , to-1);
    }
    

}

int main(void) {
    int begin,end;
    scanf("%d\n%d",&begin,&end);
    printf("factorial form %d to %d is %d", begin, end, factorial(begin,end));
}