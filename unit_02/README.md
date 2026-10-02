# 📘 Unidade 02 — Representação de algoritmos e Português Estruturado

[Índice](../README.md) · [Anterior](../unit_01/README.md) · [Próxima](../unit_03/README.md)

## 🪪 Identificação

ATP I · Bacharelado em Engenharia de Software · IFG — Câmpus Inhumas

## 🎯 Objetivos

Representar soluções em linguagem natural, fluxograma e pseudocódigo; executar testes de mesa.

## 🧠 Conteúdo

Linguagem natural é acessível, mas pode ser ambígua. Um fluxograma representa o fluxo por símbolos: início/fim, processamento, entrada/saída e decisão. Pseudocódigo descreve a lógica com comandos estruturados sem depender de uma linguagem de máquina.

Portugol é uma família de notações e ferramentas, não uma sintaxe universal. Neste material, os blocos `text` são pseudocódigo didático: `ler`, `escrever`, `←`, `se`, `enquanto` e `para`. Adapte-os à ferramenta adotada em aula. A atribuição `x ← 5` altera o valor de x; uma comparação verifica uma relação.

O teste de mesa simula cada instrução, registrando os valores das variáveis e as saídas. Não execute mentalmente várias linhas de uma vez. Registre cada atribuição e cada condição, inclusive quando ela é falsa.

## 🧪 Exemplo em pseudocódigo

```text
algoritmo Media
  declarar n1, n2, media: real
  ler n1, n2
  media ← (n1 + n2) / 2
  escrever media
fim
```

## 🔍 Teste de mesa comentado

n1=6; n2=8; n1+n2=14; media=7

Reexecute instrução por instrução e registre em uma tabela as variáveis alteradas. Antes de executar no computador, preveja a saída.

## 📝 Lista de exercícios

1. Escreva em linguagem natural um algoritmo para calcular o dobro de um número.
2. Converta esse algoritmo em pseudocódigo.
3. Desenhe o fluxograma do cálculo da média de duas notas.
4. Faça o teste de mesa da média para 4 e 9.
5. Explique a diferença entre atribuição e comparação.
6. Localize a ambiguidade em “some os números e divida”.
7. Represente a conversão de Celsius para Fahrenheit: F=1,8C+32.
8. Faça o teste de mesa da conversão para C=0 e C=100.
9. Troque os valores de duas variáveis usando uma variável auxiliar.
10. Represente um cálculo de desconto de 10% e teste com preço 80.

## ✅ Roteiro de prática

1. Identifique entradas, saídas e pré-condições.
2. Elabore o algoritmo e faça um teste de mesa.
3. Implemente os recursos já estudados.
4. Teste um caso típico, um limite válido e uma entrada inválida quando aplicável.
5. Explique uma decisão da sua solução e revise os nomes e a indentação.

## 🌐 Complemente seu estudo

Consulte a bibliografia do [plano](../docs/PLANO_E_ALINHAMENTO.md) pelo tema desta unidade. Ao usar material externo, confira a sintaxe da ferramenta e implemente a solução por conta própria.
