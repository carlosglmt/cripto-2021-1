
/* Author: Carlos Gamaliel Morales Téllez
 * Date: Sep 20, 2020
 * Compiler: GCC (Apple clang version 12.0.0)
 * Description: This program takes numbers from stdin, 
 * adds them up and prints the result in standard output. 
 * Usage: ./00-prueba-inicial < STDIN_FILE*/

#include <stdio.h>

int
main(void) {

    double number, sum = 0.0f;
    
    /* As long as there is an entry in stdin 
     * and this input is a number add this. */
    
    while(scanf("%lf", &number) && !feof(stdin)) sum += number;
    
    /* If the result number is an integer, print it 
     * without zeros */

    if (sum == (int) sum)
        printf("%i\n", (int)sum);

    /* Else print it as a normal float number */
    else {
        
        char buffer[64] = {0};
        sprintf(buffer, "%lf", sum);
        int current_position = 63; 

        while (current_position >= 0) {
            if (buffer[current_position] == '0' || buffer[current_position] == 0) {
                buffer[current_position] = '\0';
            } else {
                break;
            }
            current_position--;
        }

        printf("%s\n", buffer);
    }
    return 0;  

}