﻿ /* 
 솔루션 / 프로젝트 /소스파일: Ch03 / prj11 / numliterals.c 
 정수형 실수형 리터럴 상수의 다양한 표현 
 V 1.0 2016. 
 */ 
 
 
 #include <stdio.h> 
 
 
 int main(void) 
 { 
 	printf("%d ", 30);		printf("%d ", 10); 
 		printf("%d ", 030);		printf("%d ", 010 ); 
 		printf("%d ", 0x2f);	printf("%d ", 0x1b); 
 
 
 		printf("%f ", 3.14);		printf("%f ", 2.0); 
 		printf("%f ", 3.14E+2);		printf("%f ", 21.8e2 ); 
 		printf("%f ", 3.14E-2);		printf("%f\n ", 218e-3); 
 
 
 		return 0; 
 } 

