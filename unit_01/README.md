# 📘 Unidade 01 — Apresentação da disciplina e resolução de problemas

[Índice](../README.md) · [Próxima](../unit_02/README.md)

## 🪪 Identificação

ATP I · Bacharelado em Engenharia de Software · IFG — Câmpus Inhumas

## 🎯 Objetivos

Analisar problemas, identificar entradas e saídas e decompor uma solução em etapas.

## 🧠 Conteúdo

Um algoritmo é uma sequência finita e ordenada de instruções para resolver uma classe de problemas. Um programa implementa essas instruções em uma linguagem executável pelo computador. Antes de escrever código, determine o que será recebido, quais regras serão aplicadas e o que deverá ser apresentado.

Use quatro etapas: compreender o enunciado, planejar a solução, executar o plano e conferir o resultado. A decomposição divide um problema maior em tarefas menores. Na abordagem top-down, comece pela solução geral e detalhe cada etapa.

Exemplo: calcular o troco. Entradas: preço e pagamento. Processamento: pagamento menos preço. Saída: troco. Se o pagamento for insuficiente, a solução deverá tratar essa situação; essa regra será implementada com seleção nas próximas unidades.

Compilação traduz código-fonte para outra representação antes da execução. Interpretação executa instruções por meio de um interpretador. Essas estratégias podem ser combinadas. Em C, trabalharemos com edição, compilação e execução.

## 🧪 Exemplo em pseudocódigo

```text
ler preco
ler pagamento
troco ← pagamento - preco
escrever troco
```

## 🔍 Teste de mesa comentado

| Etapa | preco | pagamento | troco | Saída |
| --- | --- | --- | --- | --- |
| Ler preço | 18,50 | — | — | — |
| Ler pagamento | 18,50 | 20,00 | — | — |
| Calcular troco | 18,50 | 20,00 | 1,50 | — |
| Escrever troco | 18,50 | 20,00 | 1,50 | 1,50 |

Acompanhe cada etapa e confira os valores antes de executar no computador. O símbolo **—** indica um valor ainda não definido ou uma operação não realizada nessa etapa.

## 📝 Lista de exercícios

1. Defina algoritmo e dê um exemplo fora da computação.
2. Identifique entrada, processamento e saída no cálculo de uma média de três notas.
3. Descreva um algoritmo para preparar um café, incluindo decisões necessárias.
4. Decomponha o cálculo do valor de uma compra em etapas.
5. Explique por que instruções ambíguas dificultam a execução.
6. Identifique as regras que faltam no problema “calcule o salário”.
7. Proponha três casos de teste para um cálculo de troco.
8. Compare compilação e interpretação.
9. Descreva as etapas para resolver o cálculo da área de um retângulo.
10. Planeje um algoritmo para converter minutos em horas e minutos restantes.

## ✅ Roteiro de prática

1. Identifique entradas, saídas e pré-condições.
2. Elabore o algoritmo e faça um teste de mesa.
3. Implemente os recursos já estudados.
4. Teste um caso típico, um limite válido e uma entrada inválida quando aplicável.
5. Explique uma decisão da sua solução e revise os nomes e a indentação.

## 🌐 Complemente seu estudo

Consulte a bibliografia do [plano](../docs/PLANO_E_ALINHAMENTO.md) pelo tema desta unidade. Ao usar material externo, confira a sintaxe da ferramenta e implemente a solução por conta própria.
