.text
li $t0, 1 #inicial e contador

loop:
bgt $t0, 10, ExitFor
li $v0, 1
la $a0,($t0)
syscall

addi $t0, $t0, 1
j loop

ExitFor: