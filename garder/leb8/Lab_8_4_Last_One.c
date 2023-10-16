#include <stdio.h>

int last_remaining_number(int n[],int size){
    if(size == 1){
        return n[0];
    }
    int temp[size/2];
    for(int i = 0; i < size/2; i++){
        temp[i] = n[i*2+1];
    }
    return last_remaining_number(temp, size/2);
}

int main(){
    int n;
    scanf("%d", &n);
    int input[n];
    for (int i = 0; i < n; i++)
    {
        input[i] = i+1;
    }
    
    printf("%d", last_remaining_number(input,n));
    return 0;
}




/*

You have a list arr of all integers in the range [1, n] sorted in a strictly increasing order. Apply the following algorithm on arr:

nums

. Two players are playing a game with this array: player 1 and player 2.

Starting from left to right, remove the first number and every other number afterward until you reach the end of the list.
Keep repeating the steps again, until a single number remains.
Input: 

First Line : integer n while 1 <=  n <= 10000  #length of array

----------

For example if n equal 10 it mean create array [1,2,3,4,5,6,7,8,9,10] to perform in this question

[1,2,3,4,5,6,7,8,9,10]

[1,2,3​,4,5,6,7,8,9,10]

[2,4,6,8,10]

[4,8]

[8]

Output: 

last remaining number

---- Leet Code ----

*/