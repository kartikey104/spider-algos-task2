/*                                    TASK2 - A
1.  So, here we have to find out the maximum length of a valid prefix in given expression
2.  So in a given expression, I am going to scan each character and based upon that, I increase or decrease the sum. In case of a possible valid prefix, I assign that index to var x
    then when that valid expression ends, I calculate the length and compare it with current max length of that expression. In case of an invalid expression, I terminate the value whenever 
    sum drops below zero and print out the max_length.

*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char c ;
    int t,f;                            // f - flag
    int i,x,len = 0,max_len ,sum ;      // i - current index, 
    scanf("%d\n",&t);
    while(t--)                          // t test cases
    {
        c = 97;                         // any arbitrary character assign
        i=0;
        sum =0;
        f = 1;
        max_len = 0;
        while( f && c != '\n' )            // while flag = 1 AND current expression has not ended
        {
            scanf("%c",&c);
            if(c == '<')
                sum += 1;
            if(c == '>')
                sum -= 1;
            if( sum == 1 && c == '<')       // start of a valid expression
                x = i;
            if( sum == 0 && c == '>')       // end of valid expression
            {
                len = i - x + 1;
                if( len > max_len)
                    max_len = len;
            }
            i++;
            if( sum < 0)
                {
                    while(c != '\n')        // to accomodate the angular brackets even after expression has become invalid
                    scanf("%c",&c);
                    f = 0;
                }
        }
        printf("%d\n",max_len);
    }
    
    return 0;
}