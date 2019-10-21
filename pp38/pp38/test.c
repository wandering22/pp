#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h> 
 
char* my_strcpy(char* dest, const char* src) 
{ 
char*ret = dest; 
assert(dest != NULL); //╤оят 
	assert(src != NULL); //╤оят 

	while(*dest++ = *src++) 
	{ 
		; 
	} 
	return ret; 
} 

int main() 
{ 
	//strcpy 
char arr1[20] = "########"; 
char arr2[] = "bit"; 
printf("%s\n", my_strcpy(arr1, arr2));//hello bit 

	return 0; 
} 
