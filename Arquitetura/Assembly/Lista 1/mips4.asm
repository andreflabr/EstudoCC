li $t0, 1
li $s1, 4
li $s2, 5

bne $s1, $s2, Else 
add $s1, $s1, $t0
j Exit
Else: add $s2, $s2, $t0

Exit:
