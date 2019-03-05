#include "kernel_utils.h"

int _main(struct thread *td) {
  initKernel();
  initLibc();
  initPthread();

  uint64_t fw_version = get_fw_version();
  jailbreak(fw_version);

  initSysUtil();

  printf_notification("Enabled browser!");

  return 0;
}
