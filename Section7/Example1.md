```PY

PROCEDURE CalculateTicketCost(age)
IF age <= 12 THEN
   SET price = 5
ELSE IF age >= 65 THEN
   SET price = 7
ELSE
   SET price = 10
END IF
RETURN price
END PROCEDURE


PROCEDURE ApplyDiscount(total)
 IF total > 50 THEN
   SET discount = total * 0.1
ELSE 
   SET discont = 0
END IF 
RETURN discount
END PROCEDURE 


 START
INPUT age, quantity
SET ticketPrice = CalculateTicketCost(age)
SETtotal = ticketPrice * quantity
SET discount = ApplyDiscount(total)
SET finaltotal = total - discount
OUTPUT "Total before discount: $", total
OUTPUT "Discount: $", discount
OUTPUT "Final total: $", finalTotal
END


```