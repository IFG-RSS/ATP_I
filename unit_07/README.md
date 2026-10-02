# 📘 Unidade 07 — Repetição com teste no início e no final

[Índice](../README.md) · [Anterior](../unit_06/README.md) · [Próxima](../unit_08/README.md)

## 🪪 Identificação

ATP I · Bacharelado em Engenharia de Software · IFG — Câmpus Inhumas

## 🎯 Objetivos

Controlar laços, contadores, acumuladores e sentinelas.

## 🧠 Conteúdo

Um laço repete um bloco enquanto determinada condição permite a continuidade. O `enquanto` testa antes de executar: pode executar zero vezes. O `repita ... até` executa antes de testar: executa pelo menos uma vez e termina quando a condição é verdadeira.

Em C, `while` corresponde ao teste no início. `do ... while` repete enquanto a condição é verdadeira, portanto tem condição de continuidade, diferente do `até` do pseudocódigo.

Um contador registra quantidade de ocorrências. Um acumulador reúne resultados, como uma soma. Inicialize ambos antes do laço. Uma sentinela encerra a entrada e não deve ser incorporada ao cálculo. Para média, verifique se houve pelo menos um valor.

Todo laço precisa de uma possibilidade de progresso: atualizar o contador ou ler um novo valor. Uma condição que nunca se torna falsa causa repetição indefinida.

## 🧪 Exemplo em pseudocódigo

```text
soma ← 0
quantidade ← 0
ler valor
enquanto valor != -1 faça
  soma ← soma + valor
  quantidade ← quantidade + 1
  ler valor
fimenquanto
se quantidade > 0 então
  escrever soma / quantidade
senão
  escrever "Nenhum dado"
fimse
```

## 🔍 Teste de mesa comentado

entrada 4, 8, -1: soma 0→4→12; quantidade 0→1→2; média=6

Reexecute instrução por instrução e registre em uma tabela as variáveis alteradas. Antes de executar no computador, preveja a saída.

## 📝 Lista de exercícios

1. Mostre os inteiros de 1 a 10 com enquanto.
2. Some os inteiros de 1 a N para N positivo.
3. Leia valores até zero e mostre a soma, excluindo zero.
4. Leia notas válidas até -1 e calcule a média.
5. Conte positivos e negativos até a sentinela zero.
6. Leia uma nota até que esteja entre 0 e 10.
7. Crie um menu que repita até a opção de saída.
8. Determine o maior valor de uma sequência não vazia encerrada por zero.
9. Calcule o número de algarismos de um inteiro positivo por divisões sucessivas.
10. Faça o teste de mesa de um laço cuja primeira entrada já é a sentinela.

## ✅ Roteiro de prática

1. Identifique entradas, saídas e pré-condições.
2. Elabore o algoritmo e faça um teste de mesa.
3. Implemente os recursos já estudados.
4. Teste um caso típico, um limite válido e uma entrada inválida quando aplicável.
5. Explique uma decisão da sua solução e revise os nomes e a indentação.

## 🌐 Complemente seu estudo

Consulte a bibliografia do [plano](../docs/PLANO_E_ALINHAMENTO.md) pelo tema desta unidade. Ao usar material externo, confira a sintaxe da ferramenta e implemente a solução por conta própria.

Os [exemplos em C](./exemplos/) apoiam a transcrição; a apresentação sistemática do ambiente está na Unidade 09.
