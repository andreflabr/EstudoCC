li $t0, 1 # primeiro(fib 0)
li $t1, 1 # segundo(fib 1)
li $t2, 2 # contador no terceiro termo
move $s1, $zero # inicializa o resultado em s1

bgtz $s0, loop # se n>0 entra no loop
j exit

loop:
add $s1, $t0, $t1 # proximo termo da sequência (fibonacci)
move $t0, $t1
move $t1, $s1
addi $t2, $t2, 1 # incrementa o contador
bne $t2, $s0, loop # se contador != n continua 

exit:
li $v0, 10 # codigo de saida
