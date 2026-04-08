

    //c program specifying the particular char position from the string
    #include<stdio.h>
    #include<string.h>
    void main()
    {
    char str[100],c;int i,lenf=0;
    printf("\nenter a string:");
    gets(str);
    lenf=strlen(str);
    printf("\nenter a character to find its position:");
    scanf("%c",&c);
    for(i=0;i<lenf;i++)
    {
    if(str[i]==c)
    {
    printf("character position:\n%d",i+1);
    lenf=1;
    }
    }
    if(lenf==0)
    {
    printf("\ncharacter not found");
    }
    }

