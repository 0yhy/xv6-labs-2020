#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
  if (argc == 1)
  {
    write(2, "Usage: sleep number\n", 20);
    exit(-1);
  }
  int time = atoi(argv[1]);
  sleep(time);
  exit(0);
}