#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
      char *ptr, *ptr2;
      char a[15], b[15];
      int x=0,k,j,m,i=0,l=0,count1=0,count=0;
      gets(a);
      ptr=a;
      while(a[i]!='\0')
      {
          count++;
          i++;
      }
      printf("%d",count);
      for(j=count-1,k=0;j>=0;j--,k++)
      {
          b[k]=a[j];
      }
      puts(b);
      while(b[l]!='\0')
      {
          count1++;
          l++;
      }
      printf("%d",count1);
      for(m=0;m<count;m++)
      {
          if(a[m]==b[m])
            x++;
      }

      if(x==count)
        printf("\nPalindrome");
    else
        printf("\nnot Pallindrome" );

    return 0;

}
