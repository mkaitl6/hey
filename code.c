#include <stdio.h>
int ctof(int c)
{
//sets each number in the conversion
//equation to a variable
//so that the answer will be 
//rounded at the end
int x = 9;
int y = 5;
int z = 32;
int f;

//conversion from Celsius to Fahrenheit
f = (((c*x)/y)+z);

		printf("%d",f);
		printf("\n");
return(f);
		return (f);
}
int main()

{
//Tests program 
int temp1 =  30;
int temp2 =  -5;
int temp3 =  3;
int temp4 = -23;

int t1 =ctof(temp1);
int t2 =ctof(temp2);
int t3 =ctof(temp3);
int t4 =ctof(temp4);

	return 0;
};