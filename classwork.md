## Binary Search

<!-- 
BOTTOM = first element
TOP = last element
WHILE ((TOP>=BOTTOM) and (not found)) loop
MID= (TOP + BOTTOM)/2
IF (LIST(MID) = item to find) THEN
FOUND = true
ELSE IF (item to find > LIST(MID) then
BOTTOM = MID+1
ELSE
TOP = MID - 1
END IF
END loop
IF FOUND = true
Wanted item is in database
ELSE
Wanted item is NOT in database
END IF
 
START
SET Bottom = first element
SET Top = last element
WHILE ((TOP>=BOTTOM) and (not found)) 
MID= (TOP + BOTTOM)/2
IF (LIST(MID) = item to find) THEN
OUTPUT "Found = true"
ELSE IF (item to find > LIST(MID) then
OUTPUT "Bottom = MID+1"
ELSE
OUTPUT "Top = MID - 1"
END IF
END WHILE
IF Found = true
OUTPUT "Wanted item is in database"
ELSE
OUTPUT "Wanted item is NOT in database"
END IF
END
-->

## Sequencial Search

<!--
INPUT: Array of Size N. Target Value T
OUTPUT: Position of T in the list-1
BEGIN
Set FOUND = false
Set I := 0
While (I <= N) and (FOUND is false)
IF List[i] == T THEN
FOUND = true
ELSE
I = I+1
END IF
IF FOUND==false THEN
T is not present in the List
END

START
INPUT "Array of Size N. Target Value T"
OUTPUT "Position of T in the list-1"

SET FOUND = false
SET I := 0
WHILE (I <= N) and (FOUND is false)
IF List[i] == T THEN
OUTPUT "FOUND = true"
ELSE
OUTPUT "I = I+1"
END IF
IF FOUND==false THEN
OUTPUT "T is not present in the List"
END

-->