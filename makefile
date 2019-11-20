CC:= arm-linux-gnueabihf-gcc
EXEC:= project

all: app_link
	
app:
	$(CC) -c $(EXEC).c

app_link: app
	$(CC) -o $(EXEC)  $(EXEC).o
	cp $(EXEC) /home/joao/Documentos/Embedded2/pratica06/rootfs/root
	cp $(EXEC) ../pratica06/rootfs/usr/htdocs/project

clean:
	@rm -f $(EXEC) *.o
	@rm -f $(EXEC) ../pratica06/rootfs/usr/htdocs/project
