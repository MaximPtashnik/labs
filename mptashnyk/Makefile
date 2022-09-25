all: matrix_rain

FLAGS :=  -Wall -Wextra -Werror -Wpedantic -Iinc -lncursesw 

matrix_rain:
	clang $(FLAGS)  -o matrix_rain src/*.c

clean:
	rm -rf matrix_rain

uninstall:
	rm -rf matrix_rain

reinstall:
	make uninstall
	make

