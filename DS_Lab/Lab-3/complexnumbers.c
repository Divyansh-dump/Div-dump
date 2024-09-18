#include<stdio.h>
typedef struct{
double real;
double imag;
}Complex;

Complex addComplex(Complex a,Complex b){
Complex result;
result.real= a.real + b.real;
result.imag = a.imag +b.imag;
return result;
}
Complex subtractComplex(Complex a,Complex b){
Complex result;
result.real= a.real - b.real;
result.imag = a.imag - b.imag;
return result;
}

Complex multiplyComplex(Complex a,Complex b){
 Complex result;
 result.real = a.real * b.real - a.imag * b.imag;
 result.imag = a.real * b.real + a.imag * b.imag;
 return result;
}

void printComplex(Complex c){
if(c.imag >=0)
    printf("%.2f + %.2fi\n",c.real,c.imag);
else
    printf("%.2f - %.2fi\n",c.real, -c.imag);
}

int main(){
Complex c1 ={3.0,2.0};
Complex c2 ={1.0,7.0};
Complex sum = addComplex(c1,c2);
Complex diff = subtractComplex(c1,c2);
Complex mult = multiplyComplex(c1,c2);
printf("c1 = ");
printComplex(c1);
printf("c2 = ");
printComplex(c2);
printf("sum = ");
printComplex(sum);
printf("difference = ");
printComplex(diff);
printf("multiply = ");
printComplex(mult);
return 0;
}
