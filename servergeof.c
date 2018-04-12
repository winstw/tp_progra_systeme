#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#define BUF_MAX 200

int main()
{


  mkfifo("/tmp/ctos_fifo", 0666);
  mkfifo("/tmp/stoc_fifo", 0666);
  
  int ctos = open("/tmp/ctos_fifo", O_RDONLY);
  int stoc = open("/tmp/stoc_fifo", O_WRONLY);
  
  printf("SERVER ON\n");
  
  char buffer[BUF_MAX];
  read(ctos, buffer, sizeof(buffer));

  puts(buffer);
  
}
