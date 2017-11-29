#include  <stdio.h>
#include  <signal.h>


void  ALARMhandler(int sig)
{
  signal(SIGALRM, SIG_IGN);       /* ignore this signal       */
  printf("Hello");
  signal(SIGALRM, ALARMhandler);     /* reinstall the handler    */

}

int main(int argc, char *argv[])
{
  signal(SIGALRM, ALARMhandler);     /* reinstall the handler    */
//  alarm(2);                     /* set alarm clock          */
  while (1)
    ;
  printf("All done");
}
