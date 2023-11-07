create database padaria;

use padaria;

create table cozinheiro (
id_cozinheiro int not null,
nome varchar (45),
primary key (id_cozinheiro)
);

create table prato(
id_prato int not null,
nome_prato varchar(45),
id_cozinheiro int,
primary key (id_prato),
foreign key (id_cozinheiro) references cozinheiro(id_cozinheiro)
);

create table ingrediente(
id_ingrediente int not null,
nome_ingrediente varchar (45),
primary key (id_ingrediente)
);

create table receita(
id_prato int not null,
id_ingrediente int not null,
foreign key (id_prato) references prato (id_prato),
foreign key (id_ingrediente) references ingrediente (id_ingrediente)
);

insert into cozinheiro values (1, 'joao');
insert into prato values (1,'coxinha', 1);
insert into ingrediente values (1, 'ovo');
insert into ingrediente values (2, 'farinha');

insert into receita values (1,1);
insert into receita values (1,2);

select * from cozinheiro;
select * from prato;
select * from ingrediente;
select * from receita;











