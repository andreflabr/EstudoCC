.data
msgPrompt: .asciiz "Digite 2 valores: "
msgResult: .asciiz "\nResultado calculo: "
.text

li $v0, 4
la $a0, msgPrompt
syscall
#recebendo valores
li $v0, 5
syscall
move $a0,$v0 #joga valor de x pra $a0
li $v0, 5
syscall
move $a1,$v0 #joga valor de y pra $a1

#desvia pro calcula:
jal calcula

li $v0, 4
la $a0, msgResult
syscall
li $v0, 1
la $a0,($v1)
syscall 

j Exit

calcula:
#alocando memoria (4 bits por inteiro)
addi $sp, $sp, -8
sw $t0, 4($sp)
sw $t1, 0($sp)

#calculando 

move $t0, $a0
move $t1, $a1

loop:
beq $t0, $t1, igual
addi $t0, $t0, 1
subi $t1, $t1, 1
j loop


igual:
#retorna x
move $v1, $t0

lw $t1, 0($sp)
lw $t2, 4($sp)
addi $sp, $sp, 8

#volta pra funcao principal:
jr $ra

Exit:
li $v0, 10
syscall



