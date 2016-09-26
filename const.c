﻿ /* 
 솔루션 / 프로젝트 / 소스파일: ch03 / prj12 / const.c 
 카워드 const를 사용한 상수 선언 
 V 1.0 2016. 
 */ 
 
 
 #include <stdio.h> 
 
 
 int main(void) 
 { 
 	//키워드 const로 상수 만들기 
 	const double RATE = 0.03; 
 	int deposit = 800000; 
 
 
 	//RATE = 0.032; //수정이 불가능 
 	printf("이자울: %f\n", RATE); 
 	printf("계좌 잔고: %d\n", deposit); 
 	printf("이자액 %f\n", deposit * RATE); 
 

 	//문자열 변수에 저장 
 	char * str = "좋은 C 언어 입문서"; //char *str, char * str 모두 가능 
 	char* const title = "진보된 C 언어"; //title에 다른 문자열 상수 저장이 불가 
 
 
 	str = "최근 가장 좋은 C 언어 입문서"; 
 	//title = "C 언어 스케치"; //수정 불가능 
 
 
 	printf("\n%s: %s\n", str, title); 
 
 
 	return 0; 
 
 
 
 
 

 } 

