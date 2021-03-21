CC=gcc
COMPILE=$(CC) -g
CFILES=$(dir \s *.c*)#main.c
OBJECT=main.o#$(CFILES:.c=.o)
TARGET=kr
$(TARGET):$(OBJECT)
	$(COMPILE) -o $@ $(OBJECT)
.c:.o
	$(COMPILE) -c $< -o $@
clean:
	del $(TARGET).exe $(OBJECT)