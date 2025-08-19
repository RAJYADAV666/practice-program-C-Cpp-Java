#include<stdio.h>

void  struppx( char *str )
{
    


    while(*str !='\0')
    {
            if((*str>='a') && (*str<='z'))  
            {
                *str=*str-32;
            }  
        
        str++;
    }
  
    
}
int main()
{
    char Arr[20];


    printf("Enter the String:\n");
    scanf("%[^'\n']s",Arr);

    
    struppx(Arr);

    printf(" Updated string is :%s\n",Arr);
   

    return 0;
}