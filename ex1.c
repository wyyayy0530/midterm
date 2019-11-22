#include <stdio.h>
int nxy(char s[])
{
    int i;
    int a=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        break;
        if(s[i]==' ')
        {
            a++;
        }
        
        
            
    }
    return a;
}
int main(){
      printf("输入一段总长度不超过50个字符的任意字母数字，空格符，制表符");
      char c[50];
      int i=0;
      c[i]=getchar();
      while(c[i]!='\n')
      {
          i++;
          c[i]=getchar();
      }
      printf("the number of words is %d\n",nxy(c));
  }
