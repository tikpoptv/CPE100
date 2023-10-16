#include <stdio.h>
//using recursive function
//problem with out using josepus solution

int main(){
    int n, k, i, j, count = 0, index = 0;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(i = 0; i < n; i++){
        arr[i] = 1;
    }
    while(count < n-1){
        for(j = 0; j < k; j++){
            if(arr[index] == 0){
                j--;
            }
            index++;
            if(index == n){
                index = 0;
            }
        }
        arr[index] = 0;
        count++;
    }
    for(i = 0; i < n; i++){
        if(arr[i] == 1){
            printf("%d", i+1);
        }
    }
    return 0;
}




/*

There are n friends that are playing a game. The friends are sitting in a circle and are numbered from 1 to n in clockwise order. More formally, moving clockwise from the ith friend brings you to the (i+1)th friend for 1 <= i < n, and moving clockwise from the nthfriend brings you to the 1st friend.

The rules of the game are as follows:

Start at the 1st friend.
Count the next k friends in the clockwise direction including the friend you started at. The counting wraps around the circle and may count some friends more than once.
The last friend you counted leaves the circle and loses the game.
If there is still more than one friend in the circle, go back to step 2 starting from the friend immediately clockwise of the friend who just lost and repeat.
Else, the last friend in the circle wins the game.
Input: 

First Line : integer n while 0 <=  n <= 10000  # Total Player

Second Line : integer k while 0 <  k <= 10000 # Count number

Output: 

The winner (last one)
*/