#include <stdio.h>
#include <stdbool.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        
        int nc = 0;
        while(true){
            nc = 0;
            for(int i = 0; i < (n-1); i++){
                if(arr[i] > arr[i+1]){
                    int temp = arr[i+1];
                    arr[i+1] = arr[i];
                    arr[i] = temp;
                    nc++;
                }
            }
            if(nc == 0){
                break;
            }
        }
        int jolt = 1;
        for(int i = 0; i < (n-1); i++){
            if (arr[i] != arr[i+1]){
                jolt++;
            }
        }
        printf("%d", jolt);
        printf("\n");
    }
    return 0;
}