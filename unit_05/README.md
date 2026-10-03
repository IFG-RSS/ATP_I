# 📘 Unidade 05 — Expressões relacionais, lógicas e seleção simples

[Índice](../README.md) · [Anterior](../unit_04/README.md) · [Próxima](../unit_06/README.md)

## 🪪 Identificação

ATP I · Bacharelado em Engenharia de Software · IFG — Câmpus Inhumas

## 🎯 Objetivos

Avaliar condições e construir decisões simples.

## 🧠 Conteúdo

Operadores relacionais comparam valores: igual, diferente, menor, maior, menor ou igual e maior ou igual. Uma expressão lógica produz verdadeiro ou falso. `e` exige duas condições verdadeiras; `ou` exige pelo menos uma; `não` inverte o resultado.

| A | B | A e B | A ou B |
|---|---|---|---|
| falso | falso | falso | falso |
| falso | verdadeiro | falso | verdadeiro |
| verdadeiro | falso | falso | verdadeiro |
| verdadeiro | verdadeiro | verdadeiro | verdadeiro |

A seleção simples executa um bloco somente quando a condição é verdadeira. Em C, use `if`, comparações `==`, `!=`, `<`, `>`, `<=`, `>=` e operadores `&&`, `||`, `!`. `=` atribui: não o confunda com `==`.

Para verificar um intervalo em C, escreva `x >= 0 && x <= 10`. A expressão `0 <= x <= 10` não verifica o intervalo como na matemática. `&&` e `||` fazem avaliação de curto-circuito: o segundo operando só é avaliado quando necessário.

## 🧪 Exemplo em pseudocódigo

```text
ler valor
se valor < 0 então
  escrever "Valor negativo"
fimse
escrever "Fim"
```

## 🔍 Teste de mesa comentado

| Caso | valor | valor < 0 | Ação |
| --- | --- | --- | --- |
| 1 | -3 | Verdadeiro | Exibir Valor negativo |
| 1 | -3 | — | Exibir Fim |
| 2 | 2 | Falso | Não executar o bloco da seleção |
| 2 | 2 | — | Exibir Fim |

Acompanhe cada etapa e confira os valores antes de executar no computador. O símbolo **—** indica um valor ainda não definido ou uma operação não realizada nessa etapa.

## 📝 Lista de exercícios

1. Escreva uma condição que identifique um inteiro positivo.
2. Verifique se um inteiro é par.
3. Exiba aviso se uma nota estiver fora do intervalo de 0 a 10.
4. Exiba alerta quando estoque for menor que 5.
5. Verifique se uma idade pertence ao intervalo de 18 a 60, inclusive.
6. Monte a tabela-verdade de não(A e B).
7. Determine se um número é divisível por 3 e por 5.
8. Exiba aviso se a temperatura estiver abaixo de 10 ou acima de 35.
9. Aplique desconto de 5% somente para compras acima de 100.
10. Faça testes de fronteira para a condição de desconto: 99,99; 100; 100,01.

## ✅ Roteiro de prática

1. Identifique entradas, saídas e pré-condições.
2. Elabore o algoritmo e faça um teste de mesa.
3. Implemente os recursos já estudados.
4. Teste um caso típico, um limite válido e uma entrada inválida quando aplicável.
5. Explique uma decisão da sua solução e revise os nomes e a indentação.

## 🌐 Complemente seu estudo

Consulte a bibliografia do [plano](../docs/PLANO_E_ALINHAMENTO.md) pelo tema desta unidade. Ao usar material externo, confira a sintaxe da ferramenta e implemente a solução por conta própria.

Os [exemplos em C](./exemplos/) apoiam a transcrição; a apresentação sistemática do ambiente está na Unidade 09.
