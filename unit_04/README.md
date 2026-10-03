# 📘 Unidade 04 — Estrutura sequencial, entrada, saída e testes de mesa

[Índice](../README.md) · [Anterior](../unit_03/README.md) · [Próxima](../unit_05/README.md)

## 🪪 Identificação

ATP I · Bacharelado em Engenharia de Software · IFG — Câmpus Inhumas

## 🎯 Objetivos

Construir algoritmos sequenciais com leitura, atribuição e saída.

## 🧠 Conteúdo

Na estrutura sequencial, as instruções são executadas na ordem em que aparecem. Alterar a ordem pode alterar o resultado. A leitura recebe valores externos; a atribuição armazena o resultado de uma expressão; a saída comunica o resultado.

Um algoritmo deve especificar unidades e formato de saída. Para uma velocidade média, distância e tempo precisam ser compatíveis. Evite dividir por zero: nesta unidade, indique a pré-condição tempo positivo; na unidade de seleção, implemente a validação.

Em C, `printf` produz saída e `scanf` lê valores formatados. Para `int`, use `%d`; para leitura de `double`, `%lf`; para impressão de `double`, `%f`. O endereço `&variavel` permite que `scanf` armazene o valor. Confira seu retorno para detectar falhas de leitura. `%.2f` imprime duas casas decimais.

Teste valores típicos e casos de fronteira permitidos pelo enunciado. O programa compilar não garante que sua fórmula esteja correta.

## 🧪 Exemplo em pseudocódigo

```text
declarar distancia, tempo, velocidade: real
ler distancia, tempo
// pré-condição: tempo > 0
velocidade ← distancia / tempo
escrever velocidade
```

## 🔍 Teste de mesa comentado

| Etapa | distancia (km) | tempo (h) | velocidade (km/h) | Saída |
| --- | --- | --- | --- | --- |
| Ler distância e tempo | 150 | 2 | — | — |
| Calcular distancia / tempo | 150 | 2 | 75 | — |
| Escrever velocidade | 150 | 2 | 75 | 75 |

Acompanhe cada etapa e confira os valores antes de executar no computador. O símbolo **—** indica um valor ainda não definido ou uma operação não realizada nessa etapa.

## 📝 Lista de exercícios

1. Leia dois inteiros e apresente soma, diferença e produto.
2. Calcule a média aritmética de três notas.
3. Calcule a média ponderada com pesos 2, 3 e 5.
4. Calcule área e perímetro de um retângulo.
5. Converta temperatura de Celsius para Fahrenheit.
6. Calcule velocidade média para tempo positivo.
7. Calcule o total de uma compra com quantidade e preço unitário.
8. Calcule salário bruto a partir de horas e valor da hora.
9. Calcule o volume de uma caixa retangular.
10. Faça o teste de mesa da troca de valores entre duas variáveis.

## ✅ Roteiro de prática

1. Identifique entradas, saídas e pré-condições.
2. Elabore o algoritmo e faça um teste de mesa.
3. Implemente os recursos já estudados.
4. Teste um caso típico, um limite válido e uma entrada inválida quando aplicável.
5. Explique uma decisão da sua solução e revise os nomes e a indentação.

## 🌐 Complemente seu estudo

Consulte a bibliografia do [plano](../docs/PLANO_E_ALINHAMENTO.md) pelo tema desta unidade. Ao usar material externo, confira a sintaxe da ferramenta e implemente a solução por conta própria.

Os [exemplos em C](./exemplos/) apoiam a transcrição; a apresentação sistemática do ambiente está na Unidade 09.
