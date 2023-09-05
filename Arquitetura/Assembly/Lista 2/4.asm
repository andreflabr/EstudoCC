.data
msgEntrada: .asciiz "Digite a idade da pessoa: "
msgAbaixo: .asciiz "\nNao eleitor"
msgObrigatorio: .asciiz "\nEleitor obrigatorio"
msgFacultativo: .asciiz "\nEleitor facultativo"

.text

li $v0, 4
la $a0, msgEntrada
syscall

li $v0, 5
syscall
move $t0,$v0

blt $t0, 16, NaoEleitor

ble $t0, 16, Facultativo
blt $t0, 18, Facultativo

ble $t0, 18, Obrigatorio
blt $t0, 65, Obrigatorio

bge $t0, 65, Facultativo
j Exit

NaoEleitor:
li $v0, 4
la $a0, msgAbaixo
syscall
j Exit

Facultativo:
li $v0, 4
la $a0, msgFacultativo
syscall
j Exit

Obrigatorio:
li $v0, 4
la $a0, msgObrigatorio
syscall
j Exit


Exit:
li $v0, 10
syscall
