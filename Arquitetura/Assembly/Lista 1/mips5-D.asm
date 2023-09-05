li $s0, 3
li $s1, 3
li $s2, 5

Loop: 
beq $s0, $s2, Exit
addi $s0, $s0, 1
add $s1, $s1, $s2
j Loop

Exit:
