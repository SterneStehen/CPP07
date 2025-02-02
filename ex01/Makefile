# Имя исполняемого файла
NAME = ex01

# Компилятор и флаги
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Исходные файлы и объектные файлы
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

# Цель по умолчанию
all: $(NAME)

# Сборка исполняемого файла
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

# Правило для создания объектных файлов
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Очистка объектных файлов
clean:
	-rm -f $(OBJ)

# Полная очистка (включая исполняемый файл)
fclean: clean
	-rm -f $(NAME)

# Пересборка проекта
re: fclean all

# Специальные цели
.PHONY: all clean fclean re
