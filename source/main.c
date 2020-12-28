#include "ps4.h"

int _main(struct thread *td) {
  initKernel();
  initLibc();

  jailbreak();
  enable_browser();

  initSysUtil();

  printf_notification("Enabled browser!");

  return 0;
}
