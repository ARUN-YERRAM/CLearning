#include <stdio.h>
void towerOfHanoi(int n, char from_peg, char to_peg, char aux_peg) {
    if (n == 1) {
        printf("Move disk 1 from peg %c to peg %c\n", from_peg, to_peg);
        return;
    }
    towerOfHanoi(n - 1, from_peg, aux_peg, to_peg);
    printf("Move disk %d from peg %c to peg %c\n", n, from_peg, to_peg);
    towerOfHanoi(n - 1, aux_peg, to_peg, from_peg);
}
int main() {
    int n = 3; // Number of discs
    towerOfHanoi(n, 'A', 'C', 'B');  // A, B and C are names of rods
    return 0;
}
//In this code, the function towerOfHanoi uses recursion to solve the problem.
 //If there is only one disc, we simply print the move. Otherwise, we move the top n-1 discs to the auxiliary peg,
 // then move the nth disc to the target peg, and finally move the n-1 discs from the auxiliary peg to the target peg.