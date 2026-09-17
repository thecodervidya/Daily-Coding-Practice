#include <stdio.h> 
 #include<conio.h>
 
int main() { 
    int arr[5] = {10, 20, 30, 40, 50}; 
    int max = arr[0]; 
 
    for (int i = 1; i < 5; i++) { 
        if (arr[i] > max) { 
            max = arr[i]; 
        } 
    } 
 
    printf("largest number is=%d", max); 
    return 0; 
} 