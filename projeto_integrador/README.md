# Projeto integrador — Resumo de notas

## Objetivo

Aplicar leitura, tipos, sequência, decisões e repetição em um problema completo, sem vetores.

## Requisitos

1. Leia N inteiro, entre 1 e 10000.
2. Para cada estudante, leia duas notas reais entre 0 e 10. Se uma estiver fora da faixa, repita o par.
3. Apresente a média aritmética individual com duas casas decimais.
4. Ao final, apresente média da turma, maior média e quantidade de estudantes com média maior ou igual a 6.
5. Não inclua pares inválidos nos totais. Interrompa com retorno 1 quando a entrada não puder ser convertida.

A regra de média 6 é didática, não uma afirmação sobre aprovação institucional. As entradas numéricas dos exemplos devem ser finitas e representáveis nos tipos utilizados.

## Exemplo

Entrada:

```text
2
6 8
3 5
```

Saída:

```text
Estudante 1: 7.00
Estudante 2: 4.00
Media da turma: 5.50
Maior media: 7.00
Meta atingida: 1
```

## Entrega sugerida

Código `.c`, pseudocódigo, teste de mesa e registro de pelo menos quatro casos: turma com um estudante, notas 0 e 10, par inválido seguido de correção e vários estudantes.

## Critérios didáticos sugeridos

Correção das médias e totais; validação; término dos laços; clareza dos nomes; evidência dos testes. O docente define eventual peso e uso avaliativo.

## Solução de referência

Tente resolver antes de consultar [solucao_referencia.c](solucao_referencia.c). Ela acumula médias, conta resultados e atualiza o maior valor sem armazenar a turma.
