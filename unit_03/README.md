# 📘 Unidade 03 — Tipos de dados, variáveis, constantes e operadores

[Índice](../README.md) · [Anterior](../unit_02/README.md) · [Próxima](../unit_04/README.md)

## 🪪 Identificação

ATP I · Bacharelado em Engenharia de Software · IFG — Câmpus Inhumas

## 🎯 Objetivos

Escolher tipos, declarar variáveis e avaliar expressões aritméticas.

## 🧠 Conteúdo

Uma variável associa um nome a um valor que pode mudar. Uma constante representa um valor que não deve ser alterado. Os tipos básicos didáticos são inteiro, real, caractere, cadeia de caracteres e lógico. Escolha o tipo conforme os dados: quantidade inteira, medida real, resposta lógica.

Expressões aritméticas usam soma, subtração, multiplicação e divisão. O resto da divisão inteira será escrito `mod` no pseudocódigo e `%` em C. Parênteses deixam a intenção explícita. Multiplicação e divisão precedem soma e subtração.

Em C, `int` representa inteiros, `double` números de ponto flutuante e `char` um caractere. Strings exigem uma representação própria, estudada posteriormente. Com operandos inteiros, `5 / 2` resulta em 2. Para obter 2,5, use `5.0 / 2.0`. Ponto flutuante tem precisão limitada; valores monetários exatos podem ser representados em centavos inteiros.

Não use uma variável antes de inicializá-la. Uma expressão pode ultrapassar a faixa do tipo; os exercícios adotam entradas pequenas e indicam limites quando necessários.

## 🧪 Exemplo em pseudocódigo

```text
declarar segundos, horas, resto, minutos: inteiro
ler segundos
horas ← segundos div 3600
resto ← segundos mod 3600
minutos ← resto div 60
escrever horas, minutos, resto mod 60
```

## 🔍 Teste de mesa comentado

segundos=3671; horas=1; resto=71; minutos=1; segundos restantes=11

Reexecute instrução por instrução e registre em uma tabela as variáveis alteradas. Antes de executar no computador, preveja a saída.

## 📝 Lista de exercícios

1. Classifique idade, altura, inicial de nome e resposta sim/não por tipo.
2. Declare as variáveis necessárias para calcular a área de um círculo.
3. Calcule 2+3*4 e (2+3)*4, explicando a diferença.
4. Determine quociente e resto de 17 por 5.
5. Converta uma quantidade de segundos em horas, minutos e segundos.
6. Converta uma medida em metros para centímetros.
7. Calcule o preço final após desconto percentual informado.
8. Calcule o IMC para massa e altura positivas, sem classificação clínica.
9. Decomponha um inteiro de três algarismos em centenas, dezenas e unidades.
10. Compare a média de dois inteiros calculada por divisão inteira e real.

## ✅ Roteiro de prática

1. Identifique entradas, saídas e pré-condições.
2. Elabore o algoritmo e faça um teste de mesa.
3. Implemente os recursos já estudados.
4. Teste um caso típico, um limite válido e uma entrada inválida quando aplicável.
5. Explique uma decisão da sua solução e revise os nomes e a indentação.

## 🌐 Complemente seu estudo

Consulte a bibliografia do [plano](../docs/PLANO_E_ALINHAMENTO.md) pelo tema desta unidade. Ao usar material externo, confira a sintaxe da ferramenta e implemente a solução por conta própria.

Os [exemplos em C](./exemplos/) apoiam a transcrição; a apresentação sistemática do ambiente está na Unidade 09.
