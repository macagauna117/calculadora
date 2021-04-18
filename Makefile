CC=gcc
CFLAGS=-I.


calc: calc.o sumaDecimal.o restaDecimal.o asm_io.o sumaBinaria.o restaBinaria.o
	$(CC) $(CFLAGS) -m32 -o calc calc.o sumaDecimal.o restaDecimal.o asm_io.o sumaBinaria.o restaBinaria.o

calc.o: calc.c
	$(CC) -m32 -c calc.c

sumaDecimal.o: sumaDecimal.asm 
	nasm -f elf sumaDecimal.asm

restaDecimal.o: restaDecimal.asm
	nasm -f elf restaDecimal.asm

sumaBinaria.o: sumaBinaria.asm
	nasm -f elf sumaBinaria.asm

restaBinaria.o: restaBinaria.asm
	nasm -f elf restaBinaria.asm

asm_io.o: asm_io.asm
	nasm -f elf -d ELF_TYPE asm_io.asm

clean:
	rm *.o calc
