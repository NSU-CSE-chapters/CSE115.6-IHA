/*Midterm Exam
Name: Fahim Muntashhir
ID: 2021183642
section:6
Date:8th September 2020
course code:CSE115L*/

#include <stdio.h>

int main()
{
  int a, b, n, x;
  int temp,count=0;
  scanf("%d %d", &a, &b);
  x=a;
  n= b-a+1;

  for (int  i = 1; i <=n; i++)
  {
      temp = 1;
      while (a!=1)
      {
        if (a%2==0)
        {
            a= a/2;
        }
        else
        {
            a= (a*3) +1;
        }
        temp++;

   
        
      }

      if (temp>count)
      {
          count = temp;
      }
      x++;
      a=x;
      
      
  }
  printf("%d\n", count);
  return 0;
}