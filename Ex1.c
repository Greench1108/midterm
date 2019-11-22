#include <stdio.h>

#define IN 1
#define OUT 0
int main()
{
    int c,nw,state;
    state = OUT;
    nw=0;
    while((c = getchar())!= '\n'){
    if(c == ' ' || c =='\n'|| c == '\t')
       state = OUT;
    else if (state == OUT){
        state = IN;
        ++nw;
       }
    }
    printf("%d",nw);
return 0;
}