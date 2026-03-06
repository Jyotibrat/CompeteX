#include <stdio.h>

int main() {
	// your code goes here
    int a, b;
    scanf("%d %d", &a, &b);
    if(a>b)
        printf("Alice");
    else if(b>a)
        printf("Bob");
    else
        printf("Draw");
}
