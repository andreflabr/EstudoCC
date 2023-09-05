li $s0, 1
li $s1, 1
li $s2, 1
li $s3, 1

#s0 == a
#s1 == b
#s2 == c
#s3 == d

sub $t0, $s0, $s1
add $t0, $s1, $t0
sub $t0, $t0, $s2
sub $t0, $s3, $t0
add $t0, $t0, $s1
add $t0, $t0, $s3