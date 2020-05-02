# Advanced Control Flow

This is where we can use ***goto***, ***null statement***, ***comma operator***, and ***longjmp***. 

## goto
Use only if in deep nested loop to exit out if an error occurs. 
Can lead to *spaghetti code* when using it as loops.

## null statement
This is used when we have nothing to do. And can be used when we do not anything done in the body of loops or if statements

## comma operator
Useful for when we need to have additional statements done and do not need to separate by a semicolon, i.e:
> for(int i = 0, j = 100; i < j; i++, j--);

## longjmp
We would normally use this for error handling, in order to reset our program to a valid state. 
