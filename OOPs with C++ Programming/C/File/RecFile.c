#include<stdio.h>

FILE *fp;

void RevDispLine() // Rev display of lines
{
char s[80];
if(!feof(fp))
{
fgets(s,80,fp);
RevDispLine();
puts(s);
}
}
void RevDispChar() // Rev disply of charcters
{
char ch;
if(!feof(fp))
{
ch =fgetc(fp);
RevDispChar();
printf("%c",ch);
}
}

void RevDispWords() // Rev disply of words
{
char s[80];
if(!feof(fp))
{
fscanf(fp,"%s",s);
RevDispWords();
printf("%s",s);
}
}


int main()
{
char s[20];
printf("\n Enter file name");
scanf("%s",s);
fp=fopen(s,"r");

printf("\n Reverse Word \n");
RevDispWords();
getchar();

printf("\n Reverse Lines \n");
rewind(fp);
RevDispLine();
getchar();

printf("\n Revrse chars \n");
rewind(fp);
RevDispChar();
fclose(fp);

return 0;
}
