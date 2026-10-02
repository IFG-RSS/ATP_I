# 📘 Unidade 06 — Seleção composta, encadeada e múltipla

[Índice](../README.md) · [Anterior](../unit_05/README.md) · [Próxima](../unit_07/README.md)

## 🪪 Identificação

ATP I · Bacharelado em Engenharia de Software · IFG — Câmpus Inhumas

## 🎯 Objetivos

Escolher caminhos mutuamente exclusivos e tratar entradas inválidas.

## 🧠 Conteúdo

A seleção composta tem dois caminhos: `se` e `senão`. A seleção encadeada avalia alternativas em ordem. Uma condição mais abrangente pode impedir o alcance de outra: organize os intervalos com cuidado.

Use seleção múltipla quando uma expressão discreta determina alternativas. Em C, `switch` admite valores inteiros e caracteres, com rótulos `case` constantes. `break` encerra o caso; sua ausência pode fazer a execução continuar no próximo. `default` trata valores não previstos.

Exemplo de classificação didática de notas: rejeite valores fora de 0 a 10; em seguida, nota maior ou igual a 6 gera “meta atingida”, caso contrário “revisar conteúdo”. Esse limiar é apenas um exercício e não substitui regras institucionais.

Teste a validade de uma operação antes de executá-la. Em uma calculadora, a divisão exige divisor diferente de zero.

## 🧪 Exemplo em pseudocódigo

```text
ler nota
se nota < 0 ou nota > 10 então
  escrever "Nota inválida"
senão se nota >= 6 então
  escrever "Meta atingida"
senão
  escrever "Revisar conteúdo"
fimse
```

## 🔍 Teste de mesa comentado

nota=6: válida, meta atingida; nota=5,9: revisar; nota=11: inválida

Reexecute instrução por instrução e registre em uma tabela as variáveis alteradas. Antes de executar no computador, preveja a saída.

## 📝 Lista de exercícios

1. Classifique um inteiro como positivo, negativo ou zero.
2. Mostre o maior de dois números e trate igualdade.
3. Mostre o maior de três números.
4. Ordene três números em ordem crescente.
5. Classifique uma nota usando os critérios didáticos da unidade.
6. Crie uma calculadora com soma, subtração, multiplicação e divisão.
7. Converta um número de 1 a 7 em dia da semana com seleção múltipla.
8. Verifique se três medidas positivas formam um triângulo.
9. Classifique um triângulo válido em equilátero, isósceles ou escaleno.
10. Verifique ano bissexto: divisível por 400 ou divisível por 4 e não por 100.

## ✅ Roteiro de prática

1. Identifique entradas, saídas e pré-condições.
2. Elabore o algoritmo e faça um teste de mesa.
3. Implemente os recursos já estudados.
4. Teste um caso típico, um limite válido e uma entrada inválida quando aplicável.
5. Explique uma decisão da sua solução e revise os nomes e a indentação.

## 🌐 Complemente seu estudo

Consulte a bibliografia do [plano](../docs/PLANO_E_ALINHAMENTO.md) pelo tema desta unidade. Ao usar material externo, confira a sintaxe da ferramenta e implemente a solução por conta própria.

Os [exemplos em C](./exemplos/) apoiam a transcrição; a apresentação sistemática do ambiente está na Unidade 09.
