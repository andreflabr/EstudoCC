li $s0, 2 #a
li $s1, 4 #b
li $t4, 2 #temp

mul $s2, $t4, $s1 #2b
add $s2, $s0, $s2 #a+2b
mul $t1, $s2, $s2 #t0^2
mul $s2, $t1, $s2 #t0^3