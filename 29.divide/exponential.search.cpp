int divide(int dividend, int divisor) {
// doesn't work because you dint fix negatives and boundary problem

    if (dividend < 0){dividend = -dividend;} 
    if (divisor<0){divisor=-divisor;}
    int quo = 0;
    while(dividend >= divisor){
        int powertwo = 0;
        int value = divisor;
        while(value + value < dividend){
            value += value;
            powertwo += powertwo;
        }
        quo += powertwo;
        dividend -=value;
    }
    return quo;
}
