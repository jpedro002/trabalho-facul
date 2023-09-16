# Use a imagem oficial do Ubuntu como imagem base
FROM ubuntu:20.04

# Atualize os pacotes e instale as ferramentas e dependências necessárias
RUN apt-get update && apt-get install -y \
    openjdk-11-jdk \
    python3 \
    python3-pip \
    g++ \
    && rm -rf /var/lib/apt/lists/*

# Configure o ambiente, se necessário

# Defina o shell padrão como bash
ENV SHELL=/bin/bash

# Crie um usuário não root e mude para ele
RUN useradd -m -s /bin/bash vscode
USER vscode

# Defina o diretório de trabalho padrão para o diretório inicial do usuário
WORKDIR /home/vscode

# Comandos adicionais de configuração, se necessário

# Inicie um shell por padrão
CMD ["/bin/bash"]
