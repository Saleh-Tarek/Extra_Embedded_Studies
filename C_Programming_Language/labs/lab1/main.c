#include <stdio.h>
//extern Global_uint16_tCounter;

// 1 declaration correct
// pointer to integer ==> int *
int SWAP_NUM (int *, int *);
/*
a from main =20
b from main =5
a from swap = 20
b from swap =5
*/
/* 
a from swap = 5
b from swap =20
*/
/* 
	Normal Variable -> contains a value 
	Pointer Variable -> contains an address
	To access the value inside an addrees we use
	Dereference operator * 
	pointer name if want to deal with address
	add * if you want to deal with value
	*/

 int main ()
 {
	int a=20;
	int b= 5;
	//Global_uint16_tCounter ++; 
	printf("1-a=%d b=%d\n",a,b);
	/* 2 call actual parameter call by reference 
	pass by address by sending  
	the addrees of the original
	*/
	SWAP_NUM(&a,&b);
	printf("4-a=%d b=%d\n",a,b);

	 return 0;
 }
 // 3 definition Formal paramater
 // pass by reference
int SWAP_NUM (int * Copy_a, int * Copy_b)
{
	int Local_temp = *Copy_a;
	*Copy_a= *Copy_b;
	*Copy_b= Local_temp;
	printf("3-a=%d b=%d\n",*Copy_a,*Copy_b);

	return (*Copy_a+*Copy_b);
}
