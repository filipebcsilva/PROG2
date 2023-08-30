all: compila
compila: main.c esfera_utils.c
	gcc *.c -o main
fazdiff: 
	./main <Casos/1/test_1.txt >output/test1
	diff Casos/1/saida/out_test_1.txt output/test1
	./main <Casos/2/test_2.txt >output/test2
	diff Casos/2/saida/out_test_2.txt output/test2
	./main <Casos/3/test_3.txt >output/test3
	diff Casos/3/saida/out_test_3.txt output/test3
	./main <Casos/4/test_4.txt >output/test4
	diff Casos/4/saida/out_test_4.txt output/test4
	./main <Casos/5/test_5.txt >output/test5
	diff Casos/5/saida/out_test_5.txt output/test5

