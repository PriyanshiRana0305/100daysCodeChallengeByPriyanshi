#include <stdio.h>
#include <ctype.h>
int main() {
    char s[100];
    scanf(" %[^\n]",s);
    int sp=0,d=0,sc=0;
    for(int i=0;s[i];i++){
        if(s[i]==' ') sp++;
        else if(isdigit(s[i])) d++;
        else if(!isalpha(s[i])) sc++;
    }
    printf("%d %d %d\n",sp,d,sc);
    return 0;
}