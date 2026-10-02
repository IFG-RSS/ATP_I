"""Compila exemplos independentes e verifica casos didaticos."""
from pathlib import Path
import json, subprocess, tempfile
root = Path(__file__).resolve().parents[1]
cases = json.loads((root / 'verificacao/casos.json').read_text())
with tempfile.TemporaryDirectory() as directory:
    binaries = {}
    for case in cases:
        source = case['arquivo']
        if source not in binaries:
            binary = str(Path(directory) / str(len(binaries)))
            subprocess.run(['gcc', '-std=c11', '-Wall', '-Wextra', '-Wpedantic', '-Werror', str(root/source), '-o', binary], check=True)
            binaries[source] = binary
        result = subprocess.run([binaries[source]], input=case['entrada'], text=True, capture_output=True, timeout=3)
        assert result.stdout == case['saida'] and result.returncode == case['retorno'], (source, case, result.stdout, result.returncode)
print(f'{len(binaries)} programas compilados; {len(cases)} casos aprovados.')
