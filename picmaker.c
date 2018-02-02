#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
  int fd = open("image.ppm", O_CREAT | O_TRUNC | 0666);
  
  int r, g, b, i;
  int width = 100;
  int height = 100;
  r = 255;
  g = 255;
  b = 255;
    
  char* s = "P3 400 400 255 ";

  write(fd,s, sizeof(s));

  for (i; i < 255; i-= 1){
    r = 255 -i; 
    write(fd, r ,sizeof(int));
    write(fd, g ,sizeof(int));
    write(fd, b ,sizeof(int));
    write(fd, " " ,sizeof(char));
  }
  // close(fd);
}
