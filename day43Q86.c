#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    scanf(" %[^\n]",s);
    int l=strlen(s),flag=1;
    for(int i=0;i<l/2;i++) if(s[i]!=s[l-1-i]) flag=0;
    printf(flag?"Yes\n":"No\n");
    return 0;
}