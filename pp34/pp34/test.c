#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int my_strlen(char* str)//abcdef\0 
{ 
	int count = 0; 
	while(*str != '\0') 
	{ 
		count++; 
		str++; 
	} 
	return count; 
} 

void reverse_string(char* str)
 { 
 	int len = my_strlen(str); 
 	char tmp = *str; 
 	*str = *(str+len-1); 
	*(str+len-1) = '\0'; 
	if(my_strlen(str+1) > 1) 
		reverse_string(str+1);//++str 
	*(str+len-1) = tmp; 
} 
 
int main() 
{ 
	char arr[] = "hello"; 
	reverse_string(arr); 
	printf("%s\n", arr);//olleh 
	return 0; 
} 
