
#include <stdlib.h>
#include <string.h>
 
#include <stdio.h>


 


int f1(int *a, int b)


{


        *a = b;


        b++;


 


        return b;


}


 


int f2 (int a, int *b)


{


        *b = 2;


        a = *b;


 


        return a;


}


 


int main(int argc, char **argv)


{


int a,b,c;


 


        a = 10;


        b = 5;


 


        b = f1(&a,b);


 


        c = f2(a,&b);


 


        printf("%d %d %d\n",a,b,c);


 


        return 0;


}
