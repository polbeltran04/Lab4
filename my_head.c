#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
void my_head(){
        int linies, n=0;
        char file[256];
        int i=0, count =0;
        char text[100000], buf[100000],c;
        printf("Nom de l'arxiu: ");
        scanf("%s", file);
        printf("Número de linies a mostrar: ");
        scanf("%d", &linies);
        int fd = open(file, O_RDONLY);
        if (fd==-1){
                printf("ERROR: L'arxiu no existeix");
                exit(0);
        }
        else if (linies <=0){
                printf("ERROR: El nombre de linies a llegir ha de ser més gran que 0");
                exit(0);
        }
        else if (fd!= -1){
                while (linies > count){
                        read(fd, buf, 100000);
                        text[i] = buf[i];
                        c = buf[i];
                        if (c == '\n') count++;
                        i++;
			if (c == '\0')
				break;
                }
                printf("%s", text);
        }
	close(fd);
}
int main(){
        my_head();
        return 0;
}
