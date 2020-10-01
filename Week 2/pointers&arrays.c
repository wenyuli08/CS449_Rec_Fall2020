#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sum(int anarray[]) {
    int i, sum = 0;
    printf("Size of anarray: %d, Size of anarray[0]: %d in sum\n", sizeof(anarray), sizeof(anarray[0]));
    // what if anarray[0]?
    // garbage
}

int main()
{
    int a = 9;
    char z = 'z';
    
    int *p = &a;

    double* dptr;	// a pointer to a double 
    char* c1;		// a pointer to a character
    float* fptr;	// a pointer to a float

    // are these 3 pointers?
    int* abc, def, ghi;
    
    printf("&a = %d\n", &a);
    printf("p = %d\n", p);
    printf("*p = %d\n", *p);
    
    *p = 16;
    printf("a = %d\n", a);




    int **q = &p;
    int ***r = &q;
    printf("%d\n", *p);
    printf("%d\n", *q);
    printf("%d\n", *r);
    printf("%d\n", **q);
    printf("%d\n", ***r);




    // array as function arg
    int anarray[] = {1, 2, 3, 4, 5};
    sum(anarray);
    printf("Size of anarray: %d, size of anarray[0] is: %d in main\n", sizeof(anarray), sizeof(anarray[0]));

    // question:
    float somearray[10];
    // how can I get the length of it? (e.g. 10)



    // strings
    char c[] = "Mary";
    char d[3] = "Tea";
    char e[6] = "Chair";
    printf("Size in bytes: %d\n", sizeof(c));   // 5
    int len = strlen(c);
    printf("Length of string: %d\n", len);  // 4
    // !!!
    // what if I get rid of the null terminator?
    // the problem with strlen...
    char buffer[len];
    memcpy(buffer, c, len);
    printf("Length of string 2: %d\n", strlen(buffer)); // crash or arbitrart number
    // strlen will keep looking for \0

    return 0;
}
