#include <stdio.h>

int Summation(int form, int to){
    if (form == to)
    {
        return form;
    }else{
        return to + Summation(form , to-1);
    }
}

int main(void) {
    int begin,end;
    scanf("%d\n%d",&begin,&end);
    printf("summation form %d to %d is %d", begin, end, Summation(begin,end));
}