CREATE TABLE cadastro_usuario (
    id INT AUTO_INCREMENT PRIMARY KEY,
    pais VARCHAR(50),
    nome VARCHAR(100),
    sobrenome VARCHAR(100),
    nickname VARCHAR(50),
    senha VARCHAR(255),
    data_nasc DATE,
    email VARCHAR(100)
);
