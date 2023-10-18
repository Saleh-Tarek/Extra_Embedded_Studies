/**
*	First thing to do in a header file...? 
*	Header file guard. To prevent multiple defenition.
*		--------------------------> Building process <-------------------------------
*	[Source file .c] -> (1- Preprocessor)						: [Intermediate file .i] 
*   [Intermediate file .i] -> (Complier) 						: [Assembly file .asm .s]
*	[Assembly file .asm .s]-> (Assembler)						: [Object file .obj .o]
*	[Object file fiel1.obj .o + file2 .obj + file3.lib] (Linker): [Executable file .exe]
**/
/**
* # if this file " STD_TYPE_H_ " not define --> defien it
*/
#ifndef STD_TYPE_H_
#define STD_TYPE_H_

/*characters*/
char

			/*signed integer*/
			
typedef signed char					sint8_t
typedef signed short int 			sint16_t
typedef signed long int 			sint32_t
typedef signed long long int 		sint64_t

			/*unsigned integer*/
			
typedef unsigned char				uint8_t
typedef unsigned short int 			uint16_t
typedef unsigned long int 			uint32_t
typedef unsigned long long int 		uint64_t

				/*float*/

typedef float						f32_t		
typedef double						f64_t
typedef long double					f96_t


#endif

/**


https://www.tutorialspoint.com/cprogramming/c_operators_precedence.htm

*/