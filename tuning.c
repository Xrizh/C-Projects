#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//AFB+8HC-4
//-------------
//AFB tighten 8
//HC loosen 4
//tune_instructions[j] == 'A' || tune_instructions[j] == 'B' || tune_instructions[j] == 'C' || tune_instructions[j] == 'D' || tune_instructions[j] == 'E' || tune_instructions[j] == 'F' || tune_instructions[j] == 'G' || tune_instructions[j] == 'H' || tune_instructions[j] == 'I' || tune_instructions[j] == 'J' || tune_instructions[j] == 'K' || tune_instructions[j] == 'L' || tune_instructions[j] == 'M' || tune_instructions[j] == 'N' || tune_instructions[j] == 'O' || tune_instructions[j] == 'P' || tune_instructions[j] == 'Q' || tune_instructions[j] == 'R' || tune_instructions[j] == 'S' || tune_instructions[j] == 'T'

int main(void)
{
    string tune_instructions = get_string("");
    int current = 0, k = 0, m = 0;
    for (int i = 0; i < strlen(tune_instructions); i++)
    {
        int j = i;
        
        if (tune_instructions[j] == '+' || tune_instructions[j] == '-'|| tune_instructions[j] == 'A' || tune_instructions[j] == '\0' || tune_instructions[j] == 'B' || tune_instructions[j] == 'C' || tune_instructions[j] == 'D' || tune_instructions[j] == 'E' || tune_instructions[j] == 'F' || tune_instructions[j] == 'G' || tune_instructions[j] == 'H' || tune_instructions[j] == 'I' || tune_instructions[j] == 'J' || tune_instructions[j] == 'K' || tune_instructions[j] == 'L' || tune_instructions[j] == 'M' || tune_instructions[j] == 'N' || tune_instructions[j] == 'O' || tune_instructions[j] == 'P' || tune_instructions[j] == 'Q' || tune_instructions[j] == 'R' || tune_instructions[j] == 'S' || tune_instructions[j] == 'T')
         {
            continue;
         }
        else
        {
            for (m = i; m < strlen(tune_instructions); m++)
            {
                j = m;
                if (tune_instructions[j] == '+' || tune_instructions[j] == '-'|| tune_instructions[j] == 'A' || tune_instructions[j] == '\0' || tune_instructions[j] == 'B' || tune_instructions[j] == 'C' || tune_instructions[j] == 'D' || tune_instructions[j] == 'E' || tune_instructions[j] == 'F' || tune_instructions[j] == 'G' || tune_instructions[j] == 'H' || tune_instructions[j] == 'I' || tune_instructions[j] == 'J' || tune_instructions[j] == 'K' || tune_instructions[j] == 'L' || tune_instructions[j] == 'M' || tune_instructions[j] == 'N' || tune_instructions[j] == 'O' || tune_instructions[j] == 'P' || tune_instructions[j] == 'Q' || tune_instructions[j] == 'R' || tune_instructions[j] == 'S' || tune_instructions[j] == 'T')
                {
                    break;
                }
                else
                {
                    continue;
                }
            }
            
            for (; k < m; k++)
            {
                printf("%c", tune_instructions[k]);
            }
            
            printf("\n");
        }
    
    }
    
}


