#include<stdio.h>


int main()
{
    int ch;
    int newlines=0,blanks=0,tabs=0;
    
    printf("Enter a text (press Ctrl+D to finish) : ");
    
    
    while((ch=getchar())!=EOF)
    {
    
    if(ch=='\t')
       tabs++;
    else if(ch=='\n')
       newlines++;
       
    else if(ch==' ')
        blanks++;
    }
    printf("\ncount of blanks=%d",blanks);
    printf("\ncount of newlines=%d",newlines);
    printf("\ncount of tabs=%d",tabs);
         








    return 0;
}
