## Calculate Quadratic equation

<!-- 
START
INPUT coeficient of x^2
INPUT coeficient of x
INPUT constant term
OUTPUT "The parameters are: a=_, b=_, c=_", a, b, c
discriminant = b*b - 4*a*c
IF discriminant
    x1 = (-b + sqrt(discriminant)) / (2*a)
    x2 = (-b - sqrt(discriminant)) / (2*a)
OUTPUT "x has 2 distinst roots x1=_, x2=_", x1, x2
ELSE IF discriminant ==0
    x1 =-b/2*a;
OUTPUT "x has only one root x=_", x1
ELSE 
OUTPUT "x has no real roots"
END IF
END
-->