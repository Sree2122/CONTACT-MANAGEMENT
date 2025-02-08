contacts: main.c contacts.c ui.c
        gcc -o contacts main.c contacts.c ui.c

clean:
        rm -f contacts