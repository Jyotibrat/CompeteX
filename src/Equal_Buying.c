#include <stdbool.h>
#include <stdio.h>

int main() {
	// your code goes here
    
    int n;
    scanf("%d", &n);

    if(n % 3 == 0)
        printf("Yes");
    else
        printf("No");
    
    return 0;
}