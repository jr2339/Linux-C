#include <stdio.h>

int main(int argc, char *argv[]){
	int i,j,sum,int_num;
    char c;
    float float_num;
    long int long_int;
    double double_number;
    
    
    printf("Hello World!\n");
    
    
	i= 24;
	printf("value of i = %d\n", i); // %d at here using for pass integer
	j = 12;
	printf("value of j is %d\n",j);
	sum = i +j;
	printf("i is %d, j is %d, the sum of i and j is sum = %d \n",i,j,sum);
    
    c='c';
    printf("c is %c\n",c); //c is c
    printf("c is %d\n",c); //c is 99
    
    float_num = 24.3;
    printf("float_num is %f\n",float_num); //float_num is 24.299999
    
    int_num = float_num;
    printf("value of int_num is %d\n",int_num);//value of int_num is 24
    
    
    printf("The size of char is %lu\n", sizeof(char)); //The size of char is 1
    printf("The size of integer is %lu\n", sizeof(int)); //The size of integer is 4
    printf("The size of float is %lu\n", sizeof(float)); //The size of integer is 4
    printf("The size of double is %lu\n", sizeof(double)); //The size of double is 8
    printf("The size of long int is %lu\n", sizeof(long int));//The size of long int is 8
    

    
    
    
    
    
    
	return 0;
}


/*
int: integer 4bytes

*/
