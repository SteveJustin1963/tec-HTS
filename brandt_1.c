p=4Pi*u0*w^2*f*h0*hc8(2*Hc/H0*ln(cosh(h0/Hc))-tanh(h0/hc))

input u0, w, f, h0, hc
write c code to compute p

========================
 
#include <stdio.h>
#include <math.h>
 
int main() {
 
    double u0, w, f, h0, hc, p;
 
    u0 = 1.0;
    w = 2.0;
    f = 1.0;
    h0 = 3.0;
    hc = 4.0;
 
    p = 4.0*M_PI*u0*w*w*f*h0*hc*(2.0*hc/h0*log(cosh(h0/hc))-tanh(h0/hc));
 
    printf("p = %f\n", p);
 
    return 0;
}
