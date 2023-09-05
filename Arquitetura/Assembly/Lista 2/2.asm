.data
EntradaHora: .asciiz "Digite a hora: "
EntradaMin: .asciiz "Digite os minutos: "
msgA: .asciiz "\nA hora convertida em minutos eh: "
msgB: .asciiz "\nTotal de minutos eh: "
msgC: .asciiz "\nMinutos convertidos em segundos: "

.text

li $v0,4
la $a0, EntradaHora
syscall

li $v0, 5
syscall
move $t0,$v0

li $v0, 4
la $a0, EntradaMin
syscall

li $v0, 5
syscall
move $t1,$v0

mul $s0, $t0, 60
add $s1, $s0, $t1
mul $s2, $s1, 60

li $v0, 4
la $a0, msgA
syscall 

li $v0, 1
la $a0,($s0)
syscall

li $v0,4
la $a0, msgB
syscall 

li $v0, 1
la $a0,($s1)
syscall

li $v0,4
la $a0, msgC
syscall 

li $v0, 1
la $a0,($s2)
syscall

li $v0, 10
syscall


