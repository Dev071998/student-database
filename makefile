all=main.o add_node.o print.o
gcc = cc;
outfile:$(all)
	$(gcc)$(all) -o outfile
main.o:main.c
	$(gcc) -c main.c
main.o:add_node.c
	$(gcc) -c add_node.c
main.o:print.c
	$(gcc) -c print.c

clean:
	rm * .o
	@echo "cleaning up..."