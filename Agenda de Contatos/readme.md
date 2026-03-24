# 📞 Agenda de Contatos em C

Projeto simples em linguagem C que simula uma agenda de contatos via terminal.

---

## 🚀 Funcionalidades

- ➕ Adicionar contatos (nome + telefone)
- 🔍 Buscar contato pelo nome
- ⛔ Encerrar cadastro digitando `999`

---

## 🛠️ Tecnologias utilizadas

- Linguagem C
- Bibliotecas padrão:
  - `stdio.h`
  - `string.h`

---

## 📂 Estrutura do Projeto

agendaDeContatos.c  
pss.h  

---

## ▶️ Como executar

### Compilar:
gcc agendaDeContatos.c -o agenda

### Executar:

Linux / Mac:
./agenda

Windows:
agenda.exe

---

## 💡 Como usar

1. Digite o nome do contato  
2. Digite o telefone  
3. Repita o processo  
4. Para finalizar, digite `999`  
5. Em seguida, informe o nome para buscar o contato  

---

## 🔍 Exemplo de uso

Digite o nome do contato: João  
Insira o numero de telefone: 16999999999  

Digite o nome do contato: Maria  
Insira o numero de telefone: 16988888888  

Digite o nome do contato: 999  

Procure pelo nome do contato: João  
Contato Telefonico: 16999999999  

---

## ⚠️ Limitações

- Máximo de 100 contatos  
- Não há validação de telefone  
- Busca exata (case-sensitive)  
- Os dados não são salvos (perdidos ao encerrar)  

---

## 📈 Melhorias futuras

- [ ] Menu interativo  
- [ ] Listar contatos  
- [ ] Salvar em arquivo  
- [ ] Uso de `struct`  
- [ ] Busca sem diferenciar maiúsculas/minúsculas  

---

## 👨‍💻 Autor

Anthony Oliveira Carvalho
