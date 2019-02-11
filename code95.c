#include <stdio.h>
#include <string.h>

int main(){
    char N[10];
    int i,f=0;
    scanf("%s",N);
    for(i=0;N[i]!='\0';i++)
    {
        if(N[i]=='0' || N[i]=='1')
        {
            f=1;
        }
        else
        {
            f=0;
            break;
        }
    }
    

if(f==1) {
        printf("yes");
    }    
    else {
        printf("no");
    }
    return 0;
}
