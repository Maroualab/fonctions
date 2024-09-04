#include <stdio.h>
#include <string.h>

int main(){
char Word[10];
printf("entrez un mot :\t",Word);
scanf("%s",&Word);
printf("le mot inverse est :\t",strrev(Word));
puts(Word);
return 0;


}
