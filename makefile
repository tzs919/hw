hw:t1.o t2.o
	gcc -o hw t1.o t2.o

t1.o:t1.c  t1.h
	gcc -g -Wall -c -o t1.o t1.c

t2.o:t2.c t2.h
	gcc  -g -Wall -c -o t2.o t2.c

#  .PHONY : clean
clean:
	rm *.o hw


exec:
	cd /codec/temp;pwd
