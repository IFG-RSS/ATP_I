# 📘 Unidade 08 — Repetição contada e laços aninhados

[Índice](../README.md) · [Anterior](../unit_07/README.md) · [Próxima](../unit_09/README.md)

## 🪪 Identificação

ATP I · Bacharelado em Engenharia de Software · IFG — Câmpus Inhumas

## 🎯 Objetivos

Usar repetição contada, combinar laços e testar limites.

## 🧠 Conteúdo

Use `para` quando a quantidade de repetições é conhecida. Em C, `for` reúne inicialização, condição e atualização: `for (int i=1; i<=n; i++)`. A condição é verificada antes de cada passagem. Para percorrer N posições a partir de zero, use `i < N`.

Laços aninhados colocam uma repetição dentro de outra. O laço interno executa novamente para cada passagem do externo. Para três linhas e quatro colunas, o corpo interno executa 12 vezes.

O fatorial de N é o produto dos inteiros de 1 até N e 0! vale 1. Inicialize o produto em 1. Em C, limite o exemplo a 0..20 usando `unsigned long long`, que comporta 20! nas implementações usuais com pelo menos 64 bits.

Para verificar primalidade, números menores que 2 não são primos. Procure um divisor; basta testar até a raiz quadrada. A condição inteira `d <= n/d`, com n e d positivos, evita multiplicar d por d e ultrapassar a faixa do tipo.

## 🧪 Exemplo em pseudocódigo

```text
ler n
produto ← 1
para i de 1 até n faça
  produto ← produto * i
fimpara
escrever produto
```

## 🔍 Teste de mesa comentado

| Etapa | n | i | produto | Saída |
| --- | --- | --- | --- | --- |
| Inicializar | 4 | — | 1 | — |
| Primeira repetição | 4 | 1 | 1 | — |
| Segunda repetição | 4 | 2 | 2 | — |
| Terceira repetição | 4 | 3 | 6 | — |
| Quarta repetição | 4 | 4 | 24 | — |
| Encerrar e escrever | 4 | — | 24 | 24 |
| Caso n = 0: não executar o laço | 0 | — | 1 | 1 |

Acompanhe cada etapa e confira os valores antes de executar no computador. O símbolo **—** indica um valor ainda não definido ou uma operação não realizada nessa etapa.

## 📝 Lista de exercícios

1. Mostre a tabuada de um inteiro de 1 a 10.
2. Calcule o fatorial para N de 0 a 20.
3. Some apenas os pares entre 1 e N.
4. Leia N valores e calcule média, maior e menor.
5. Conte os divisores positivos de N.
6. Determine se um inteiro é primo.
7. Mostre os primos entre 2 e 100.
8. Imprima um retângulo de asteriscos com L linhas e C colunas.
9. Imprima um triângulo de asteriscos com N linhas.
10. Calcule os N primeiros termos de Fibonacci, limitando N a 40.

## ✅ Roteiro de prática

1. Identifique entradas, saídas e pré-condições.
2. Elabore o algoritmo e faça um teste de mesa.
3. Implemente os recursos já estudados.
4. Teste um caso típico, um limite válido e uma entrada inválida quando aplicável.
5. Explique uma decisão da sua solução e revise os nomes e a indentação.

## 🌐 Complemente seu estudo

Consulte a bibliografia do [plano](../docs/PLANO_E_ALINHAMENTO.md) pelo tema desta unidade. Ao usar material externo, confira a sintaxe da ferramenta e implemente a solução por conta própria.

Os [exemplos em C](./exemplos/) apoiam a transcrição; a apresentação sistemática do ambiente está na Unidade 09.
