#include <stdio.h>

int main()
{
    int month,day,n,count=0,daycount=0,sum;
    scanf("%d",&day);
    scanf("%d",&month);
    if(month>12){
        printf("ERROR");
        return 0;
    }


   // day= 0;
    int jan=31,Feb=28,Mar=31,Apr=30,May=31,Jun=30,Jul=31,Aug=31,Sep=30,Oct=31,Nov=30,Dec=31;
    if(month==1) {n=0;}
    else if(month==2) {n=jan;}
    else if(month==3) {n=jan+Feb;}
    else if(month==4) {n=jan+Feb+Mar;}
    else if(month==5) {n=jan+Feb+Mar+Apr;}
    else if(month==6) {n=jan+Feb+Mar+Apr+May;}
    else if(month==7) {n=jan+Feb+Mar+Apr+May+Jun;}
    else if(month==8) {n=jan+Feb+Mar+Apr+May+Jun+Jul;}
    else if(month==9) {n=jan+Feb+Mar+Apr+May+Jun+Jul+Aug;}
    else if(month==10) {n=jan+Feb+Mar+Apr+May+Jun+Jul+Aug+Sep;}
    else if(month==11) {n=jan+Feb+Mar+Apr+May+Jun+Jul+Aug+Sep+Oct;}
    else if(month==12) {n=jan+Feb+Mar+Apr+May+Jun+Jul+Aug+Sep+Oct+Nov;}
   // else if(month==12) {n=jan+Feb+Mar+Apr+May+Jun+Jul+Aug+Sep+Oct+Nov+Dec;}

    for(int i=1; i<=n;i++){
        count++;
        if(count>7){
            count = 1;
        }
        printf("count = %d\n",count);
       //Jedsadaporn Pannok NO.66070503410
    }
    sum = day + count;

    while(1){
        if(sum>7){
            sum-=7;
        }else{
            break;
        }
    }
   // printf("%d",sum);
    if(sum==1)printf("Thursday");
    if(sum==2)printf("Friday");
    if(sum==3)printf("Saturday");
    if(sum==4)printf("Sunday");
    if(sum==5)printf("Monday");
    if(sum==6)printf("Tuesday");
    if(sum==7)printf("Wednesday");





   /* if(count == 0){
        daycount=day;
    }else{
        for(i=1;)
    }*/






    printArray(day,month);


    return 0;
}
