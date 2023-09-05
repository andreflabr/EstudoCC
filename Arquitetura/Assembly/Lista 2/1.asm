.data
msg1: .asciiz "Digite o peso em kg:\n"
msg2: .asciiz "O peso em gramas eh: "

.text
li $v0,4
la $a0, msg1
syscall

li $v0, 5
syscall
move $t0,$v0

mul $t1, $t0, 1000

li $v0,4
la $a0, msg2
syscall 

li $v0, 1
la $a0,($t1)
syscall 

li $v0, 10
syscall
