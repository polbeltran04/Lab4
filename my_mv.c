#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void my_mv(){
	 char file[256], new[256];
	 int i=0;
	 char text[100000], buf[100000];
	 printf("Nom de l'arxiu: ");
	 scanf("%s", file);
	 int fd = open(file, O_RDONLY);
	 if (fd==-1){
		  printf("ERROR: L'arxiu no existeix");
		  exit(0);
	 }
	 printf("Introdueix el nou destí/nom: ");
	 scanf("%s", new);
	 int desc=open(new, O_CREAT|O_WRONLY|O_TRUNC, S_IRWXU );
	 while (n = read(fd, buf, 100000-1) > 0){
	 	write(new, buf, n);
	 }
	 int unlink(fd);
	 close(new);
	//FILE *arch = fopen(new, "wt");
	 //if (arch == NULL){
	//	 printf("ERROR: No s'ha pogut crear l'arxiu");
	//	 exit(0);
	// }
	 //else if (fd != -1 && arch != NULL){
	 //	while (buf[i] != "\0"){
	//		read(fd, buf, 1000000);
	//		text[i] = buf[i];
	//		i++;
	//	}
	//	fputs(text, arch);
	//	fclose(arch);
	 //}
}
int main(){
	my_mv();
	return 0;
}
