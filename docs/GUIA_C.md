# Executar os exemplos em C

Com GCC disponível, a partir da raiz do repositório:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic unit_04/exemplos/velocidade.c -o /tmp/velocidade
/tmp/velocidade
```

Digite `150 2` e pressione Enter. A saída é `75.00`. Para números reais, use ponto decimal: `2.5`.

Cada arquivo é um programa independente. Não compile todos juntos: cada um possui sua própria função `main`. Os exemplos conferem a leitura e validam as pré-condições essenciais. Uma falha de leitura encerra o programa com código 1.

A pasta `verificacao` contém os casos usados para conferir os exemplos. Execute `python3 verificacao/verificar.py` a partir da raiz, com Python 3 e GCC disponíveis.

O projeto integrador usa mensagens para aprendizagem. Para um juiz automático, adapte a entrada e a saída ao enunciado, eliminando mensagens não solicitadas.
