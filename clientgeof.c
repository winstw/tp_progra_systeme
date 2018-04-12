#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#define BUFMAX 200

int main()
{
  int ctos = open("/tmp/ctos_fifo", O_WRONLY);
  int stoc = open("/tmp/stoc_fifo", O_RDONLY);

  char buffer[BUFMAX];
  scanf("%s", buffer);


  write(ctos, buffer, sizeof(buffer));

  unlink("/tmp/ctos_fifo");

  
}
