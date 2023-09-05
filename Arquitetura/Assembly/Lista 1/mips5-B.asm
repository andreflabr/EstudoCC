li $t0, 1
li $s0, 1
li $s1, 2

ble $s0, $s1, label
add $s0, $s0, $t0
j Exit
label: sub $s1, $s1, $t0

Exit:
