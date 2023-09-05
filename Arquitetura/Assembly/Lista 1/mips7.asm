.data
vetor: .word 2, 4, 6, 8, 10, 0 #terminado com 0
.text

la $t0, vetor # aponta em t0 o endereço do vetor 
li $t1, 0 #acumulador 

loop:
lw $t3, 0($t0) #carrega o proximo elemento do vetor em t3
beqz $t3, fim #se o elemento for 0 encerra o loop
add $t1, $t1, $t3 #acumula
addi $t0, $t0, 4 #próximo elemento (4 bytes)
j loop

fim: move $t2, $t1 #valor acumulado para t2

li $v0, 10 #Codigo de saida do programa
