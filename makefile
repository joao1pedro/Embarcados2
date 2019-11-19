CC:= arm-linux-gnueabihf-gcc
EXEC:= project

all: app_link
	
app:
	$(CC) -c $(EXEC).c

app_link: app
	$(CC) -o $(EXEC)  $(EXEC).o
	cp $(EXEC) /home/joao/Documentos/Embedded2/pratica06/rootfs/root
	cp $(EXEC) /var/www/html/

clean:
	@rm -f $(EXEC) *.o
	@rm /var/www/html/$(EXEC)
	@rm /home/joao/Documentos/Embedded2/pratica06/rootfs/root/$(EXEC)
