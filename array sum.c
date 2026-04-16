#include <stdio.h>

int main()
 {
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    int i;
    printf("the array elements are ");
    for(i = 0; i < 5; i++) 
	{
        printf("%d", arr[i]);
        if(i < 4) printf(", ");
    }
    printf("\n");

    for(i = 0; i < 5; i++) {
        sum += arr[i];
    }
    printf("sum of array elemets are %d\n", sum);
    return 0;
}
