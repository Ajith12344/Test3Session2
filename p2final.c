#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction Fraction;
Fraction input_fraction()
{
  Fraction f;
  printf("enter a fraction\n");
  scanf("%d%d",&f.num,&f.den);
  return f; 
}
Fraction Largest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
  int a,b,c;
  a=f1.num/f1.den;
  b=f2.num/f2.den;
  c=f3.num/f3.den;
  if(a<b&&a<c)
    return f1;
  else if(b<a&&b<c)
    return f2;
  else
    return f3;
}
void output(Fraction f1, Fraction f2, Fraction f3, Fraction smallest)
{
  printf("the smallest among three is %.0d/%.0d",smallest.num,smallest.den);
}
int main()
{
  Fraction f1,f2,f3,smallest;
  f1= input_fraction();
  f2= input_fraction();
  f3= input_fraction();
  smallest =Largest_fraction(f1,f2,f3);
  output(f1,f2,f3,smallest);
}

