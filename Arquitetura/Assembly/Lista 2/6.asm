.data
msgSexo: .asciiz "Digite 1 para Masculino e 2 para Feminino: "
msgPeso: .asciiz "Digite o peso da pessoa: "
NumHomem: .asciiz "\nNumero de homens: "
NumMulher: .asciiz "\nNumero de mulheres com menos de 70kg: "

.text
li $t4, 0  #contador homem
li $t5, 0  #contador mulheres < 70kg
li $t0, 1  #contar pessoas

loop:
li $v0, 4
la $a0, msgSexo
move $a1, $t0
syscall

li $v0, 5
syscall
move $t1, $v0

li $v0, 4
la $a0, msgPeso
move $a1, $t0
syscall

li $v0, 5
syscall
move $t2, $v0

beq $t1, 1, Homem
beq $t1, 2, Mulher
    
Homem:
addi $t4, $t4, 1  #contador homem
j Exit
    
Mulher:
li $t6, 70  #70kg
blt $t2, $t6, Mulher70
j Exit
    
Mulher70:
addi $t5, $t5, 1  #contador mulheres < 70
j Exit
    
Exit:
addi $t0, $t0, 1  #contando pessoas
bne $t0, 8, loop

li $v0, 4
la $a0, NumHomem
syscall

li $v0, 1
move $a0, $t4
syscall

li $v0, 4
la $a0, NumMulher
syscall

li $v0, 1
move $a0, $t5
syscall

li $v0, 10
syscall
