CC = gcc
SRC = one.c two.c
OBJS = $(SRC:%.c=%.o)


hello: $(OBJS)
	gcc -o $@ $(OBJS)
.c.o:
	$(CC) -c $<

.PHONY: clean
clean:
	$(RM) hello $(OBJS) *~