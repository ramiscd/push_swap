# Libft - 42 Project

> 📚 Primeiro projeto da 42: recriar funções básicas da libc e criar sua própria biblioteca em C.

---

## 📖 Sobre o Projeto

O objetivo da **libft** é implementar uma biblioteca em C contendo funções utilitárias para manipulação de **strings**, **memória** e **listas encadeadas**, além de outras funções de uso recorrente.  
Essa biblioteca será reutilizada em vários outros projetos da 42.

---

## 🛠️ Funcionalidades

A biblioteca está dividida em três blocos principais:

### Parte 1 - Funções da libc
Reimplementação de funções clássicas da `<string.h>` e `<ctype.h>`, como:
- `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- `ft_strlen`, `ft_strlcpy`, `ft_strlcat`
- `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
- `ft_atoi`
- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- `ft_toupper`, `ft_tolower`

### Parte 2 - Funções adicionais
Funções utilitárias para manipulação de strings e memória:
- `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`
- `ft_itoa`
- `ft_strmapi`, `ft_striteri`
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Parte Bônus - Listas encadeadas
Implementação de uma **linked list** simples:
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
- `ft_lstsize`, `ft_lstlast`
- `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

---

## 📂 Estrutura do Projeto

