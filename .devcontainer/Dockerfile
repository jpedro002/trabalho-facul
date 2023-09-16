# Use a imagem base que inclui Java, Python e C
FROM ubuntu:latest

# Atualize o sistema e instale as ferramentas de desenvolvimento C
RUN apt-get update && apt-get install -y build-essential

# Instale o OpenJDK (Java)
RUN apt-get install -y openjdk-11-jdk

# Instale o Python 3 e o gerenciador de pacotes pip
RUN apt-get install -y python3 python3-pip

# Defina uma variável de ambiente para o Java
ENV JAVA_HOME /usr/lib/jvm/java-11-openjdk-amd64

# Defina uma variável de ambiente para o Python
ENV PYTHON_HOME /usr/bin/python3

# Copie seu código fonte do C, Java e Python para o contêiner (se necessário)
# COPY ./seu_codigo_c.c /src/seu_codigo_c.c
# COPY ./seu_codigo_java.java /src/seu_codigo_java.java
# COPY ./seu_codigo_python.py /src/seu_codigo_python.py

# Defina o diretório de trabalh
WORKDIR /src

# Comando padrão para executar um arquivo C (substitua pelo seu nome de arquivo)
# CMD ["gcc", "-o", "seu_codigo_c", "seu_codigo_c.c", "&&", "./seu_codigo_c"]

# Comando padrão para executar um arquivo Java (substitua pelo seu nome de arquivo)
# CMD ["java", "seu_codigo_java"]

# Comando padrão para executar um arquivo Python (substitua pelo seu nome de arquivo)
# CMD ["python", "seu_codigo_python.py"]

# Você pode comentar/descomentar as linhas acima conforme necessário para executar seus programas

# Exemplo: execute o Python por padrão
CMD ["python", "seu_codigo_python.py"]
