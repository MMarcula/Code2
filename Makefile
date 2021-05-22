main.o: pole.h objetosc.h pole_p.c objetosc_p.c
	gcc -c main.c

clean:
	rm *.o *.a *.so -rf main
	

pole_p.o: pole_p.c
	gcc -c pole_p.c

objetosc_p.o: objetosc_p.c
	gcc -fPIC -c objetosc_p.c

b_stat.a: pole_p.o
	ar rs b_stat.a pole_p.o

b_dyn.so: objetosc_p.o
	gcc --shared -o b_dyn.so objetosc_p.o
	
main: main.o b_stat.a b_dyn.so
	gcc -Wl,-R -Wl,${PWD} -o main main.c b_dyn.so -L. b_stat.a

