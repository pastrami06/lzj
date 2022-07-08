procbar:Main.o ProcBar.o
		gcc $^ -o $@
%.o:%.c
		gcc -c $<

.PHONY:clean
	rm -f procbar 
