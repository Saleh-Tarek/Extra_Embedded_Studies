/*(unsigned char) 5 & 6
 
 5 -> 00000101
 6 -> 00000110
 result &
 -------------
		00000100 -> 4 ? 
		
		&& logical operation 
		
		True && TRUE = Ture
*/

#include <stdio.h>
void main ()
{
	void * s1;
	int a;
	(int *)s1=&a; // cast first then assign or initialize
	//char near * s2;
	//char far * s3;
	//char huge * s4;
	int i=-3, j=2, k=0, m;
	m = ++i && ++j && k++;
	printf("i=%d,j=%d,k=%d,m=%d\n",i,++j,k++,m);
	printf("i=%d",sizeof(s1));
	
	return 0;
}		