# Cadastro de Veículos

Programa criado para o cadastramento e exibição de veículos, por marca, modelo, ano de fabricação e placa.

## Autores

- [@felipepiresmorandini](https://www.github.com/FelipeMorandini)

## Funcionalidades

- Cadastramento de veículos com os atributos: marca, modelo, ano de fabricação
- Listagem de todos os veículos cadastrados
- Listagem de veículos fabricados em um ano específico
- Listagem de veículos por ano de fabricação mínimo
- Listagem de veículos por modelo

## Tecnologia Utilizada

C

## Estrutura do Projeto

```
cadastro-de-veiculos/
├── include/
│ ├── io.h
│ ├── vehicle.h
│ ├── vehicle_manager.h
│ └── utils.h
├── src/
│ ├── io.c
│ ├── main.c
│ ├── utils.c
│ ├── vehicle.c
│ └── vehicle_manager.c
├── build/
│ └── ... (arquivos objeto)
├── bin/
│ └── vehicle_manager (executável)
├── Makefile
├── README.md
└── LICENSE
```

## Compilação e Execução

### Pré-requisitos

- GCC (GNU Compiler Collection) instalado no seu sistema

### Compilando o Projeto

1. Navegue até o diretório do projeto:

```bash
cd cadastro-de-veiculos
```

2. Compile o projeto usando o Make:

```bash
make
```

Isso criará os diretórios necessários (build e bin) e compilará os arquivos fonte em um executável chamado vehicle_manager no diretório bin.

### Executando o Aplicativo

Para executar o Gerenciador de Veículos, execute o seguinte comando a partir do diretório raiz do projeto:

```bash
./bin/vehicle_manager
```

O aplicativo exibirá um menu com as opções disponíveis. Siga as instruções para realizar as ações desejadas.

### Limpando a Compilação

Para limpar os artefatos de compilação (arquivos objeto e executável), execute:

```bash
make clean
```

Isso removerá os diretórios build e bin.