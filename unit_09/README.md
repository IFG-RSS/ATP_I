# 📘 Unidade 09 — Introdução à linguagem C e ambiente de desenvolvimento

[Índice](../README.md) · [Anterior](../unit_08/README.md) · [Próxima](../unit_10/README.md)

## 🪪 Identificação

ATP I · Bacharelado em Engenharia de Software · IFG — Câmpus Inhumas

## 🎯 Objetivos

Transcrever algoritmos para C, compilar, executar e depurar.

## 🧠 Conteúdo

Um programa C mínimo contém inclusões necessárias e a função `int main(void)`. Instruções terminam com ponto e vírgula; blocos usam chaves. Comentários podem usar `//` ou `/* ... */`.

O fluxo de trabalho é escrever o arquivo `.c`, compilar, interpretar os diagnósticos e executar. Em um ambiente com GCC instalado, use `gcc -std=c11 -Wall -Wextra -Wpedantic programa.c -o programa`. Em Linux, execute `./programa`. Os nomes e a instalação das ferramentas dependem do sistema operacional.

Erros sintáticos impedem a tradução correta do código. Erros lógicos podem produzir resultados incorretos mesmo quando o programa compila. Alguns erros de execução, como divisão inteira por zero, tornam o comportamento inválido. Use entradas pequenas e acompanhe o estado das variáveis.

Na leitura, `scanf("%lf", &valor)` espera um `double`. Se forem solicitados dois valores, seu retorno deve ser 2. Para simplificar os exemplos, uma entrada malformada encerra o programa com código diferente de zero. Cada exemplo pode ser compilado separadamente.

## 🧪 Exemplo em pseudocódigo

```text
ler a, b
soma ← a + b
escrever soma
```

## 🔍 Teste de mesa comentado

| Etapa | a | b | soma | Saída |
| --- | --- | --- | --- | --- |
| Ler valores | 2,5 | 3,5 | — | — |
| Calcular a + b | 2,5 | 3,5 | 6 | — |
| Escrever soma | 2,5 | 3,5 | 6 | 6 |

Acompanhe cada etapa e confira os valores antes de executar no computador. O símbolo **—** indica um valor ainda não definido ou uma operação não realizada nessa etapa.

## 📝 Lista de exercícios

1. Compile e execute o exemplo de boas-vindas.
2. Altere o texto apresentado e compile novamente.
3. Implemente a soma de dois números reais.
4. Transcreva a conversão de temperatura para C.
5. Compare a saída de 5/2 com 5.0/2.0.
6. Introduza um ponto e vírgula ausente e interprete o diagnóstico.
7. Leia um caractere com `scanf(" %c", &letra)` e explique o espaço antes de `%c`.
8. Transcreva a classificação de positivo, negativo ou zero.
9. Implemente a média de N valores com for.
10. Registre entrada, saída esperada e saída obtida de três testes.

## ✅ Roteiro de prática

1. Identifique entradas, saídas e pré-condições.
2. Elabore o algoritmo e faça um teste de mesa.
3. Implemente os recursos já estudados.
4. Teste um caso típico, um limite válido e uma entrada inválida quando aplicável.
5. Explique uma decisão da sua solução e revise os nomes e a indentação.

## 🌐 Complemente seu estudo

Consulte a bibliografia do [plano](../docs/PLANO_E_ALINHAMENTO.md) pelo tema desta unidade. Ao usar material externo, confira a sintaxe da ferramenta e implemente a solução por conta própria.

Compile e execute os [exemplos em C](./exemplos/) seguindo o [guia de execução](../docs/GUIA_C.md).
