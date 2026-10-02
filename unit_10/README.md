# 📘 Unidade 10 — Resolução de problemas em C e prática no Beecrowd

[Índice](../README.md) · [Anterior](../unit_09/README.md)

## 🪪 Identificação

ATP I · Bacharelado em Engenharia de Software · IFG — Câmpus Inhumas

## 🎯 Objetivos

Integrar sequência, decisões e laços; cumprir contratos de entrada e saída.

## 🧠 Conteúdo

Em um juiz automático, o programa lê os dados no formato do enunciado e produz exatamente a saída solicitada. Mensagens como “digite um número” podem invalidar a resposta. Respeite casas decimais, espaços, letras e quebras de linha.

Antes de programar, identifique domínio das entradas, restrições, fórmula e casos especiais. Resolva um exemplo manualmente. Depois implemente e compare saída esperada e obtida. Uma resposta aceita confirma os testes do juiz, mas a análise de legibilidade e entendimento continua necessária.

Pratique no Beecrowd por temas: entrada/saída e aritmética; decisões; repetição. Use os enunciados atuais da plataforma. As atividades abaixo são originais do material, sem reprodução de enunciados de terceiros.

Projeto integrador: leia a quantidade N de estudantes e suas duas notas, valide valores de 0 a 10, calcule a média individual e contabilize quantos atingiram média 6. Calcule ainda a média da turma e o maior resultado. Não é necessário armazenar todas as notas: atualize os totais durante a leitura. Esse projeto consolida o plano sem exigir vetores ou funções adicionais.

## 🧪 Exemplo em pseudocódigo

```text
ler n
se n <= 0 então
  escrever "Quantidade inválida"
senão
  total ← 0
  atingiram ← 0
  para i de 1 até n faça
    ler n1, n2 // validar antes de prosseguir
    media ← (n1 + n2) / 2
    total ← total + media
    se media >= 6 então
      atingiram ← atingiram + 1
    fimse
  fimpara
  escrever total / n, atingiram
fimse
```

## 🔍 Teste de mesa comentado

N=2; notas (6,8) e (3,5): médias 7 e 4; turma=5,5; meta atingida=1

Reexecute instrução por instrução e registre em uma tabela as variáveis alteradas. Antes de executar no computador, preveja a saída.

## 📝 Lista de exercícios

1. Leia A e B e imprima apenas a soma seguida de quebra de linha.
2. Calcule média ponderada de duas notas com pesos 3 e 7 e uma casa decimal.
3. Calcule troco em centavos e decomponha nas denominações 100, 50, 25, 10, 5 e 1.
4. Classifique um inteiro e imprima uma única palavra definida no contrato.
5. Conte quantos de N valores estão no intervalo fechado de 10 a 20.
6. Calcule média de notas válidas, repetindo a leitura de notas fora de 0 a 10.
7. Determine o maior e o menor de N valores com N positivo.
8. Processe operações de calculadora até a opção de saída.
9. Resolva três problemas atuais do Beecrowd, um de cada tema, e registre seus identificadores.
10. Implemente o projeto integrador e teste turma unitária, todas as médias abaixo de 6 e notas nos limites 0 e 10.

## ✅ Roteiro de prática

1. Identifique entradas, saídas e pré-condições.
2. Elabore o algoritmo e faça um teste de mesa.
3. Implemente os recursos já estudados.
4. Teste um caso típico, um limite válido e uma entrada inválida quando aplicável.
5. Explique uma decisão da sua solução e revise os nomes e a indentação.

## 🌐 Complemente seu estudo

Consulte a bibliografia do [plano](../docs/PLANO_E_ALINHAMENTO.md) pelo tema desta unidade. Ao usar material externo, confira a sintaxe da ferramenta e implemente a solução por conta própria.

Os [exemplos em C](./exemplos/) apoiam a transcrição; a apresentação sistemática do ambiente está na Unidade 09.
