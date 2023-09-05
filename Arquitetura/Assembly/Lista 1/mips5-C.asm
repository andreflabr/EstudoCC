li $t0, 0
li $s0, 4
li $s2, 2
li $s3, 3

loop:
bgt $t0, $s0, Exit
addi $t0, $t0, 1
addi $s2, $s2, 1
addi $s3, $s3, 2
j loop
 
Exit:
