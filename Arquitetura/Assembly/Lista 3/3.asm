
.data
msg1: .asciiz "\nEntre com o valor n: "
msg2: .asciiz "\nEntre com um valor para verificar se e par: "
resultado: .asciiz "\nTemos essa quantidade de pares:" 

.text
	li $v0,4
	la $a0, msg1
	syscall

	li $v0,5
	syscall
	move $a0,$v0
	
	jal calculaPares

	li $v0,4
	la $a0, resultado
	syscall
	
	li $v0,1
	la $a0,($v1)
	syscall

li $v0, 10
syscall

calculaPares:
	addi $sp, $sp, -16 # cria espa�o para 3 itens na pilha
	sw $t2, 12($sp) # empilha $t2
	sw $t1, 8($sp) # empilha $t1
	sw $t0, 4($sp) # empilha $t2
	sw $s0, 0($sp) # empilha $s0
	li $s0,0 #conta pares
	move $t2,$a0
	for:
		subi $t2,$t2,1
		beq $t2,-1,sair
		li $v0,4
		la $a0, msg2
		syscall

		li $v0,5
		syscall
		move $t0,$v0
		rem $t1,$t0,2
		beq $t1,0,par
		j for
		par:
			add $s0,$s0,1
			j for
	sair: 
	move $v1,$s0
	
	lw $s0, 0($sp) # desempilha $s0
	lw $t0, 4($sp) # desempilha $t0
	lw $t1, 8 ($sp) # desempilha $t1
	lw $t2, 12($sp) # desempilha $t2
	addi $sp, $sp, 16 # remove 4 itens da pilha
	jr $ra