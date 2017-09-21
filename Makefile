test:*.o
	cc -o test *.o >> debug
*.o:*.c* ../HeadFile/*.h
	cc -c *.c* >> debug
clean:
	ls | grep -Ev "Makefile|movefile|*.c|*.h" | xargs rm -f;rm -f *.o 
