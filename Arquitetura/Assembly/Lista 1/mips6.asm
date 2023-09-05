li $t0, 2 #expoente 
li $t1, 7 #base

move $t2, $t0 #auxiliar expoente
move $t3, $t1 #auxiliar base

loop:
beq $t2, 1, exit #t0 = 1, sai do loop
mul $t1, $t1, $t3 #multiplicacao
subi $t2, $t2, 1
j loop

exit:
