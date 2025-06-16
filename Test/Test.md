## Sum of even numbers

<!-- 
1. Start
2. Initialize i = 0
3. Initialize sum = 0
4. Input n from user
5. IS n < 0 
Yes : Output "Invalid input"
No : Use FOR loop to determine if i < n
Calculate sum = sum + i
calculate i = i + 2
6. Output "sum", sum
7. END
-->

<!--
START
SET i = 0
SET sum = 0
INPUT n

IF n < 0 THEN
OUTPUT "Invalid input"
ELSE
FOR i = 0 TO n STEP 2
    sum = sum + i
    i = i + 2
END FOR
END IF
OUTPUT "sum", sum
END
-->


## Password validation
<!-- 
1. Start
2. Do
3. Input password != "secure123"
4. Output "Incorrect password"
5. While password != "secure123"
6. Output "Access Granted"
7. END
 -->
<!-- 
START
DO
    INPUT password != "secure123" THEN
    OUTPUT "Incorrect password"
    END IF
WHILE password != "secure123"
OUTPUT "Access Granted"
END
-->


## Shopping total cost

<!--
1. START
2. Input price
3. Call a procedure to calculate the subtotal
4. Call a procedure to calculate the discount
5. Calculate the cost
6. Print the subtotal, discount, and the cost
7. END 
-->

```PY
PROCEDURE CalculateItemCost
INPUT price[]
SET subtotal = 0
IF price.i < 0 THEN
OUTPUT "invalid input"
ELSE 
FOR i = 0; i<price i++
    subtotal = subtotal + i
END FOR 
RETURN subtotal
END PROCEDURE

PROCEDURE ApplyDiscount(subtotal)
 IF subtotal > 100 THEN
   SET discount = subtotal * 0.1
ELSE 
   SET discount = 0
END IF 
RETURN discount
END PROCEDURE 


 START
INPUT price[]
SET subtotal = CalculateItemCost
SET discount = ApplyDiscount(subtotal)
SET cost = subtotal - discount
OUTPUT "Total before discount: $", subtotal
OUTPUT "Discount: $", discount
OUTPUT "Cost: $", cost
END

```