#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char**s=NULL,pos[23][3]={"aa","ae","ai",};
    int n=0;
    scanf("%d",&n);
    s=(char **)malloc(n*sizeof(char*));
    for(int i=0;i<n;i++)
    {
        s[i]=(char *)malloc(1000*sizeof(char));
        scanf("%s",s[i]);
    }
    for(int i=0;i<n;i++)
    {
        int j=0;
        for(int j=0;j<23;j++)
        {
            if(strstr(s[i],pos[j])!=NULL)
                break;
        }
            if(j>=23)
                printf("\nSad");
            else
            printf("\nHappy");
    }
    
    return 0;
} 
