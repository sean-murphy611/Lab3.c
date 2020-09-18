// Sean Murphy spm6407@psu.edu
// Aidan Mayo ajm8132@psu.edu
// Yong Lin Kwang yqk5211@psu.edu
// Section 1
//Breakout 12




#include<stdio.h>
long int addNumbers(int n);
char string();

int main() {
    int n;
    char chr = 's';
    printf("Enter an int: ");
    scanf("%d",&n);
    printf("sum is %d %ld", n, addNumbers(n));
    printf("\nEnter a string: ");
    scanf("%s", &s);
    printf("%s", char );
    return 0;
}

long int addNumbers(int n) {
    if (n>=1)
        return n+addNumbers(n-1);
    else
        return 1;
}

char string(s,n){
  if (n<=1)
    return s;
  else
    return s + addNumbers(n-1);
}
