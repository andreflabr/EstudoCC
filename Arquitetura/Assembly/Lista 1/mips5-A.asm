li $s0, 1
li $s1, 2

blt $s0, $s1, label
add $s0, $s0, $s1
j Exit
label: sub $s0, $s0, $s1

Exit:
