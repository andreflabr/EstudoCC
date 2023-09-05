.data
msgPrompt: .asciiz "Digite 3 valores: "
msgResult: .asciiz "\nResultado Delta: "

.text

li $v0, 4
la $a0, msgPrompt
syscall
#recebendo valores
li $v0, 5
syscall
move $a0,$v0 #joga valor de a pra $a0
li $v0, 5
syscall
move $a1,$v0 #joga valor de b pra $a1
li $v0, 5
syscall
move $a2,$v0 #joga valor de c pra $a2

#desvia pro delta:
jal Delta

li $v0, 4
la $a0, msgResult
syscall
li $v0, 1
la $a0,($v1)
syscall 

j Exit

Delta:
#alocando memoria (4 bits por inteiro)
addi $sp, $sp, -12
sw $t0, 8($sp)
sw $t1, 4($sp)
sw $s0, 0($sp)

#calculando delta
mul $t0, $a1, $a1 #b ao quadrado
mul $t1, $a0, $a2 #a * c
mul $t1, $t1, 4 #a*c*4
sub $s0, $t0, $t1 #r=$s0

#condicional resultado do delta
bgt $s0, 0, Maior
move $v1, $zero

j retorno #pula para limpar a memoria

Maior:
#retorna r
move $v1, $s0

retorno:
lw $s0, 0($sp)
lw $t1, 4($sp)
lw $t2, 8($sp)
addi $sp, $sp, 12

#volta pra funcao principal:
jr $ra

Exit:
li $v0, 10
syscall



