use aulabdi;

-- querys
select * from funcionarios;

/* 18 */ 
select nome, salario, (salario * 1.2) 
from funcionarios;

/* 17 */ 
select nome 
from funcionarios 
where (admissao <= '2010-12-31') 
and funcao 
in ('PROGRAMADOR','supervisor');

/* 16 */ 
select nome 
from funcionarios 
where (admissao >= '2000-01-01');

/* 15 */ 
select nome 
from funcionarios 
where funcao 
in ('supervisor','supervisora') 
and salario <= 2100;

/* 14 */ 
select nome 
from funcionarios 
where funcao 
in ('vendedor','vendedora');
