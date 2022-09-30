    // find  C version you are using
    #include<stdio.h>
 
int main( int argc, char** argv){
    //The first parameter, argc (argument count) is an integer that indicates how many arguments were entered on the command line when the program was started. The second parameter, argv (argument vector), is an array of pointers to arrays of character objects. pointer to pointer to char 
    #if __STD_VERSION__ >=  201710L
    printf("We are using C18!\n");
    #elif __STD_VERSION__ >= 201112L
    printf("We are using C11! \n");
    #elif __STD_VERSION__ >= 199901L
    printf("We are using C99!\n");
    #else
    printf("We are using C89!/C90!\n");
    #endif
     return 0 ;
 }