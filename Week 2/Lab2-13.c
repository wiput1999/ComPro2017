// Computer Programming Laboratory Week 2
// Wiput Pootong (60070090)
  
#include <stdio.h>
  
int main(void) {
    // Just main function here!
  
    int number;
  
    scanf("%d", &number);
  
    printf("%d%79.0s", number / 10000, "");
    printf("%3d%77.0s", number / 1000, "");
    printf("%5d%75.0s", number / 100, "");
    printf("%7d%73.0s", number / 10, "");
    printf("%9d%71.0s", number, "");
  
    return 0;
}