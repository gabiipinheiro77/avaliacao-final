# avaliacao-final
# Sistema de Cadastro de Estudantes
## Nome do aluno:

Gabriela Rocha Pinheiro

## Nome do curso:

Técnico em Informática para Internet

Unidade curricular

UC 6: Desenvolver algoritmos

## Descrição do sistema:

O projeto consiste em um Sistema de Cadastro de Estudantes desenvolvido em C++. O programa permite cadastrar até 10 alunos, armazenando nome, matrícula e quatro notas de cada estudante. Com base nas notas, o sistema calcula automaticamente a média e informa a situação do aluno, podendo ser Aprovado, Recuperação ou Reprovado.

##  O sistema possui um menu interativo com as seguintes funcionalidades:

Cadastrar aluno;

Listar todos os estudantes cadastrados;

Consultar notas por matrícula;

Consultar situação do aluno;

Encerrar o programa.

O objetivo do sistema é facilitar o gerenciamento das informações dos estudantes e automatizar o cálculo das médias e da situação escolar.
Decisões técnicas:

Foi utilizada a linguagem C++ .
O menu principal é executado em um laço while, permitindo que o usuário utilize o sistema até escolher a opção de saída.
Foram utilizados vetores para armazenar nomes, matrículas, médias e situações dos alunos.
Foi utilizada uma matriz para armazenar as quatro notas de cada estudante.
Estruturas while foram utilizadas para percorrer os vetores e validar as notas informadas.
Estruturas condicionais if e else são responsáveis por determinar a situação do aluno com base em sua média.
As variáveis possuem nomes descritivos, facilitando a leitura e manutenção do código.
O sistema limita o cadastro a 10 alunos, evitando o acesso a posições inválidas dos vetores.
As notas são validadas para garantir que estejam no intervalo de 0 a 10.

## Funcionalidades do sistema:

Cadastro de estudantes.

Armazenamento de nome, matrícula e notas.

Cálculo automático da média.

Classificação do aluno em Aprovado, Recuperação ou Reprovado.

Consulta das notas por matrícula.

Consulta da situação do aluno.

Listagem completa dos estudantes cadastrados.

Tecnologias utilizadas

Linguagem C++

Biblioteca <iostream>

Biblioteca <string>
