
#include "Questions.h"
#include <stdio.h>


int Q1_for(){
	int sum=0;
	int i=30;
	
	// calculate your sum below..this has to use for loop
	for (i = 30; i <= 1000; i += 2)
        if (i % 4 == 0) // if remainder is 0 after dividing by 4, it is a multiple of 4
           sum += i;
	
	// here, we return the calcualted sum:
	return sum;
}
int Q1_while(){
	int sum=0;
	int i=30;


	// calculate your sum below..this has to use while loop
	while (i <= 1000) {
        if (i % 4 == 0)
            sum += i;


        i += 2;
	}
	  
	// here, we return the calcualted sum:
	return sum;
}
int Q1_do(){
	int sum=0;
	int i=30;
	// calculate your sum below..this has to use do-while loop
	do {
        if (i % 4 == 0)
            sum += i;

        i += 2;
	} while (i <= 1000);
	// here, we return the calcualted sum:
	return sum;
}
//===============================================================================================
int Q2(int Q2_input){
	
	// this is the flag that is holding whether the input number is 5-digit or not
	int IsFiveDigit = 0;
	
	// Do your coding below to check
	if ((Q2_input<100000 && Q2_input>=10000)||(Q2_input<=-10000 && Q2_input>-100000))
    {
		IsFiveDigit = 1;  //in the range 10000<=x<100000 or -100000<x<=-10000, it is 5 digit
	}

	     
	//finally, we must return IsFiveDigit, which must be 1 is the number is five digits and 0 otherwise
	return IsFiveDigit;
}
//===============================================================================================
int Q3(float Q3_input){
	
	/* Question 3: 
	Write a program that takes a student's Q3_input as an input, which is a floating point value,
	and returns:
	4 if the Q3_input is in the range 90-100,
	3 if it is in the range 80-89, 
	2 if it is in the range 70-79,
	1 if it is in the range 60-69 and
	0 if the Q3_input is between 0 and 59.
	If the Q3_input is not in the range 0-100, the program shouldreturn -1
*/	
	// this is the varaible that holds the out value to return
	float GPA;
	
	GPA = 0;
	// Do your coding below to calculate the GPA variable value
	// if else if are used to categorize the GPA based on Q3_input
	if (Q3_input>=90 && Q3_input <= 100){
		GPA = 4;
	}
	else if(Q3_input>=80 && Q3_input <= 89){
		GPA = 3;
	}
	else if(Q3_input>=70 && Q3_input <= 79){
		GPA = 2;
	}
	else if(Q3_input>=60 && Q3_input <= 69){
		GPA = 1;
	}
	else if(Q3_input>=0 && Q3_input <= 59)
	{
		GPA = 0;
	}
	else{
		GPA = -1;
	}
	 
	
	// finally, we return the GPA
	return GPA;	
}
//===============================================================================================
double Q4(int Q4_input){
	
	// this is the varaible that holds the pi value to return
	double pi=0;
	
	
	// Do your coding below to calculate the pi value
	double i;
	int sign_val = 1; // to signify original(initial) sign value as positive
		if (Q4_input>0){

    		for (i=1;i<=Q4_input;i++){
				pi = pi+sign_val*4/(i*2-1); // add the i term
				sign_val  = sign_val*(-1);   //change the sign of the next term
		}
	}
	    else{
		    pi = -1;  //error message for non-positive value
	}
	
	// finally, we return the pi value
	return pi;	
}
//===============================================================================================
int Q5(){
	
	// this is the varaible that holds and the total number of triples to return at the end of the function
	int totNumTribles=0;
	
	
	/* Do your coding below
		Use a triple-nested for loop that simply tries all possibilities
		and update the total number of triples if needed
	*/
	int s1, s2, s3;
	for (s1=1;s1<=400;s1++){          // initializing for loops for each side
		for (s2=s1;s2<=400;s2++){
			for (s3=1;s3<=400;s3++){
				if ( s1*s1+s2*s2 == s3*s3){
					totNumTribles +=1;
				}
			}
		}
	}


	//finally you should return the total number of tribles.
	return totNumTribles;
}
//===============================================================================================
int Q6(int Q6_input, int perfect[]){
	
	
	
		//counts is the variable that should hold the total number of found perfect numbers
		//you should update it within your code and return it at the end
	int counts=0;

		/*
		*
		*perfect is an array that you need to add into it any perfect number you find
		*which means at the end of this function, the perfect[] array should hold all the found perfect numbers in the range
		*you do not need to return perfect because as stated in lectures arrays are already passed by reference. so, modifying them will 
		*autmoatically reflect in the main calling function.
		*/
	
	int i, factor, sum;
	for (i=1;i< Q6_input;i++){
	    sum = 0;
	    for (factor=1;factor<i;factor++){
	    	if (i%factor == 0){
	    		sum += factor;  //search every factor
	    	}
	    }
	    if (sum == i){
	    	perfect[counts] = i; //add the perfect number to the array
	    	counts += 1;
	    }
	    }

	   return counts;

	
}
//===============================================================================================
int Q7a(int Q7_input){
	
	//this is the variable that holds the reversed int.
	int reversedInt=0;
	
	
	// Do your coding logic here
	//Hint: Use the division and remainder operators to separate the number into its individual digits.
	//in this part you can assume the knowledge of the number of digits: seven-digit positive integer

	int input_digit ,flipped_digit, value, remaining,i;
	input_digit = 1000000;
	flipped_digit = 1;
	remaining = Q7_input;

	for (i=0;i<7;i++){
		value = remaining/input_digit;  				//find the value of the specific digit
		remaining %= input_digit;					//clear the largest digit for the next loop
		reversedInt += (value * flipped_digit); 	//add value to the result from the lowest digit
		input_digit /= 10;							//for input value, move right to the next digit
		flipped_digit *= 10;						//for output, move left to the next digit
	}

	
	return reversedInt;
	
}
int Q7b(int Q7b_input){
	
	//this is the variable that holds the reversed int.
	int reversedInt=0;
	
	

	// Do your coding logic here
	//Hint: Use the division and remainder operators to separate the number into its individual digits.
	//this part should be generalized for any number of allowed digits
	int input_digit ,flipped_digit,numberDigit, value, remaining,i;
	numberDigit = 1;
	input_digit = 1;
	flipped_digit = 1;
	remaining = Q7b_input;
	
	while (Q7b_input/input_digit>=10){
		numberDigit++;
		input_digit *= 10;  //determine the number of digit of input
	}

	for (i=0;i<numberDigit;i++){
		value = remaining/input_digit;   //same function of the previous function
		remaining %= input_digit;
		reversedInt += (value * flipped_digit);
		input_digit /= 10;
		flipped_digit *= 10;
	}


	return reversedInt;

	
	
	
}
