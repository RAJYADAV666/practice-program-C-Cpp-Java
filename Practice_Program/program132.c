#include<stdio.h>

void Replace ( char *str )
{ 
    


    while(*str !='\0')
    {
        if((*str=='a')||(*str=='i')||(*str=='o')||(*str=='u')||(*str=='e'))
        {
             *str='_';   
        }
        
        str++;
    }
  
    
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