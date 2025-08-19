#include<stdio.h>

void Replace ( char *str )
{
    


    while(*str !='\0')
    {
        if(*str=='a') 
        {
             *str='_';   
        }
        
        str++;
    }
 // direct value main madhalya arr madhe badlte 
    
}
int main()
{
    char Arr[20];


    printf("Enter the String:\n");
    scanf("%[^'\n']s",Arr);

    
    Replace(Arr);

    printf(" Updated string is :%s\n",Arr);
   

    return 0;
}