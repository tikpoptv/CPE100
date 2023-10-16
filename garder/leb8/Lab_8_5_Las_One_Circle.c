#include <stdio.h>

int lastone(int n, int k){
    if(n == 1){
        return 1;
    }
    return (lastone(n-1, k) + k-1) % n + 1;
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", lastone(n, k));
    return 0;
}

/*
Start at the 1st friend.
Count the next k friends in the clockwise direction including the friend you started at. The counting wraps around the circle and may count some friends more than once.
The last friend you counted leaves the circle and loses the game.
If there is still more than one friend in the circle, go back to step 2 starting from the friend immediately clockwise of the friend who just lost and repeat.
Else, the last friend in the circle wins the game.
*/