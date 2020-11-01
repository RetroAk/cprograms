#include <stdio.h>
#include <string.h>
int main()
{
    char name[20],length;
    char example[40];
    char str[20];
    char z[100] = "direct string print\n ";
    printf("%s",z);
    printf("using scanf:");
    scanf("%s",name);
    printf("scanf nameis %s\n",name);
    printf("Name??: ");
    scanf("%s",str);
    printf("Hey %s using gets\n", str);
    length = strlen(str);
    printf("length is %d\n",length);
    strcpy(example,"hello Ak USING STRCPY");
    strcat(example,"is great ");
    strcat(example,"using strcat");
    printf("%s",example);
    return 0;
}
