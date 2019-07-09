/***************************************************************
 ******************* Music Array Seperator *********************
 **                                                           **
 ** Separates music notes with its individual time length     **
 ** Program was made as a part of a bet with a student in     **
 ** that I could whip up a quick program to do exactly what he** 
 ** was doing, but much much quicker than seperating them     **
 ** manually.                                                 **
 ** @author Aiman Priester                                    **
 **                                                           **
 ***************************************************************
 **************************************************************/

#include <stdio.h>
#include <string.h>

int main (){
	
	char arrToConvert[]= { 76, 12, 76, 12, 20, 12, 76, 12, 20, 12, 72, 12, 76, 12, 20, 12, 79, 12, 20, 36, 67, 12, 20, 36 }; //Place array that needs to be converted here. Remove sample array given.
	char noteArr[50];
	char durArr[50];
	float totalDelay;
	int i,j;
	
  /**
   * Takes given array and takes the the even indexed array value
   **/
	printf("{");
	for(i = 0; i< strlen(arrToConvert); i = i+2){
		noteArr[j] = arrToConvert[i];
		printf("%d, ", noteArr[j]);
		j++;
	}
	printf("}");
	
	printf("\n");
	printf("\n");
	printf("Number of notes: %d", j);
	printf("\n");
	printf("\n");
	
  /**
   * Takes given array and takes the the odd indexed array value
   **/
	j = 0;
	printf("{");
	for(i = 1; i< strlen(arrToConvert); i = i+2){
		durArr[j] = arrToConvert[i];
		printf("%d, ", durArr[j]);
		j++;
	}
	printf("}");
	printf("\n");
	printf("\n");
	
  
	for(i = 0; i< strlen(durArr); i++){
		totalDelay += durArr[i];
	}
  
	/**
   * Specifications dictate that every value in the array is 1/64 of a second
   **/
	printf("Delay (): %.2f", totalDelay/64.0);
	
	
	
}