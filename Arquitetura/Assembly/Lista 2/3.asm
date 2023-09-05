.data
msgEntrada: .asciiz "Digite um numero inteiro: "
msgPos: .asciiz "\nPOSITIVO"
msgNeg: .asciiz "\nNEGATIVO"
msgNul: .asciiz "\nNULO"

.text

li $v0,4
la $a0, msgEntrada
syscall

li $v0, 5
syscall
move $t0,$v0

bne $t0, 0, Else
li $v0, 4
la $a0, msgNul
syscall
j Exit 

Else:
blt $t0, 0, Else2
li $v0, 4
la $a0, msgPos
syscall 

Else2:
bgt $t0, 0, Exit
li $v0, 4
la $a0, msgNeg
syscall 


Exit:

