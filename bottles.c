/*99 green bottles


Author: Stephen Pearson 
Date:    26/10/2017
*/

#include <stdio.h>
int main()
{
    int bottlecount = 99 ; 
    int dropbottle = 1 ;
    
    while (bottlecount != 0)
    {
        printf("%d green bottles, sitting on a wall. \n %d green bottles, sitting on a wall.\n", bottlecount, bottlecount);
        
        printf("if one green bottle should accidentally fall\n");
        
        bottlecount = bottlecount - dropbottle ;  //or you could just use bottlecount--
        
        printf("there'll be %d green bottles, sitting on the wall.", bottlecount);
    }
    
    printf("Jaysus boys, who's going to clean up all this mess?!?") ;
    
    flushall();
    getchar();
    return 0;
}  //end main
