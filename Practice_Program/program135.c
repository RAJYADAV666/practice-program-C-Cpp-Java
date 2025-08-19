#include<stdio.h>

void  strtogglex( char *str )
{
    // capital ch small
    // small ch capital


    while(*str !='\0')
    {
            if((*str>='a') && (*str<='z'))
            {
                *str=*str-32;
            }  
            else if((*str>='A') && (*str<='Z'))
            {
                *str=*str + 32;
            } 
            
            
        
        str++;
    }
  
    
}
int main()
{
    char Arr[20];


    printf("Enter the String:\n");
    scanf("%[^'\n']s",Arr);

    
    strtogglex(Arr);

    printf(" Updated string is :%s\n",Arr);
   

    return 0;
}